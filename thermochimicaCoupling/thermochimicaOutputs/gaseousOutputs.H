if(fluid.multiComponentPhases()[0][celli]>0)
{

//Ideal Gas Phase formed after equilibrium 
char phaseName_gas_ideal[25] = "gas_ideal";
ideal_gas_mols = Thermochimica::getSolnPhaseMol(phaseName_gas_ideal); 
Info << "Moles of ideal gas                        (TC)  = " << ideal_gas_mols.first << nl;

//Info << "NEW VOLUME OF REACTED GASES             (TC)  = " << idealGasPhase[celli]  << nl;
idealGasPhase[celli] =  (ideal_gas_mols.first*R_gas*dTemperature)/(dPressure); //volume of Gas

/*
//OLD TOTAL VOLUME
double volumeInitial = fluid.multiComponentPhases()[0][celli]*cv[celli];
Info << "OLD TOTAL VOLUME                          (TC)  = " << volumeInitial << nl;

//OLD Helium VOLUME
double volumeOfHeliumGasInitial = volumeInitial*Xi_gas_dummyGas[celli];
Info << "OLD VOLUME OF HeliumGas                    (TC)  = " << volumeOfHeliumGasInitial << nl;

//OLD SPECIES VOLUME     (nOldMolsOldReaction = Fextra + F2extra + nFLi_old +nILi_old + nCsI_old + nCsF_old + nThF4_old;)
double volumePreviousGases = (nOldMols*R_gas*dTemperature/dPressure);
Info << "OLD VOLUME OF REMAINED SPECIES            (TC)  = " << volumePreviousGases << nl;

// NEW REACTED GASES FORMED
double volumeNewGases = (ideal_gas_mols.first)*R_gas*dTemperature/dPressure;
Info << "NEW VOLUME OF REMAINED SPECIES            (TC)  = " << volumeNewGases << nl;

//VOLUME TOTAL (PREVIOUS GASES PRESENT):
double  volumeFinal = volumeNewGases ;
Info << "VOLUME TOTAL-OLD Xe + new and old species (TC)  = " << volumeFinal << nl;

//increased volume in %
double increasedVolume = volumeFinal/volumeInitial;
Info << "increased volume in %                     (TC)  = " << increasedVolume << nl;
*/


//Final alpha gas after reaction
alphaGasTC[celli] = idealGasPhase[celli]/cv[celli];//fluid.multiComponentPhases()[0][celli]*increasedVolume;
Info << "Final alpha gas after reaction            (TC)  = " << alphaGasTC[celli] << nl << nl;



    char speciesName_gas0[25] = "F";
    gas0_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas0);
    Xi_gas_gas0[celli] =  (gas0_g_mols.first);

    char speciesName_gas1[25] = "F2";
    gas1_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas1);
    Xi_gas_gas1[celli] =  (gas1_g_mols.first);

    char speciesName_gas2[25] = "UF3";
    gas2_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas2);
    Xi_gas_gas2[celli] = 0;// (gas2_g_mols.first);

    char speciesName_gas3[25] = "UF4";
    gas3_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas3);
    Xi_gas_gas3[celli] = 0;//(gas3_g_mols.first);

    char speciesName_gas4[25] = "UF5";
    gas4_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas4);
    Xi_gas_gas4[celli] = 0;// (gas4_g_mols.first);

    char speciesName_gas5[25] = "UF6";
    gas5_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas5);
    Xi_gas_gas5[celli] =  (gas5_g_mols.first);

    char speciesName_gas6[25] = "ZrF4";
    gas6_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas6);
    Xi_gas_gas6[celli] = (gas6_g_mols.first);

    char speciesName_gas7[25] = "FLi";
    gas7_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas7);
    Xi_gas_gas7[celli] =  (gas7_g_mols.first);

    char speciesName_gas8[25] = "F2Li2";
    gas8_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas8);
    Xi_gas_gas8[celli] =  (gas8_g_mols.first);

    char speciesName_gas9[25] = "F3Li3";
    gas9_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas9);
    Xi_gas_gas9[celli] =  (gas9_g_mols.first);

    char speciesName_gas10[25] = "F2Be";
    gas10_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas10);
    Xi_gas_gas10[celli] = (gas10_g_mols.first);

    char speciesName_gas11[25] = "F3BeLi";
    gas11_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas11);
    Xi_gas_gas11[celli] = (gas11_g_mols.first);

    char speciesName_gas12[25] = "ThF4";
    gas12_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas12);
    Xi_gas_gas12[celli] = (gas12_g_mols.first);

    char speciesName_gas13[25] = "F4Be2";
    gas13_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gas13);
    Xi_gas_gas13[celli] = (gas13_g_mols.first);

    char speciesName_gasDummy[25] = "Ar";
    gasDummy_g_mols = Thermochimica::getOutputMolSpeciesPhase(phaseName_gas_ideal, speciesName_gasDummy);
    Xi_gas_dummyGas[celli] = (gasDummy_g_mols.first);

    double sumGases = Xi_gas_gas0[celli]*M_gas0+Xi_gas_gas1[celli]*M_gas1+Xi_gas_gas2[celli]*M_gas2+Xi_gas_gas3[celli]*M_gas3+Xi_gas_gas4[celli]*M_gas4+Xi_gas_gas5[celli]*M_gas5+
                      Xi_gas_gas6[celli]*M_gas6+Xi_gas_gas7[celli]*M_gas7+Xi_gas_gas8[celli]*M_gas8+Xi_gas_gas9[celli]*M_gas9+Xi_gas_gas10[celli]*M_gas10+Xi_gas_gas11[celli]*M_gas11+
                      Xi_gas_gas12[celli]*M_gas12+Xi_gas_gas13[celli]*M_gas13 + Xi_gas_dummyGas[celli]*M_dummyGas;
  
    Y_after_gas_gas0[celli]  =   Xi_gas_gas0[celli]*M_gas0 /(sumGases);
    Y_after_gas_gas1[celli]  =   Xi_gas_gas1[celli]*M_gas1 /(sumGases);
    Y_after_gas_gas2[celli]  =   Xi_gas_gas2[celli]*M_gas2 /(sumGases);
    Y_after_gas_gas3[celli]  =   Xi_gas_gas3[celli]*M_gas3 /(sumGases);
    Y_after_gas_gas4[celli]  =   Xi_gas_gas4[celli]*M_gas4 /(sumGases);
    Y_after_gas_gas5[celli]  =   Xi_gas_gas5[celli]*M_gas5 /(sumGases);
    Y_after_gas_gas6[celli]  =   Xi_gas_gas6[celli]*M_gas6 /(sumGases);
    Y_after_gas_gas7[celli]  =   Xi_gas_gas7[celli]*M_gas7 /(sumGases);
    Y_after_gas_gas8[celli]  =   Xi_gas_gas8[celli]*M_gas8 /(sumGases);
    Y_after_gas_gas9[celli]  =   Xi_gas_gas9[celli]*M_gas9 /(sumGases);
    Y_after_gas_gas10[celli] =  Xi_gas_gas10[celli]*M_gas10/(sumGases);
    Y_after_gas_gas11[celli] =  Xi_gas_gas11[celli]*M_gas11/(sumGases);
    Y_after_gas_gas12[celli] =  Xi_gas_gas12[celli]*M_gas12/(sumGases);
    Y_after_gas_gas13[celli] =  Xi_gas_gas13[celli]*M_gas13/(sumGases);
    Y_after_gas_dummyGas[celli] = Xi_gas_dummyGas[celli]*M_dummyGas/(sumGases);

    // 2nd iteraction
     double sumGases2  = (Y_after_gas_gas0[celli]*(1/M_gas0)+Y_after_gas_gas1[celli]*(1/M_gas1)+Y_after_gas_gas2[celli]*(1/M_gas2)+Y_after_gas_gas3[celli]*(1/M_gas3)+
                          Y_after_gas_gas4[celli]*(1/M_gas4)+Y_after_gas_gas5[celli]*(1/M_gas5)+Y_after_gas_gas6[celli]*(1/M_gas6)+Y_after_gas_gas7[celli]*(1/M_gas7)+
                          Y_after_gas_gas8[celli]*(1/M_gas8)+Y_after_gas_gas9[celli]*(1/M_gas9)+Y_after_gas_gas10[celli]*(1/M_gas10)+Y_after_gas_gas11[celli]*(1/M_gas11)+
                          Y_after_gas_gas12[celli]*(1/M_gas12)+Y_after_gas_gas13[celli]*(1/M_gas13)+Y_after_gas_dummyGas[celli]*(1/M_dummyGas));

    Xi_gas_gas0[celli]     =  Y_after_gas_gas0[celli]*(1/M_gas0) /sumGases2;
    Xi_gas_gas1[celli]     =  Y_after_gas_gas1[celli]*(1/M_gas1) /sumGases2;
    Xi_gas_gas2[celli]     =  Y_after_gas_gas2[celli]*(1/M_gas2) /sumGases2;
    Xi_gas_gas3[celli]     =  Y_after_gas_gas3[celli]*(1/M_gas3) /sumGases2;
    Xi_gas_gas4[celli]     =  Y_after_gas_gas4[celli]*(1/M_gas4) /sumGases2;
    Xi_gas_gas5[celli]     =  Y_after_gas_gas5[celli]*(1/M_gas5) /sumGases2;  
    Xi_gas_gas6[celli]     =  Y_after_gas_gas6[celli]*(1/M_gas6) /sumGases2;      
    Xi_gas_gas7[celli]     =  Y_after_gas_gas7[celli]*(1/M_gas7) /sumGases2;       
    Xi_gas_gas8[celli]     =  Y_after_gas_gas8[celli]*(1/M_gas8) /sumGases2;     
    Xi_gas_gas9[celli]     =  Y_after_gas_gas9[celli]*(1/M_gas9) /sumGases2;    
    Xi_gas_gas10[celli]    = Y_after_gas_gas10[celli]*(1/M_gas10)/sumGases2;   
    Xi_gas_gas11[celli]    = Y_after_gas_gas11[celli]*(1/M_gas11)/sumGases2;   
    Xi_gas_gas12[celli]    = Y_after_gas_gas12[celli]*(1/M_gas12)/sumGases2;   
    Xi_gas_gas13[celli]    = Y_after_gas_gas13[celli]*(1/M_gas13)/sumGases2;   
    Xi_gas_dummyGas[celli] = Y_after_gas_dummyGas[celli]*(1/M_dummyGas)/sumGases2;  
  
         sumGases = Xi_gas_gas0[celli]*M_gas0+Xi_gas_gas1[celli]*M_gas1+Xi_gas_gas2[celli]*M_gas2+Xi_gas_gas3[celli]*M_gas3+Xi_gas_gas4[celli]*M_gas4+Xi_gas_gas5[celli]*M_gas5+
                    Xi_gas_gas6[celli]*M_gas6+Xi_gas_gas7[celli]*M_gas7+Xi_gas_gas8[celli]*M_gas8+Xi_gas_gas9[celli]*M_gas9+Xi_gas_gas10[celli]*M_gas10+Xi_gas_gas11[celli]*M_gas11+
                    Xi_gas_gas12[celli]*M_gas12+Xi_gas_gas13[celli]*M_gas13 + Xi_gas_dummyGas[celli]*M_dummyGas;

    Y_after_gas_gas0[celli]  =   Xi_gas_gas0[celli]*M_gas0 /(sumGases);
    Y_after_gas_gas1[celli]  =   Xi_gas_gas1[celli]*M_gas1 /(sumGases);
    Y_after_gas_gas2[celli]  =   Xi_gas_gas2[celli]*M_gas2 /(sumGases);
    Y_after_gas_gas3[celli]  =   Xi_gas_gas3[celli]*M_gas3 /(sumGases);
    Y_after_gas_gas4[celli]  =   Xi_gas_gas4[celli]*M_gas4 /(sumGases);
    Y_after_gas_gas5[celli]  =   Xi_gas_gas5[celli]*M_gas5 /(sumGases);
    Y_after_gas_gas6[celli]  =   Xi_gas_gas6[celli]*M_gas6 /(sumGases);
    Y_after_gas_gas7[celli]  =   Xi_gas_gas7[celli]*M_gas7 /(sumGases);
    Y_after_gas_gas8[celli]  =   Xi_gas_gas8[celli]*M_gas8 /(sumGases);
    Y_after_gas_gas9[celli]  =   Xi_gas_gas9[celli]*M_gas9 /(sumGases);
    Y_after_gas_gas10[celli] =  Xi_gas_gas10[celli]*M_gas10/(sumGases);
    Y_after_gas_gas11[celli] =  Xi_gas_gas11[celli]*M_gas11/(sumGases);
    Y_after_gas_gas12[celli] =  Xi_gas_gas12[celli]*M_gas12/(sumGases);
    Y_after_gas_gas13[celli] =  Xi_gas_gas13[celli]*M_gas13/(sumGases);
    Y_after_gas_dummyGas[celli] =  Xi_gas_dummyGas[celli]*M_dummyGas/(sumGases);

    // 3rd iteraction
            sumGases2  = (Y_after_gas_gas0[celli]*(1/M_gas0)+Y_after_gas_gas1[celli]*(1/M_gas1)+Y_after_gas_gas2[celli]*(1/M_gas2)+Y_after_gas_gas3[celli]*(1/M_gas3)+
                          Y_after_gas_gas4[celli]*(1/M_gas4)+Y_after_gas_gas5[celli]*(1/M_gas5)+Y_after_gas_gas6[celli]*(1/M_gas6)+Y_after_gas_gas7[celli]*(1/M_gas7)+
                          Y_after_gas_gas8[celli]*(1/M_gas8)+Y_after_gas_gas9[celli]*(1/M_gas9)+Y_after_gas_gas10[celli]*(1/M_gas10)+Y_after_gas_gas11[celli]*(1/M_gas11)+
                          Y_after_gas_gas12[celli]*(1/M_gas12)+Y_after_gas_gas13[celli]*(1/M_gas13)+Y_after_gas_dummyGas[celli]*(1/M_dummyGas));

    Xi_gas_gas0[celli]     =  Y_after_gas_gas0[celli]*(1/M_gas0) /sumGases2;
    Xi_gas_gas1[celli]     =  Y_after_gas_gas1[celli]*(1/M_gas1) /sumGases2;
    Xi_gas_gas2[celli]     =  Y_after_gas_gas2[celli]*(1/M_gas2) /sumGases2;
    Xi_gas_gas3[celli]     =  Y_after_gas_gas3[celli]*(1/M_gas3) /sumGases2;
    Xi_gas_gas4[celli]     =  Y_after_gas_gas4[celli]*(1/M_gas4) /sumGases2;
    Xi_gas_gas5[celli]     =  Y_after_gas_gas5[celli]*(1/M_gas5) /sumGases2;  
    Xi_gas_gas6[celli]     =  Y_after_gas_gas6[celli]*(1/M_gas6) /sumGases2;      
    Xi_gas_gas7[celli]     =  Y_after_gas_gas7[celli]*(1/M_gas7) /sumGases2;       
    Xi_gas_gas8[celli]     =  Y_after_gas_gas8[celli]*(1/M_gas8) /sumGases2;     
    Xi_gas_gas9[celli]     =  Y_after_gas_gas9[celli]*(1/M_gas9) /sumGases2;    
    Xi_gas_gas10[celli]    = Y_after_gas_gas10[celli]*(1/M_gas10)/sumGases2;   
    Xi_gas_gas11[celli]    = Y_after_gas_gas11[celli]*(1/M_gas11)/sumGases2;   
    Xi_gas_gas12[celli]    = Y_after_gas_gas12[celli]*(1/M_gas12)/sumGases2;   
    Xi_gas_gas13[celli]    = Y_after_gas_gas13[celli]*(1/M_gas13)/sumGases2;   
    Xi_gas_dummyGas[celli] = Y_after_gas_dummyGas[celli]*(1/M_dummyGas)/sumGases2;  
  
    sumGases = Xi_gas_gas0[celli]*M_gas0+Xi_gas_gas1[celli]*M_gas1+Xi_gas_gas2[celli]*M_gas2+Xi_gas_gas3[celli]*M_gas3+Xi_gas_gas4[celli]*M_gas4+Xi_gas_gas5[celli]*M_gas5+
                    Xi_gas_gas6[celli]*M_gas6+Xi_gas_gas7[celli]*M_gas7+Xi_gas_gas8[celli]*M_gas8+Xi_gas_gas9[celli]*M_gas9+Xi_gas_gas10[celli]*M_gas10+Xi_gas_gas11[celli]*M_gas11+
                    Xi_gas_gas12[celli]*M_gas12+Xi_gas_gas13[celli]*M_gas13 + Xi_gas_dummyGas[celli]*M_dummyGas;

    Y_after_gas_gas0[celli]  =   Xi_gas_gas0[celli]*M_gas0 /(sumGases);
    Y_after_gas_gas1[celli]  =   Xi_gas_gas1[celli]*M_gas1 /(sumGases);
    Y_after_gas_gas2[celli]  =   Xi_gas_gas2[celli]*M_gas2 /(sumGases);
    Y_after_gas_gas3[celli]  =   Xi_gas_gas3[celli]*M_gas3 /(sumGases);
    Y_after_gas_gas4[celli]  =   Xi_gas_gas4[celli]*M_gas4 /(sumGases);
    Y_after_gas_gas5[celli]  =   Xi_gas_gas5[celli]*M_gas5 /(sumGases);
    Y_after_gas_gas6[celli]  =   Xi_gas_gas6[celli]*M_gas6 /(sumGases);
    Y_after_gas_gas7[celli]  =   Xi_gas_gas7[celli]*M_gas7 /(sumGases);
    Y_after_gas_gas8[celli]  =   Xi_gas_gas8[celli]*M_gas8 /(sumGases);
    Y_after_gas_gas9[celli]  =   Xi_gas_gas9[celli]*M_gas9 /(sumGases);
    Y_after_gas_gas10[celli] =  Xi_gas_gas10[celli]*M_gas10/(sumGases);
    Y_after_gas_gas11[celli] =  Xi_gas_gas11[celli]*M_gas11/(sumGases);
    Y_after_gas_gas12[celli] =  Xi_gas_gas12[celli]*M_gas12/(sumGases);
    Y_after_gas_gas13[celli] =  Xi_gas_gas13[celli]*M_gas13/(sumGases);
    Y_after_gas_dummyGas[celli] =  Xi_gas_dummyGas[celli]*M_dummyGas/(sumGases);

// 3rd iteraction
    sumGases2  = (Y_after_gas_gas0[celli]*(1/M_gas0)+Y_after_gas_gas1[celli]*(1/M_gas1)+Y_after_gas_gas2[celli]*(1/M_gas2)+Y_after_gas_gas3[celli]*(1/M_gas3)+
                          Y_after_gas_gas4[celli]*(1/M_gas4)+Y_after_gas_gas5[celli]*(1/M_gas5)+Y_after_gas_gas6[celli]*(1/M_gas6)+Y_after_gas_gas7[celli]*(1/M_gas7)+
                          Y_after_gas_gas8[celli]*(1/M_gas8)+Y_after_gas_gas9[celli]*(1/M_gas9)+Y_after_gas_gas10[celli]*(1/M_gas10)+Y_after_gas_gas11[celli]*(1/M_gas11)+
                          Y_after_gas_gas12[celli]*(1/M_gas12)+Y_after_gas_gas13[celli]*(1/M_gas13)+Y_after_gas_dummyGas[celli]*(1/M_dummyGas));

    Xi_gas_gas0[celli]     =  Y_after_gas_gas0[celli]*(1/M_gas0) /sumGases2;
    Xi_gas_gas1[celli]     =  Y_after_gas_gas1[celli]*(1/M_gas1) /sumGases2;
    Xi_gas_gas2[celli]     =  Y_after_gas_gas2[celli]*(1/M_gas2) /sumGases2;
    Xi_gas_gas3[celli]     =  Y_after_gas_gas3[celli]*(1/M_gas3) /sumGases2;
    Xi_gas_gas4[celli]     =  Y_after_gas_gas4[celli]*(1/M_gas4) /sumGases2;
    Xi_gas_gas5[celli]     =  Y_after_gas_gas5[celli]*(1/M_gas5) /sumGases2;  
    Xi_gas_gas6[celli]     =  Y_after_gas_gas6[celli]*(1/M_gas6) /sumGases2;      
    Xi_gas_gas7[celli]     =  Y_after_gas_gas7[celli]*(1/M_gas7) /sumGases2;       
    Xi_gas_gas8[celli]     =  Y_after_gas_gas8[celli]*(1/M_gas8) /sumGases2;     
    Xi_gas_gas9[celli]     =  Y_after_gas_gas9[celli]*(1/M_gas9) /sumGases2;    
    Xi_gas_gas10[celli]    = Y_after_gas_gas10[celli]*(1/M_gas10)/sumGases2;   
    Xi_gas_gas11[celli]    = Y_after_gas_gas11[celli]*(1/M_gas11)/sumGases2;   
    Xi_gas_gas12[celli]    = Y_after_gas_gas12[celli]*(1/M_gas12)/sumGases2;   
    Xi_gas_gas13[celli]    = Y_after_gas_gas13[celli]*(1/M_gas13)/sumGases2;   
    Xi_gas_dummyGas[celli] = Y_after_gas_dummyGas[celli]*(1/M_dummyGas)/sumGases2; 

    Info << "Xi_gas_gas0  (TC)'       = " << Xi_gas_gas0[celli]   << nl;
    Info << "Xi_gas_gas1  (TC)'       = " << Xi_gas_gas1[celli]   << nl;
    Info << "Xi_gas_gas2  (TC)'       = " << Xi_gas_gas2[celli]   << nl;
    Info << "Xi_gas_gas3  (TC)'       = " << Xi_gas_gas3[celli]   << nl;
    Info << "Xi_gas_gas4  (TC)'       = " << Xi_gas_gas4[celli]   << nl;
    Info << "Xi_gas_gas5  (TC)'       = " << Xi_gas_gas5[celli]   << nl;
    Info << "Xi_gas_gas6  (TC)'       = " << Xi_gas_gas6[celli]   << nl;
    Info << "Xi_gas_gas7  (TC)'       = " << Xi_gas_gas7[celli]   << nl;
    Info << "Xi_gas_gas8  (TC)'       = " << Xi_gas_gas8[celli]   << nl;
    Info << "Xi_gas_gas9  (TC)'       = " << Xi_gas_gas9[celli]   << nl;
    Info << "Xi_gas_gas10 (TC)'       = " << Xi_gas_gas10[celli]  << nl;
    Info << "Xi_gas_gas11 (TC)'       = " << Xi_gas_gas11[celli]  << nl;
    Info << "Xi_gas_gas12 (TC)'       = " << Xi_gas_gas12[celli]  << nl;
    Info << "Xi_gas_gas13 (TC)'       = " << Xi_gas_gas13[celli]  << nl << nl;
    Info << "Xi_gas_dummyGas (TC)'       = " << Xi_gas_dummyGas[celli]  << nl << nl;

    Info << "Y_after_gas_gas0  (TC)   = " << Y_after_gas_gas0[celli]  << nl;
    Info << "Y_after_gas_gas1  (TC)   = " << Y_after_gas_gas1[celli]  << nl;
    Info << "Y_after_gas_gas2  (TC)   = " << Y_after_gas_gas2[celli]  << nl;
    Info << "Y_after_gas_gas3  (TC)   = " << Y_after_gas_gas3[celli]  << nl;  
    Info << "Y_after_gas_gas4  (TC)   = " << Y_after_gas_gas4[celli]  << nl;
    Info << "Y_after_gas_gas5  (TC)   = " << Y_after_gas_gas5[celli]  << nl;
    Info << "Y_after_gas_gas6  (TC)   = " << Y_after_gas_gas6[celli]  << nl;
    Info << "Y_after_gas_gas7  (TC)   = " << Y_after_gas_gas7[celli]  << nl;
    Info << "Y_after_gas_gas8  (TC)   = " << Y_after_gas_gas8[celli]  << nl;
    Info << "Y_after_gas_gas9  (TC)   = " << Y_after_gas_gas9[celli]  << nl;
    Info << "Y_after_gas_gas10 (TC)   = " << Y_after_gas_gas10[celli] << nl;
    Info << "Y_after_gas_gas11 (TC)   = " << Y_after_gas_gas11[celli] << nl;
    Info << "Y_after_gas_gas12 (TC)   = " << Y_after_gas_gas12[celli] << nl;
    Info << "Y_after_gas_gas13 (TC)   = " << Y_after_gas_gas13[celli] << nl;
    Info << "Y_after_gas_gas13 (TC)   = " << Y_after_gas_gas13[celli] << nl;
    Info << "Y_after_gas_dummyGas (TC)   = " << Y_after_gas_dummyGas[celli] << nl;
    Info << "Y_total_gas       (TC)   = " << Y_after_gas_gas0[celli]+Y_after_gas_gas1[celli]+Y_after_gas_gas2[celli]+Y_after_gas_gas3[celli]+Y_after_gas_gas4[celli]+
                                              Y_after_gas_gas5[celli]+Y_after_gas_gas6[celli]+Y_after_gas_gas7[celli]+Y_after_gas_gas8[celli]+Y_after_gas_gas9[celli]+
                                              Y_after_gas_gas10[celli]+Y_after_gas_gas11[celli]+Y_after_gas_gas12[celli]+Y_after_gas_gas13[celli] +Y_after_gas_dummyGas[celli] << nl << nl;


    //Re-calculating the mass fraction of gases, taking into consideration the mass of previous-nearby cells, and also maintaing the mass of inert gas constant.

    //MASS OF SPECIES FROM THE REACTION
    mass_after_gas_gas0[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas0[celli] )/(R_gas*dTemperature))*M_gas0;
    mass_after_gas_gas1[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas1[celli] )/(R_gas*dTemperature))*M_gas1;
    mass_after_gas_gas2[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas2[celli] )/(R_gas*dTemperature))*M_gas2;
    mass_after_gas_gas3[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas3[celli] )/(R_gas*dTemperature))*M_gas3;
    mass_after_gas_gas4[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas4[celli] )/(R_gas*dTemperature))*M_gas4;
    mass_after_gas_gas5[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas5[celli] )/(R_gas*dTemperature))*M_gas5;
    mass_after_gas_gas6[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas6[celli] )/(R_gas*dTemperature))*M_gas6;
    mass_after_gas_gas7[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas7[celli] )/(R_gas*dTemperature))*M_gas7;
    mass_after_gas_gas8[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas8[celli] )/(R_gas*dTemperature))*M_gas8;
    mass_after_gas_gas9[celli]   = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas9[celli] )/(R_gas*dTemperature))*M_gas9;
    mass_after_gas_gas10[celli]  = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas10[celli])/(R_gas*dTemperature))*M_gas10;
    mass_after_gas_gas11[celli]  = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas11[celli])/(R_gas*dTemperature))*M_gas11;
    mass_after_gas_gas12[celli]  = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas12[celli])/(R_gas*dTemperature))*M_gas12;
    mass_after_gas_gas13[celli]  = ((dPressure*(alphaGasTC[celli])*cv[celli]*Xi_gas_gas13[celli])/(R_gas*dTemperature))*M_gas13;
    mass_after_gas_total[celli] =  mass_after_gas_gas0[celli]  + mass_after_gas_gas1[celli]  + mass_after_gas_gas2[celli]  + mass_after_gas_gas3[celli]  + mass_after_gas_gas4[celli] +
                                   mass_after_gas_gas5[celli]  +  mass_after_gas_gas6[celli] + mass_after_gas_gas7[celli]  + mass_after_gas_gas8[celli]  + mass_after_gas_gas9[celli] + 
                                   mass_after_gas_gas10[celli] + mass_after_gas_gas11[celli] + mass_after_gas_gas12[celli] + mass_after_gas_gas13[celli];

/*
    Info << "mass_after_gas_gas0     (TC)   = " << mass_after_gas_gas0[celli]  << nl; 
    Info << "mass_after_gas_gas1     (TC)   = " << mass_after_gas_gas1[celli]  << nl; 
    Info << "mass_after_gas_gas2     (TC)   = " << mass_after_gas_gas2[celli]  << nl; 
    Info << "mass_after_gas_gas3     (TC)   = " << mass_after_gas_gas3[celli]  << nl; 
    Info << "mass_after_gas_gas4     (TC)   = " << mass_after_gas_gas4[celli]  << nl;
    Info << "mass_after_gas_gas5     (TC)   = " << mass_after_gas_gas5[celli]  << nl;
    Info << "mass_after_gas_gas6     (TC)   = " << mass_after_gas_gas6[celli]  << nl;
    Info << "mass_after_gas_gas7     (TC)   = " << mass_after_gas_gas7[celli]  << nl; 
    Info << "mass_after_gas_gas8     (TC)   = " << mass_after_gas_gas8[celli]  << nl; 
    Info << "mass_after_gas_gas9     (TC)   = " << mass_after_gas_gas9[celli]  << nl; 
    Info << "mass_after_gas_gas10    (TC)   = " << mass_after_gas_gas10[celli] << nl; 
    Info << "mass_after_gas_gas11    (TC)   = " << mass_after_gas_gas11[celli] << nl; 
    Info << "mass_after_gas_gas12    (TC)   = " << mass_after_gas_gas12[celli] << nl; 
    Info << "mass_after_gas_gas13    (TC)   = " << mass_after_gas_gas13[celli] << nl; 
    Info << "mass_after_gas_total    (TC)   = " << mass_after_gas_total[celli] << nl<< nl;
    */
    //RE ALOCATING OLD THINGS TO RE WEIGHT Y SPECIES

    mass_after_gas_gas0[celli]     = (mass_after_gas_gas0[celli] + mass_gas_gas0[celli]);   
    mass_after_gas_gas1[celli]     = (mass_after_gas_gas1[celli]); //F2 mass will be 
    mass_after_gas_gas2[celli]     = (mass_after_gas_gas2[celli] + mass_gas_gas2[celli]);   
    mass_after_gas_gas3[celli]     = (mass_after_gas_gas3[celli] + mass_gas_gas3[celli]);
    mass_after_gas_gas4[celli]     = (mass_after_gas_gas4[celli] + mass_gas_gas4[celli]);
    mass_after_gas_gas5[celli]     = (mass_after_gas_gas5[celli] + mass_gas_gas5[celli]);
    mass_after_gas_gas6[celli]     = (mass_after_gas_gas6[celli] + mass_gas_gas6[celli]);
    mass_after_gas_gas7[celli]     = (mass_after_gas_gas7[celli] + mass_gas_gas7[celli]);
    mass_after_gas_gas8[celli]     = (mass_after_gas_gas8[celli] + mass_gas_gas8[celli]);
    mass_after_gas_gas9[celli]     = (mass_after_gas_gas9[celli] + mass_gas_gas9[celli]);
    mass_after_gas_gas10[celli]    = (mass_after_gas_gas10[celli]+ mass_gas_gas10[celli]);
    mass_after_gas_gas11[celli]    = (mass_after_gas_gas11[celli]+ mass_gas_gas11[celli]);
    mass_after_gas_gas12[celli]    = (mass_after_gas_gas12[celli]+ mass_gas_gas12[celli]);
    mass_after_gas_gas13[celli]    = (mass_after_gas_gas13[celli]+ mass_gas_gas13[celli]);
    mass_after_gas_dummyGas[celli] =  mass_gas_dummyGas[celli];                             //the mass of inert gas will keep the same, of course.

    mass_after_gas_total[celli]   =  (mass_after_gas_gas0[celli]  + mass_after_gas_gas1[celli]  + 
                                      mass_after_gas_gas2[celli]  + mass_after_gas_gas3[celli]  + mass_after_gas_gas4[celli]  +  mass_after_gas_gas5[celli] + 
                                      mass_after_gas_gas6[celli]  + mass_after_gas_gas7[celli]  + mass_after_gas_gas8[celli]  + mass_after_gas_gas9[celli]  + 
                                      mass_after_gas_gas10[celli] + mass_after_gas_gas11[celli] + mass_after_gas_gas12[celli] + mass_after_gas_gas13[celli] + mass_after_gas_dummyGas[celli] );
  
  /*
    Info << "mass_after_gas_gas0_accumulated*     (TC)   = " << mass_after_gas_gas0[celli]       << "   ---    deltaMass = " << mass_after_gas_gas0[celli]  - mass_gas_gas0[celli]   << nl; 
    Info << "mass_after_gas_gas1_accumulated*     (TC)   = " << mass_after_gas_gas1[celli]       << "   ---    deltaMass = " << mass_after_gas_gas1[celli]  - mass_gas_gas1[celli]   << nl; 
    Info << "mass_after_gas_gas2_accumulated*     (TC)   = " << mass_after_gas_gas2[celli]       << "   ---    deltaMass = " << mass_after_gas_gas2[celli]  - mass_gas_gas2[celli]   << nl; 
    Info << "mass_after_gas_gas3_accumulated*     (TC)   = " << mass_after_gas_gas3[celli]       << "   ---    deltaMass = " << mass_after_gas_gas3[celli]  - mass_gas_gas3[celli]   << nl; 
    Info << "mass_after_gas_gas4_accumulated*     (TC)   = " << mass_after_gas_gas4[celli]       << "   ---    deltaMass = " << mass_after_gas_gas4[celli]  - mass_gas_gas4[celli]  << nl;
    Info << "mass_after_gas_gas5_accumulated*     (TC)   = " << mass_after_gas_gas5[celli]       << "   ---    deltaMass = " << mass_after_gas_gas5[celli]  - mass_gas_gas5[celli]  << nl;
    Info << "mass_after_gas_gas6_accumulated*     (TC)   = " << mass_after_gas_gas6[celli]       << "   ---    deltaMass = " << mass_after_gas_gas6[celli]  - mass_gas_gas6[celli]  << nl;
    Info << "mass_after_gas_gas7_accumulated*     (TC)   = " << mass_after_gas_gas7[celli]       << "   ---    deltaMass = " << mass_after_gas_gas7[celli]  - mass_gas_gas7[celli]   << nl; 
    Info << "mass_after_gas_gas8_accumulated*     (TC)   = " << mass_after_gas_gas8[celli]       << "   ---    deltaMass = " << mass_after_gas_gas8[celli]  - mass_gas_gas8[celli]   << nl; 
    Info << "mass_after_gas_gas9_accumulated*     (TC)   = " << mass_after_gas_gas9[celli]       << "   ---    deltaMass = " << mass_after_gas_gas9[celli]  - mass_gas_gas9[celli]   << nl; 
    Info << "mass_after_gas_gas10_accumulated*    (TC)   = " << mass_after_gas_gas10[celli]      << "   ---    deltaMass = " << mass_after_gas_gas10[celli] - mass_gas_gas10[celli]   << nl; 
    Info << "mass_after_gas_gas11_accumulated*    (TC)   = " << mass_after_gas_gas11[celli]      << "   ---    deltaMass = " << mass_after_gas_gas11[celli] - mass_gas_gas11[celli]        << nl; 
    Info << "mass_after_gas_gas12_accumulated*    (TC)   = " << mass_after_gas_gas12[celli]      << "   ---    deltaMass = " << mass_after_gas_gas12[celli] - mass_gas_gas12[celli]        << nl; 
    Info << "mass_after_gas_gas13_accumulated*    (TC)   = " << mass_after_gas_gas13[celli]      << "   ---    deltaMass = " << mass_after_gas_gas13[celli]  - mass_gas_gas13[celli]       << nl; 
    Info << "mass_after_gas_dummyGas_accumulated* (TC)   = " << mass_after_gas_dummyGas[celli]   << "   ---    deltaMass = " << mass_after_gas_dummyGas[celli] - mass_gas_dummyGas[celli]  << nl;
    Info << "mass_after_gas_total_accumulated*    (TC)   = " << mass_after_gas_total[celli]      << "   ---    deltaMass = " << mass_after_gas_total[celli] - mass_gas_total[celli]        << nl << nl; 
*/


    Y_gas_gas0[celli]      = mass_after_gas_gas0[celli] / mass_after_gas_total[celli]; 
    Y_gas_gas1[celli]      = mass_after_gas_gas1[celli] / mass_after_gas_total[celli]; 
    Y_gas_gas2[celli]      = mass_after_gas_gas2[celli] / mass_after_gas_total[celli];  
    Y_gas_gas3[celli]      = mass_after_gas_gas3[celli] / mass_after_gas_total[celli];      
    Y_gas_gas4[celli]      = mass_after_gas_gas4[celli] / mass_after_gas_total[celli];   
    Y_gas_gas5[celli]      = mass_after_gas_gas5[celli] / mass_after_gas_total[celli];       
    Y_gas_gas6[celli]      = mass_after_gas_gas6[celli] / mass_after_gas_total[celli];
    Y_gas_gas7[celli]      = mass_after_gas_gas7[celli] / mass_after_gas_total[celli];
    Y_gas_gas8[celli]      = mass_after_gas_gas8[celli] / mass_after_gas_total[celli];
    Y_gas_gas9[celli]      = mass_after_gas_gas9[celli] / mass_after_gas_total[celli];
    Y_gas_gas10[celli]     = mass_after_gas_gas10[celli]/ mass_after_gas_total[celli];
    Y_gas_gas11[celli]     = mass_after_gas_gas11[celli]/ mass_after_gas_total[celli]; 
    Y_gas_gas12[celli]     = mass_after_gas_gas12[celli]/ mass_after_gas_total[celli];
    Y_gas_gas13[celli]     = mass_after_gas_gas13[celli]/ mass_after_gas_total[celli]; 
    Y_gas_dummyGas[celli]  = mass_after_gas_dummyGas[celli]/mass_after_gas_total[celli]; 
 

    Info << "Y_accumulated_gas_gas0     (TC)       = " << Y_gas_gas0[celli]  << nl;
    Info << "Y_accumulated_gas_gas1     (TC)       = " << Y_gas_gas1[celli] << nl;
    Info << "Y_accumulated_gas_gas2     (TC)       = " << Y_gas_gas2[celli] << nl;
    Info << "Y_accumulated_gas_gas3     (TC)       = " << Y_gas_gas3[celli] << nl;  
    Info << "Y_accumulated_gas_gas4     (TC)       = " << Y_gas_gas4[celli] << nl;
    Info << "Y_accumulated_gas_gas5     (TC)       = " << Y_gas_gas5[celli] << nl;
    Info << "Y_accumulated_gas_gas6     (TC)       = " << Y_gas_gas6[celli] << nl;
    Info << "Y_accumulated_gas_gas7     (TC)       = " << Y_gas_gas7[celli] << nl;
    Info << "Y_accumulated_gas_gas8     (TC)       = " << Y_gas_gas8[celli] << nl;
    Info << "Y_accumulated_gas_gas9     (TC)       = " << Y_gas_gas9[celli] << nl;
    Info << "Y_accumulated_gas_gas10    (TC)       = " << Y_gas_gas10[celli] << nl;
    Info << "Y_accumulated_gas_gas11    (TC)       = " << Y_gas_gas11[celli] << nl;
    Info << "Y_accumulated_gas_gas12    (TC)       = " << Y_gas_gas12[celli] << nl;
    Info << "Y_accumulated_gas_gas13    (TC)       = " << Y_gas_gas13[celli] << nl;
    Info << "Y_accumulated_gas_dummyGas (TC)       = " << Y_gas_dummyGas[celli] << nl << nl;


    if((Y_gas_gas0[celli]+Y_gas_gas1[celli]+Y_gas_gas2[celli]+Y_gas_gas3[celli]+Y_gas_gas4[celli]+Y_gas_gas5[celli]+Y_gas_gas6[celli]+Y_gas_gas7[celli]+Y_gas_gas8[celli]+Y_gas_gas9[celli]+Y_gas_gas10[celli]+Y_gas_gas11[celli]+Y_gas_dummyGas[celli]+Y_gas_gas12[celli]+Y_gas_gas13[celli]) > 1)
    {
        Info << "    !!!!    Decreasing argon Y because summ of accumulated Yis were higher than 1   !!!!   " << nl;
        Y_gas_dummyGas[celli]     = 1 - (Y_gas_gas0[celli]+Y_gas_gas1[celli]+Y_gas_gas2[celli]+Y_gas_gas3[celli]+Y_gas_gas4[celli]+Y_gas_gas5[celli]+Y_gas_gas6[celli]+Y_gas_gas7[celli]+Y_gas_gas8[celli]+Y_gas_gas9[celli]+Y_gas_gas10[celli]+Y_gas_gas11[celli]+Y_gas_gas12[celli]+Y_gas_gas13[celli]);
    }

    Info << "Y_accumulated_total_gas  (TC)'       = " << Y_gas_gas0[celli]+Y_gas_gas1[celli]+Y_gas_gas2[celli]+Y_gas_gas3[celli]+Y_gas_gas4[celli]+Y_gas_gas5[celli]+
                                                         Y_gas_gas6[celli]+Y_gas_gas7[celli]+Y_gas_gas8[celli]+Y_gas_gas9[celli]+Y_gas_gas10[celli]+
                                                         Y_gas_gas11[celli]+Y_gas_dummyGas[celli]+Y_gas_gas12[celli]+Y_gas_gas13[celli] << nl << nl;

    double mass_Total_final = mass_liq_Total[celli] + mass_after_gas_total[celli];

}