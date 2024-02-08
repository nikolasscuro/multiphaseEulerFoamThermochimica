# multiphaseEulerFoam + Thermochimica

This solver is numerical coupling between multiphaseEulerFoam v9 available here:
https://github.com/OpenFOAM/OpenFOAM-9/tree/master/applications/solvers/multiphase/multiphaseEulerFoam/multiphaseEulerFoam


And the themochemical code Thermochimica, available here:

https://github.com/ORNL-CEES/thermochimica

This solver provides the bridge between computational fluid dynamics and computational thermodynamics to take under consideration chemical reaction for molten salts, and many other applications if programmed. This current solver is specifically designed for the Cs(l) + F2(g) reaction to produce solid particles of CsF(s). Which means, one liquid phase is being consumed injecting fluorine gas to produce cesium fluoride and will only work for the isothermal tutorial here available.

Before cloning this code, I expect you have OF9 installed. 

After clonning this project, some adjustments need to be done to make it work:

> I suggest clonning this solver, and compilling it in your Documents folder. If not, please rename the addres of the five following lines in Make/options

    -I$(HOME)/Documents/MFEFT/phaseSystems/lnInclude \
    -I$(HOME)/Documents/MFEFT/interfacialModels/lnInclude \
    -I$(HOME)/Documents/MFEFT/interfacialCompositionModels/lnInclude \
      $(HOME)/Documents/MFEFT/thermochimica/obj/libthermoc.a \
      $(HOME)/Documents/MFEFT/thermochimica/obj/libthermochimica.a
      
> Delete the empty thermochimica folder and let's install thermochimica. Please follow instructions from here: 

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

		const char filename[120] = "/home/usename/Documents/JRCnoSUBM.dat";  //change this address
		

solver command:

		multiphaseEulerFoamT


This is part of my PhD at Ontario Tech University, and will constantly be updated along the time.


