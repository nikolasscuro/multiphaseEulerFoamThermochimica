int counter{0};

forAll(fluid.multiComponentPhases(), multiComponentPhasei)
{
    phaseModel& phase = fluid.multiComponentPhases()[multiComponentPhasei];


    if(multiComponentPhasei == 0)
    {
        forAll(phase, celli)
        {


            if(fluid.multiComponentPhases()[0][celli] < 1e-5)  //no gas
            {
                Y_gas_gas0[celli] = 0;
                Y_gas_gas1[celli] = 0;     //F2
                Y_gas_gas2[celli] = 0;
                Y_gas_gas3[celli] = 0;
                Y_gas_gas4[celli] = 0;
                Y_gas_gas5[celli] = 0;
                Y_gas_gas6[celli] = 0;
                Y_gas_gas7[celli] = 0;
                Y_gas_gas8[celli] = 0;
                Y_gas_gas9[celli] = 0;
                Y_gas_gas10[celli]= 0;
                Y_gas_gas11[celli]= 0;
                Y_gas_gas12[celli]= 0;
                Y_gas_gas13[celli]= 0;
                Y_gas_dummyGas[celli]= 1;
            }
        }
    }
    
    if(multiComponentPhasei == 1)
    {
        forAll(phase, celli)
        {
        
            if(fluid.multiComponentPhases()[1][celli] < 1e-5)
            {
              Y_liq_Liq1[celli] = 0;
              Y_liq_Liq2[celli] = 0;
              Y_liq_Liq3[celli] = 0;
              Y_liq_Liq4[celli] = 0;
              Y_liq_Liq5[celli] = 0;
              Y_liq_Liq6[celli] = 0;
              Y_liq_LiqDummy[celli] = 1;
            }       
                    
                    
                    
            if(fluid.multiComponentPhases()[0][celli] > 0.99 || fluid.multiComponentPhases()[0][celli] < 0.01)  //precision of 0.1%
            {
			//skip calculation if there is no sufficient gas-liquid mixture (minimum of 0.1%)
            }
            else 
            {
                if(Y_gas_gas1[celli]>0.001) 
                {
                    counter = counter + 1;

                    Info << nl << "**********************************************************************"        << nl;
                    Info <<       "   ****   CALCULATING CHEMICAL EQUILIBRIUM FOR CELL   " << celli <<  " *****"  << nl;
                    Info <<       "**********************************************************************"        << nl << nl;

                    Info << nl << "Time                    = " << runTime.timeName() << nl;

                    // ## TEMPERATURE AND PRESSURE FOR THERMOCHIMICA
                    double dTemperature = fluid.multiComponentPhases()[1].thermo().T()[celli];
                    double dPressure    = 101325;//fluid.multiComponentPhases()[1].thermo().p()[celli];

                    Info << "Volume of cell          = " << cv[celli] << nl;
                    Info << "Temperature             = " << dTemperature << nl;
                    Info << "Pressure                = " << dPressure << nl << nl;

                    Info << "OpenFOAM alpha liq  = " << fluid.multiComponentPhases()[1][celli]  << nl;
                    Info << "OpenFOAM alpha gas  = " << fluid.multiComponentPhases()[0][celli]  << nl << nl;
                    
                    Info << " ******    Thermochimica inputs    ****** " <<  nl << nl; 
                    #include "thermochimicaCoupling/thermochimicaCalc.H"

                      // fluid.multiComponentPhases()[1][celli] = alphaLiqTC[celli];
                      // fluid.multiComponentPhases()[0][celli] = 1 - fluid.multiComponentPhases()[1][celli];

                    //excessGas[celli] = alphaGasTC[celli] - fluid.multiComponentPhases()[0][celli];
                    //Info << "excessGas = " << excessGas[celli] << nl << nl;

                   // Info << "     OpenFOAM alpha liq  = " << fluid.multiComponentPhases()[1][celli]  << "  Error =   " << (alphaLiqTC[celli] - fluid.multiComponentPhases()[1][celli])/fluid.multiComponentPhases()[1][celli]*100 << "%" << nl;
                   // Info << "     OpenFOAM alpha gas  = " << fluid.multiComponentPhases()[0][celli]  << "  Error =   " << (alphaGasTC[celli] - fluid.multiComponentPhases()[0][celli])/fluid.multiComponentPhases()[0][celli]*100 << "%" << nl;
                   // Info << "     OpenFOAM alpha tot  = " << fluid.multiComponentPhases()[0][celli] + fluid.multiComponentPhases()[1][celli] << nl << nl;


                   //Info << "Mass Balance Analysis   -  Absolute Difference = " << mass_total_initial - mass_Total_final  << " - Error = " << (mass_Total_final-mass_total_initial)/mass_Total_final*100 << " [%]" << nl; 
                
 

                                    
                }
            }

        }
    }

    Info << "Number of TC Calculations = " << counter << nl;
    counter = 0;
    Info << nl << nl << " ****************************** Phase Fractions Updated ****************************** " << nl;

}