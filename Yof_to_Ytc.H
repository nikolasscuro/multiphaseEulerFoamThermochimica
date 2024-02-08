{
    autoPtr<phaseSystem::specieTransferTable>
        specieTransferPtr(fluid.specieTransfer()); 

    phaseSystem::specieTransferTable&                           
        specieTransfer(specieTransferPtr());

    //fluid.correctReactions();

    forAll(fluid.multiComponentPhases(), multiComponentPhasei)
    {
        phaseModel& phase = fluid.multiComponentPhases()[multiComponentPhasei];
        
        UPtrList<volScalarField>& Y = phase.YActiveRef();
        const volScalarField& alpha = phase;
        const volScalarField& rho = phase.rho();

        if(multiComponentPhasei == 0)
        {
            forAll(Y, i)
            {
                forAll(Y[i], celli)
                {
                    if(i == 0){  Y_gas_gas0[celli]   = Y[0][celli];}
                    if(i == 1){  Y_gas_gas1[celli]   = Y[1][celli];}      
                    if(i == 2){  Y_gas_gas2[celli]   = Y[2][celli];}
                    if(i == 3){  Y_gas_gas3[celli]   = Y[3][celli];}
                    if(i == 4){  Y_gas_gas4[celli]   = Y[4][celli];}                        
                    if(i == 5){  Y_gas_gas5[celli]   = Y[5][celli];}
                    if(i == 6){  Y_gas_gas6[celli]   = Y[6][celli];}
                    if(i == 7){  Y_gas_gas7[celli]   = Y[7][celli];}
                    if(i == 8){  Y_gas_gas8[celli]   = Y[8][celli];}
                    if(i == 9){  Y_gas_gas9[celli]   = Y[9][celli];}
                    if(i == 10){ Y_gas_gas10[celli]  = Y[10][celli];}
                    if(i == 11){ Y_gas_gas11[celli]  = Y[11][celli];}
                    if(i == 12){ Y_gas_gas12[celli]  = Y[12][celli];}
                    if(i == 13){ Y_gas_gas13[celli]  = Y[13][celli];
                                 Y_gas_dummyGas[celli]     = 1 - (Y[0][celli]+Y[1][celli]+Y[2][celli]+Y[3][celli]+Y[4][celli]+Y[5][celli]+Y[6][celli]+Y[7][celli]+Y[8][celli]+Y[9][celli]+Y[10][celli]+Y[11][celli]+Y[12][celli]+Y[13][celli]);
                               }
                }                   
            }
            
            Info << " *** All Gaseous Mass Fractions have been updated and transported  ! ***" << nl;

        }

        if(multiComponentPhasei == 1)
        {
            forAll(Y, i)
            {
                forAll(Y[i], celli)
                {
                    if(i == 0){ Y_liq_Liq1[celli]  = Y[0][celli];}
                    if(i == 1){ Y_liq_Liq2[celli]  = Y[1][celli];}
                    if(i == 2){ Y_liq_Liq3[celli]  = Y[2][celli];}
                    if(i == 3){ Y_liq_Liq4[celli]  = Y[3][celli];}
                    if(i == 4){ Y_liq_Liq5[celli]  = Y[4][celli];}
                    if(i == 5){ Y_liq_Liq6[celli]  = Y[5][celli];                                
                                Y_liq_LiqDummy[celli] = 1 - (Y[0][celli]+Y[1][celli]+Y[2][celli]+Y[3][celli]+Y[4][celli]+Y[5][celli]);
                              }
                }
            }
        
            Info << " *** All Liquidus Mass Fractions have been updated and transported! ***" << nl;


        }
    }

}
