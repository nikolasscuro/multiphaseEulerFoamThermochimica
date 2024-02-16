# multiphaseEulerFoam + Thermochimica

This solver is numerical coupling between multiphaseEulerFoam v9 available here:
https://github.com/OpenFOAM/OpenFOAM-9/tree/master/applications/solvers/multiphase/multiphaseEulerFoam/multiphaseEulerFoam


And the thermochemical code Thermochimica, is available here:

https://github.com/ORNL-CEES/thermochimica

This solver provides the bridge between computational fluid dynamics and computational thermodynamics to take under consideration chemical reaction for molten salts, and many other applications if programmed. This current solver was especifically designed for capability development between both codes. An example has been used and explained throughout the paper https://doi.org/10.1016/j.anucene.2023.110327

Before using this code, I expect you have OF9 and Thermochimica installed

After clonning this project, some adjustments need to be made to make it work:

> I suggest clonning this solver, and compiling it in your Documents folder, create a MFEFT named folder and copy and paste the following folders from the original multiphaseEulerFoam V9 to there (phaseSystems, interfacialModels, interfacialCompositionModels). Both Thermochimica libraries (.a) you can copy and paste after compiling Thermochimica (give a search on Thermochimica's main folder, find it, copy and paste there).

    -I$(HOME)/Documents/MFEFT/phaseSystems/lnInclude \
    -I$(HOME)/Documents/MFEFT/interfacialModels/lnInclude \
    -I$(HOME)/Documents/MFEFT/interfacialCompositionModels/lnInclude \
      $(HOME)/Documents/MFEFT/thermochimica/obj/libthermoc.a \
      $(HOME)/Documents/MFEFT/thermochimica/obj/libthermochimica.a
      
In the case you haven't installed Thermochimica, please follow instructions from here: 

https://nuclear.ontariotechu.ca/piro/thermochimica/getting-started.php

In summary:

        sudo apt-get install gfortran
		
        sudo apt install libblas-dev liblapack-dev 
		
        git clone https://github.com/ORNL-CEES/thermochimica.git
		
        make
		
        make tests
		
        ./runtests

The available tutorial case used a proprietary database and it is NOT open-source, if you get access to it, please re-write its address in:

		thermochimicaCoupling/thermochimicaCalc.H

		const char filename[120] = "/home/usename/Documents/nameOfDatabase.dat";  //change this address
  This database should be exported using, preferably, FactSage 7.x or 8.x, and you should know which phases, species, components and everything should be included to simulate specific chemical reactions or phase transitions. Otherwise, it might work but will not give realistic results.

  At the same time, both, the OpenFOAM tutorial case AND the solver should 100% match the desired chemical reaction, modifying all necessary headers, otherwise, errors will occur. The current example is designed for only two phases liquid+gas, where the liquid is a molten salt mixture with several species and the gas contains an inert component (Argon) and a reactive one (Fluorine (F2)). 

  
If you use a different set of species, and components, rename everything according to your database. Example:

1) gaseousOutputs.H

All speciesName_gasN[25] = "name of the phase" should be renamed until the last gas species. The order here NEED to match the order declared in openFOAM constant/thermophysicalProperties.gas 

  species
(
    F   
    F2
    UF3
    UF4
    UF5
    UF6
    ZrF4
    FLi
    F2Li2
    F3Li3
    F2Be
    F3BeLi
    ThF4
    F4Be2
    Ar    
);

2) The same should be done for liquidus.Outputs.H

Please note that liquid species in molten salts should be written the way it is:

Example: char pair_Liq1[25] = "Li//F";

3) Please, make sure that all chemical properties in chemicalPropertiesTC.H are correct. The code uses generic terms for species1 until speciesN for each phase. This way, M_gas0 is F, as declared throughout the code, and OpenFOAM tutorial. The same for liquid species.
		
4) thermochimicaCalc.H should also be modified if a different set of molten salt is used. The atomic number of all elements must be correct. Each element here should math dMassElement order.

  Thermochimica::setElementMass(iElement, dMass);
  iElement = 3; //Li
  dMass = dMassElement1; 
  Thermochimica::setElementMass(iElement, dMass);
  iElement = 4; //Be
  dMass = dMassElement2;
  Thermochimica::setElementMass(iElement, dMass);
  iElement = 40; //Zr
  dMass = dMassElement3;                    
  Thermochimica::setElementMass(iElement, dMass);
  iElement = 90; //Th
  dMass = dMassElement4;
  Thermochimica::setElementMass(iElement, dMass);
  iElement = 92; //U
  dMass = dMassElement5;
  Thermochimica::setElementMass(iElement, dMass);
  iElement = 9; //F
  dMass = dMassElement6+2*nGas1; //Note here that the amount of fluorine from the liquid phase + the injected nGas1 is added to fluorine, if you remove nGas1, no fluorination reaction will happen.
  Thermochimica::setElementMass(iElement, dMass);
  iElement = 18; //Ar
  dMass = nGasDummyGas;                         
  Thermochimica::setElementMass(iElement, dMass);
  
Example: your molten salt system is LiF+BeF2+ZrF4+ThF4+UF4+UF3, the following should be listed:

    double dMassElement1  = (Xi_liq_Liq1[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //Li
    double dMassElement2  = (Xi_liq_Liq2[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //Be
    double dMassElement3  = (Xi_liq_Liq3[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //Zr
    double dMassElement4  = (Xi_liq_Liq4[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //Th
    double dMassElement5  = (Xi_liq_Liq5[celli]+Xi_liq_Liq6[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //UF4+UF3
    double dMassElement6  = (Xi_liq_Liq1[celli]+2*Xi_liq_Liq2[celli]+4*(Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli])+3*Xi_liq_Liq6[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //all F

5) in YEqn3.H you can change the precision of unreacted cells to speed-up calculations, but I recommend using what is currently set.


Then, you can compile the code and run the tutorial.

multiphaseEulerFoamThermochimica or multiphaseEulerFoamT8


This is part of my PhD at Ontario Tech University, and will constantly be updated along the time.


