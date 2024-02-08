// ## ACCESS TO THE JRC Molten Salt Database

const char filename[120] = "/home/nikolas/Documents/FMVAugust17.dat"; //make this adress as short as possible, it may make TC not find the database

//gaseous variables
std::pair<double, int> ideal_gas_mols;

//liquid variables
std::pair<double, int> mols_of_SALTsoln;
std::pair<double, int> mols_of_liquid;
std::pair<double, int> Liq1_liq_mols;
std::pair<double, int> Liq2_liq_mols;
std::pair<double, int> Liq3_liq_mols;
std::pair<double, int> Liq4_liq_mols;
std::pair<double, int> Liq5_liq_mols;
std::pair<double, int> Liq6_liq_mols;
std::pair<double, int> LiqDummy_liq_mols;

//gas variables
std::pair<double, int> gas0_g_mols;
std::pair<double, int> gas1_g_mols;
std::pair<double, int> gas2_g_mols;
std::pair<double, int> gas3_g_mols;
std::pair<double, int> gas4_g_mols;
std::pair<double, int> gas5_g_mols;
std::pair<double, int> gas6_g_mols;
std::pair<double, int> gas7_g_mols;
std::pair<double, int> gas8_g_mols;
std::pair<double, int> gas9_g_mols;
std::pair<double, int> gas10_g_mols;
std::pair<double, int> gas11_g_mols;
std::pair<double, int> gas12_g_mols;
std::pair<double, int> gas13_g_mols;
std::pair<double, int> gasDummy_g_mols;

std::pair<double, int> p;
std::pair<double, int> tc_molePairs;
std::pair<double, int> tc_quadruplet;
std::pair<double, int> tc_moleFracPair;

Thermochimica::setThermoFilename(filename);
const char tunit[15] = "K";
const char punit[15] = "Pa";
const char munit[15] = "mol";
Thermochimica::setUnits(tunit,punit,munit);

int iElement = 0;
double dMass = 0.0;

// ## INPUTS FROM LIQUID

  /*
    std::cout << "Y_liq_Liq1  (LiF)          = " << std::setprecision(20) << Y_liq_Liq1[celli]  << nl;
    std::cout << "Y_liq_Liq2  (CsF)          = " << std::setprecision(20) << Y_liq_Liq2[celli] << nl;
    std::cout << "Y_liq_Liq3  (ThF4)         = " << std::setprecision(20) << Y_liq_Liq3[celli] << nl;
    std::cout << "Y_liq_Liq4  (LiI)          = " << std::setprecision(20) << Y_liq_Liq4[celli] << nl;
    std::cout << "Y_liq_Liq5  (CsI)          = " << std::setprecision(20) << Y_liq_Liq5[celli]  << nl;
    std::cout << "Y_liq_Liq6  (ThI4)         = " << std::setprecision(20) << Y_liq_Liq6[celli]  << nl;
    std::cout << "Y_liq_LiqDummy  (dummy)    = " << std::setprecision(20) << Y_liq_LiqDummy[celli]  << nl;
    std::cout << "Y_total_liq (original)     = " << std::setprecision(20) <<  Y_liq_Liq1[celli]+Y_liq_Liq2[celli]+Y_liq_Liq4[celli]+Y_liq_Liq3[celli]+Y_liq_Liq5[celli]+Y_liq_Liq6[celli] << nl << nl;
*/

    if(Y_liq_LiqDummy[celli] < 0)
    {
      Y_liq_LiqDummy[celli] = 0;
    }

  Xi_liq_Liq1[celli] =  Y_liq_Liq1[celli]*(1/M_Liq1)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq2[celli] =  Y_liq_Liq2[celli]*(1/M_Liq2)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq3[celli] =  Y_liq_Liq3[celli]*(1/M_Liq3)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq4[celli] =  Y_liq_Liq4[celli]*(1/M_Liq4)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq5[celli] =  Y_liq_Liq5[celli]*(1/M_Liq5)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq6[celli] =  Y_liq_Liq6[celli]*(1/M_Liq6)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_LiqDummy[celli] = 0;//1 - (Xi_liq_Liq1[celli]+Xi_liq_Liq2[celli]+Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli]+Xi_liq_Liq6[celli]) ;

//just to fix the removal of dummy mass and mole fraction
  Y_liq_Liq1[celli]  = (Xi_liq_Liq1[celli]*M_Liq1)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq2[celli]  = (Xi_liq_Liq2[celli]*M_Liq2)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq4[celli]  = (Xi_liq_Liq4[celli]*M_Liq4)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq3[celli]  = (Xi_liq_Liq3[celli]*M_Liq3)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq5[celli]  = (Xi_liq_Liq5[celli]*M_Liq5)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq6[celli]  = (Xi_liq_Liq6[celli]*M_Liq6)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_LiqDummy[celli] = 0;


  Xi_liq_Liq1[celli] =  Y_liq_Liq1[celli]*(1/M_Liq1)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq2[celli] =  Y_liq_Liq2[celli]*(1/M_Liq2)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq3[celli] =  Y_liq_Liq3[celli]*(1/M_Liq3)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq4[celli] =  Y_liq_Liq4[celli]*(1/M_Liq4)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq5[celli] =  Y_liq_Liq5[celli]*(1/M_Liq5)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq6[celli] =  Y_liq_Liq6[celli]*(1/M_Liq6)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_LiqDummy[celli] = 0;



    std::cout << "Y_liq_Liq1    (original)'''     = " << std::setprecision(20) << Y_liq_Liq1[celli]  << nl;
    std::cout << "Y_liq_Liq2    (original)'''     = " << std::setprecision(20) << Y_liq_Liq2[celli] << nl;
    std::cout << "Y_liq_Liq3    (original)'''     = " << std::setprecision(20) << Y_liq_Liq3[celli] << nl;
    std::cout << "Y_liq_Liq4    (original)'''     = " << std::setprecision(20) << Y_liq_Liq4[celli] << nl;
    std::cout << "Y_liq_Liq5    (original)'''     = " << std::setprecision(20) << Y_liq_Liq5[celli]  << nl;
    std::cout << "Y_liq_Liq6    (original)'''     = " << std::setprecision(20) << Y_liq_Liq6[celli]  << nl;
    std::cout << "Y_liq_LiqDummy   (original)'''     = " << std::setprecision(20) << Y_liq_LiqDummy[celli]  << nl;
    std::cout << "Y_total_liq   (original)'''     = " << std::setprecision(20) <<  Y_liq_Liq1[celli]+Y_liq_Liq2[celli]+Y_liq_Liq4[celli]+Y_liq_Liq3[celli]+Y_liq_Liq5[celli]+Y_liq_Liq6[celli]+Y_liq_LiqDummy[celli] << nl << nl;

    std::cout << "Xi_liq_Liq1   (original)'''    = " << std::setprecision(20) << Xi_liq_Liq1[celli] << nl; 
    std::cout << "Xi_liq_Liq2   (original)'''    = " << std::setprecision(20) << Xi_liq_Liq2[celli] << nl;
    std::cout << "Xi_liq_Liq3   (original)'''    = " << std::setprecision(20) << Xi_liq_Liq3[celli] << nl;
    std::cout << "Xi_liq_Liq4   (original)'''    = " << std::setprecision(20) << Xi_liq_Liq4[celli] << nl;
    std::cout << "Xi_liq_Liq5   (original)'''    = " << std::setprecision(20) << Xi_liq_Liq5[celli] << nl;
    std::cout << "Xi_liq_Liq6   (original)'''    = " << std::setprecision(20) << Xi_liq_Liq6[celli] << nl;
    std::cout << "Xi_liq_LiqDummy (original)'''  = " << std::setprecision(20) << Xi_liq_LiqDummy[celli]  << nl;
    std::cout << "Xi_liq_Total  (original)'''    = " << std::setprecision(20) << Xi_liq_Liq1[celli]  + Xi_liq_Liq2[celli]+ Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli] +Xi_liq_Liq6[celli] + Xi_liq_LiqDummy[celli]<< nl << nl; 

    M_Salt = Xi_liq_Liq1[celli]*M_Liq1 + Xi_liq_Liq2[celli]*M_Liq2 + Xi_liq_Liq3[celli]*M_Liq3 + Xi_liq_Liq4[celli]*M_Liq4  + Xi_liq_Liq5[celli]*M_Liq5 + Xi_liq_Liq6[celli]*M_Liq6 +  Xi_liq_LiqDummy[celli]*M_LiqDummy;
    std::cout << "M_Salt        (original)       = " << std::setprecision(20) << M_Salt << nl << nl;
  
    mass_liq_Liq1[celli]  = (Y_liq_Liq1[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt;
    mass_liq_Liq2[celli]  = (Y_liq_Liq2[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt;
    mass_liq_Liq3[celli]  = (Y_liq_Liq3[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt;
    mass_liq_Liq4[celli]  = (Y_liq_Liq4[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt;
    mass_liq_Liq5[celli]  = (Y_liq_Liq5[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt;
    mass_liq_Liq6[celli]  = (Y_liq_Liq6[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt;
    mass_liq_LiqDummy[celli] = (Y_liq_LiqDummy[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt;
    mass_liq_Total[celli] = mass_liq_Liq1[celli]  + mass_liq_Liq2[celli]+ mass_liq_Liq3[celli]+mass_liq_Liq4[celli]+mass_liq_Liq5[celli]+mass_liq_Liq6[celli] + mass_liq_LiqDummy[celli];
    
    /*
    std::cout << "mass_liq_Liq1   (input)   = " << std::setprecision(20) << mass_liq_Liq1[celli]  << "   Y_liq_Liq1  = " << mass_liq_Liq1[celli]/mass_liq_Total[celli]  << nl;
    std::cout << "mass_liq_Liq2   (input)   = " << std::setprecision(20) << mass_liq_Liq2[celli]  << "   Y_liq_Liq2  = " << mass_liq_Liq2[celli]/mass_liq_Total[celli] << nl;
    std::cout << "mass_liq_Liq3   (input)   = " << std::setprecision(20) << mass_liq_Liq3[celli]  << "   Y_liq_Liq3  = " << mass_liq_Liq3[celli]/mass_liq_Total[celli] << nl; 
    std::cout << "mass_liq_Liq4   (input)   = " << std::setprecision(20) << mass_liq_Liq4[celli]  << "   Y_liq_Liq4  = " << mass_liq_Liq4[celli]/mass_liq_Total[celli] << nl;
    std::cout << "mass_liq_Liq5   (input)   = " << std::setprecision(20) << mass_liq_Liq5[celli]  << "   Y_liq_Liq5  = " << mass_liq_Liq5[celli]/mass_liq_Total[celli]  << nl;
    std::cout << "mass_liq_Liq6   (input)   = " << std::setprecision(20) << mass_liq_Liq6[celli]  << "   Y_liq_Liq6  = " << mass_liq_Liq6[celli]/mass_liq_Total[celli]  << nl;
    std::cout << "mass_liq_LiqDummy   (input)   = " << std::setprecision(20) << mass_liq_LiqDummy[celli]  << "   Y_liq_LiqDummy  = " << mass_liq_LiqDummy[celli]/mass_liq_Total[celli]  << nl;
    std::cout << "mass_liq_Total  (input)   = " << std::setprecision(20) << mass_liq_Total[celli] << nl << nl;
    */

    // ## CORRECTING INPUTS FROM GAS

    Info << "Y_gas_gas0     (original)     = " << Y_gas_gas0[celli]  << nl; 
    Info << "Y_gas_gas1     (original)     = " << Y_gas_gas1[celli] << nl; 
    Info << "Y_gas_gas2     (original)     = " << Y_gas_gas2[celli] << nl; 
    Info << "Y_gas_gas3     (original)     = " << Y_gas_gas3[celli] << nl;   
    Info << "Y_gas_gas4     (original)     = " << Y_gas_gas4[celli] << nl; 
    Info << "Y_gas_gas5     (original)     = " << Y_gas_gas5[celli] << nl;
    Info << "Y_gas_gas6     (original)     = " << Y_gas_gas6[celli] << nl;
    Info << "Y_gas_gas7     (original)     = " << Y_gas_gas7[celli] << nl;
    Info << "Y_gas_gas8     (original)     = " << Y_gas_gas8[celli] << nl;
    Info << "Y_gas_gas9     (original)     = " << Y_gas_gas9[celli] << nl;
    Info << "Y_gas_gas10    (original)     = " << Y_gas_gas10[celli] << nl;
    Info << "Y_gas_gas11    (original)     = " << Y_gas_gas11[celli] << nl;
    Info << "Y_gas_gas12    (original)     = " << Y_gas_gas12[celli] << nl;
    Info << "Y_gas_gas13    (original)     = " << Y_gas_gas13[celli] << nl;
    Info << "Y_gas_dummyGas (original)     = " << Y_gas_dummyGas[celli] << nl;
    Info << "Y_total_gas    (original)     = " <<  Y_gas_gas0[celli]+Y_gas_gas1[celli]+Y_gas_gas2[celli]+Y_gas_gas3[celli]+Y_gas_gas4[celli]+Y_gas_gas5[celli]+
                                                  Y_gas_gas6[celli]+Y_gas_gas7[celli]+Y_gas_gas8[celli]+Y_gas_gas9[celli]+Y_gas_gas10[celli]+
                                                  Y_gas_gas11[celli]+Y_gas_gas12[celli]+Y_gas_gas13[celli]+Y_gas_dummyGas[celli] << nl << nl;

if(fluid.multiComponentPhases()[0][celli]>0)
{
    sumMoleFracMol[celli]  = (
    Y_gas_gas0[celli]*(1/M_gas0)+
    Y_gas_gas1[celli]*(1/M_gas1)+
    Y_gas_gas2[celli]*(1/M_gas2)+
    Y_gas_gas3[celli]*(1/M_gas3)+
    Y_gas_gas4[celli]*(1/M_gas4)+
    Y_gas_gas5[celli]*(1/M_gas5)+
    Y_gas_gas6[celli]*(1/M_gas6)+
    Y_gas_gas7[celli]*(1/M_gas7)+
    Y_gas_gas8[celli]*(1/M_gas8)+
    Y_gas_gas9[celli]*(1/M_gas9)+
    Y_gas_gas10[celli]*(1/M_gas10)+
    Y_gas_gas11[celli]*(1/M_gas11)+
    Y_gas_gas12[celli]*(1/M_gas12)+
    Y_gas_gas13[celli]*(1/M_gas13)+
    Y_gas_dummyGas[celli]*(1/M_dummyGas));

    Xi_gas_gas0[celli]    = Y_gas_gas0[celli]*(1/M_gas0)/sumMoleFracMol[celli];
    Xi_gas_gas1[celli]    = Y_gas_gas1[celli]*(1/M_gas1)/sumMoleFracMol[celli];
    Xi_gas_gas2[celli]    = Y_gas_gas2[celli]*(1/M_gas2)/sumMoleFracMol[celli];
    Xi_gas_gas3[celli]    = Y_gas_gas3[celli]*(1/M_gas3)/sumMoleFracMol[celli];
    Xi_gas_gas4[celli]    = Y_gas_gas4[celli]*(1/M_gas4)/sumMoleFracMol[celli];
    Xi_gas_gas5[celli]    = Y_gas_gas5[celli]*(1/M_gas5)/sumMoleFracMol[celli];  
    Xi_gas_gas6[celli]    = Y_gas_gas6[celli]*(1/M_gas6)/sumMoleFracMol[celli];      
    Xi_gas_gas7[celli]    = Y_gas_gas7[celli]*(1/M_gas7)/sumMoleFracMol[celli];       
    Xi_gas_gas8[celli]    = Y_gas_gas8[celli]*(1/M_gas8)/sumMoleFracMol[celli];     
    Xi_gas_gas9[celli]    = Y_gas_gas9[celli]*(1/M_gas9)/sumMoleFracMol[celli];    
    Xi_gas_gas10[celli]   = Y_gas_gas10[celli]*(1/M_gas10)/sumMoleFracMol[celli];   
    Xi_gas_gas11[celli]   = Y_gas_gas11[celli]*(1/M_gas11)/sumMoleFracMol[celli];
    Xi_gas_gas12[celli]   = Y_gas_gas12[celli]*(1/M_gas12)/sumMoleFracMol[celli];   
    Xi_gas_gas13[celli]   = Y_gas_gas13[celli]*(1/M_gas13)/sumMoleFracMol[celli];
    Xi_gas_dummyGas[celli]= 1 - (Xi_gas_gas0[celli]+Xi_gas_gas1[celli]+Xi_gas_gas2[celli]+Xi_gas_gas3[celli]+Xi_gas_gas4[celli]+Xi_gas_gas5[celli]+Xi_gas_gas6[celli]+Xi_gas_gas10[celli]+
                                Xi_gas_gas11[celli]+ Xi_gas_gas7[celli]+ Xi_gas_gas8[celli]+Xi_gas_gas9[celli]+Xi_gas_gas12[celli]+Xi_gas_gas13[celli]);
  
  
    Info << "Xi_gas_gas0      (original)'    = " << Xi_gas_gas0[celli]   << nl;
    Info << "Xi_gas_gas1      (original)'    = " << Xi_gas_gas1[celli]   << nl; 
    Info << "Xi_gas_gas2      (original)'    = " << Xi_gas_gas2[celli]   << nl;
    Info << "Xi_gas_gas3      (original)'    = " << Xi_gas_gas3[celli]   << nl;
    Info << "Xi_gas_gas4      (original)'    = " << Xi_gas_gas4[celli]   << nl;
    Info << "Xi_gas_gas5      (original)'    = " << Xi_gas_gas5[celli]   << nl;
    Info << "Xi_gas_gas6      (original)'    = " << Xi_gas_gas6[celli]   << nl;
    Info << "Xi_gas_gas7      (original)'    = " << Xi_gas_gas7[celli]   << nl;
    Info << "Xi_gas_gas8      (original)'    = " << Xi_gas_gas8[celli]   << nl;
    Info << "Xi_gas_gas9      (original)'    = " << Xi_gas_gas9[celli]   << nl;
    Info << "Xi_gas_gas10     (original)'    = " << Xi_gas_gas10[celli]  << nl;
    Info << "Xi_gas_gas11     (original)'    = " << Xi_gas_gas11[celli]  << nl;
    Info << "Xi_gas_gas12     (original)'    = " << Xi_gas_gas12[celli]  << nl;
    Info << "Xi_gas_gas13     (original)'    = " << Xi_gas_gas13[celli]  << nl;
    Info << "Xi_gas_dummyGas  (original)'    = " << Xi_gas_dummyGas[celli]  << nl;
    Info << "Xi_gas_Total     (original)'    = " << Xi_gas_gas0[celli]+Xi_gas_gas1[celli]+Xi_gas_gas2[celli]+Xi_gas_gas3[celli]+Xi_gas_gas4[celli]+Xi_gas_gas5[celli]+
                                                    Xi_gas_gas6[celli]+Xi_gas_gas7[celli]+Xi_gas_gas8[celli]+Xi_gas_gas9[celli]+Xi_gas_gas10[celli]+Xi_gas_gas11[celli]+
                                                    Xi_gas_gas12[celli] + Xi_gas_gas13[celli] + Xi_gas_dummyGas[celli] << nl << nl;

/*
    //Number of mols per gas species
    double nGas0{0};
    double nGas1{0};
    double nGas2{0};
    double nGas3{0};
    double nGas4{0};
    double nGas5{0};
    double nGas6{0};
    double nGas7{0};
    double nGas8{0};
    double nGas9{0};
    double nGas10{0};
    double nGas11{0};
    double nGas12{0};
    double nGas13{0};
    double nGasDummyGas{0}; //He

    if(Xi_gas_gas0[celli] > 0){nGas0             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas0[celli]);}
    if(Xi_gas_gas1[celli] > 0){nGas1             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas1[celli]);}
    if(Xi_gas_gas2[celli] > 0){nGas2             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas2[celli]);}
    if(Xi_gas_gas3[celli] > 0){nGas3             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas3[celli]);}
    if(Xi_gas_gas4[celli] > 0){nGas4             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas4[celli]);}
    if(Xi_gas_gas5[celli] > 0){nGas5             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas5[celli]);}
    if(Xi_gas_gas6[celli] > 0){nGas6             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas6[celli]);}
    if(Xi_gas_gas7[celli] > 0){nGas7             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas7[celli]);}
    if(Xi_gas_gas8[celli] > 0){nGas8             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas8[celli]);}
    if(Xi_gas_gas9[celli] > 0){nGas9             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas9[celli]);}
    if(Xi_gas_gas10[celli] > 0){nGas10           = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas10[celli]);}
    if(Xi_gas_gas11[celli] > 0){nGas11           = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas11[celli]);}
    if(Xi_gas_gas12[celli] > 0){nGas12           = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas12[celli]);}
    if(Xi_gas_gas13[celli] > 0){nGas13           = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas13[celli]);}
    if(Xi_gas_dummyGas[celli] > 0){nGasDummyGas  = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_dummyGas[celli]);}
*/


   nGas0             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas0[celli]); //
   nGas1             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas1[celli]); //F2
   nGas2             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas2[celli]); //
   nGas3             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas3[celli]); //
   nGas4             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas4[celli]); //
   nGas5             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas5[celli]); //
   nGas6             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas6[celli]); //
   nGas7             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas7[celli]); //
   nGas8             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas8[celli]); //
   nGas9             = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas9[celli]); //
   nGas10            = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas10[celli]); // 
   nGas11            = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas11[celli]); //
   nGas12            = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas12[celli]); //
   nGas13            = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_gas13[celli]); //
   nGasDummyGas      = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli])/(R_gas*dTemperature))*(Xi_gas_dummyGas[celli]); //Ar

   nOldMols            = nGas0+nGas1+ nGas2+ nGas3+ nGas4+ nGas5+ nGas6+ nGas7+ nGas8+ nGas9+ nGas10+ nGas11+nGas12+ nGas13 + nGasDummyGas; 
   nOldMolsOldReaction = nGas0+nGas1+ nGas2+ nGas3+ nGas4+ nGas5+ nGas6+ nGas7+ nGas8+ nGas9+ nGas10+ nGas11+nGas12+ nGas13; 


        //  Info << "Cs mols in injected gas   = " << nGas4        << "  [mol] " <<  nGas4/(nOldMols)*100        << " % of inlet gas" << nl;
          Info << "F2 mols in injected gas   = " << nGas1        << "  [mol] " <<  nGas1/(nOldMols)*100       << " % of inlet gas" << nl;
          Info << "Ar mols in injected gas   = " << nGasDummyGas << "  [mol] " <<  nGasDummyGas/(nOldMols)*100 << " % of inlet gas" << nl << nl;


          Info << "number of mols (gas)      = " << (dPressure*cv[celli]*fluid.multiComponentPhases()[0][celli])/(R_gas*dTemperature) << "  [mol]" << nl;
          Info << "number of mols (liquid)   = " << (fluid.multiComponentPhases()[1][celli]*cv[celli])*rho_Salt/M_Salt                << "  [mol]" << nl << nl;



    // m = PV/RT*xi*Mi obeying Dalton's partial pressure law:

    mass_gas_gas0[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas0[celli] )/(R_gas*dTemperature))*M_gas0;
    mass_gas_gas1[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas1[celli] )/(R_gas*dTemperature))*M_gas1;
    mass_gas_gas2[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas2[celli] )/(R_gas*dTemperature))*M_gas2;
    mass_gas_gas3[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas3[celli] )/(R_gas*dTemperature))*M_gas3;
    mass_gas_gas4[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas4[celli] )/(R_gas*dTemperature))*M_gas4;
    mass_gas_gas5[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas5[celli] )/(R_gas*dTemperature))*M_gas5;
    mass_gas_gas6[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas6[celli] )/(R_gas*dTemperature))*M_gas6;
    mass_gas_gas7[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas7[celli] )/(R_gas*dTemperature))*M_gas7;
    mass_gas_gas8[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas8[celli] )/(R_gas*dTemperature))*M_gas8;
    mass_gas_gas9[celli]     = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas9[celli] )/(R_gas*dTemperature))*M_gas9;
    mass_gas_gas10[celli]    = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas10[celli] )/(R_gas*dTemperature))*M_gas10;
    mass_gas_gas11[celli]    = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas11[celli] )/(R_gas*dTemperature))*M_gas11;
    mass_gas_gas12[celli]    = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas12[celli] )/(R_gas*dTemperature))*M_gas12;
    mass_gas_gas13[celli]    = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_gas13[celli] )/(R_gas*dTemperature))*M_gas13;
    mass_gas_dummyGas[celli] = ((dPressure*fluid.multiComponentPhases()[0][celli]*cv[celli]*Xi_gas_dummyGas[celli] )/(R_gas*dTemperature))*M_dummyGas;
    mass_gas_total[celli]    = mass_gas_gas0[celli]  + mass_gas_gas1[celli]  + mass_gas_gas2[celli]     + mass_gas_gas3[celli]  + mass_gas_gas4[celli] +
                               mass_gas_gas5[celli]  + mass_gas_gas6[celli]  + mass_gas_gas7[celli]     + mass_gas_gas8[celli]  + mass_gas_gas9[celli] + 
                               mass_gas_gas10[celli] + mass_gas_gas11[celli] + mass_gas_dummyGas[celli] + mass_gas_gas12[celli] + mass_gas_gas13[celli];

/*
    Info << "mass_gas_gas0     (input)    = " << mass_gas_gas0[celli]  << "  - Y_gas_gas0  = " << mass_gas_gas0[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas1     (input)    = " << mass_gas_gas1[celli]  << "  - Y_gas_gas1  = " << mass_gas_gas1[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas2     (input)    = " << mass_gas_gas2[celli]  << "  - Y_gas_gas2  = " << mass_gas_gas2[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas3     (input)    = " << mass_gas_gas3[celli]  << "  - Y_gas_gas3  = " << mass_gas_gas3[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas4     (input)    = " << mass_gas_gas4[celli]  << "  - Y_gas_gas4  = " << mass_gas_gas4[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas5     (input)    = " << mass_gas_gas5[celli]  << "  - Y_gas_gas5  = " << mass_gas_gas5[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas6     (input)    = " << mass_gas_gas6[celli]  << "  - Y_gas_gas6  = " << mass_gas_gas6[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas7     (input)    = " << mass_gas_gas7[celli]  << "  - Y_gas_gas7  = " << mass_gas_gas7[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas8     (input)    = " << mass_gas_gas8[celli]  << "  - Y_gas_gas8  = " << mass_gas_gas8[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas9     (input)    = " << mass_gas_gas9[celli]  << "  - Y_gas_gas9  = " << mass_gas_gas9[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas10    (input)    = " << mass_gas_gas10[celli] << "  - Y_gas_gas10 = " << mass_gas_gas10[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas11    (input)    = " << mass_gas_gas11[celli] << "  - Y_gas_gas11 = " << mass_gas_gas11[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas12    (input)    = " << mass_gas_gas12[celli] << "  - Y_gas_gas12 = " << mass_gas_gas12[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_gas13    (input)    = " << mass_gas_gas13[celli] << "  - Y_gas_gas13 = " << mass_gas_gas13[celli]/mass_gas_total[celli]<< nl;
    Info << "mass_gas_dummyGas (input)    = " << mass_gas_dummyGas[celli] << "  - Y_gas_dummyGas = " << mass_gas_dummyGas[celli]/mass_gas_total[celli]<< nl;
*/
    std::cout << "mass_gas_total   (input)    = " << std::setprecision(20) << mass_gas_total[celli] << nl << nl;

    mass_total_initial = mass_gas_total[celli] + mass_liq_Total[celli];
    std::cout << "mass_total_initial (l+g)  (input)  = " << std::setprecision(20) << mass_total_initial << nl << nl; 
}


    // ## DEBUGGUING FOR POSSIBLE ZERO VALUES FROM INITIAL VALUES

    double dMassElement1  = (Xi_liq_Liq1[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //Li
    double dMassElement2  = (Xi_liq_Liq2[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //Be
    double dMassElement3  = (Xi_liq_Liq3[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //Zr
    double dMassElement4  = (Xi_liq_Liq4[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //Th
    double dMassElement5  = (Xi_liq_Liq5[celli]+Xi_liq_Liq6[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //UF4+UF3
    double dMassElement6  = (Xi_liq_Liq1[celli]+2*Xi_liq_Liq2[celli]+4*(Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli])+3*Xi_liq_Liq6[celli])*fluid.multiComponentPhases()[1][celli]*cv[celli]*rho_Salt/M_Salt; //all F

/*
    if(fluid.multiComponentPhases()[1][celli] == 0) //if no liquid, no input for liquid salt phase
    {
        dMassElement1  = 0;
        dMassElement2  = 0;
        dMassElement3  = 0;
        dMassElement4  = 0;
        dMassElement5  = 0;
        dMassElement6  = 0;
    }
*/

    Info << "   ***   Calculating TC inputs   ***   " << nl << nl;

    Info << "dMassElement1  Li                     = " << dMassElement1 << nl; //
    Info << "dMassElement2  Be                     = " << dMassElement2 << nl; //
    Info << "dMassElement3  Zr                     = " << dMassElement3 << nl; //
    Info << "dMassElement4  Th                     = " << dMassElement4 << nl; //
    Info << "dMassElement5  U                      = " << dMassElement5 << nl; //
    Info << "dMassElement6  F                      = " << dMassElement6 << nl; //
    Info << "F2 mols in injected gas               = " << nGas1        << nl; // "  [mol] " <<  nGas1/(nOldMols)*100       << " % of inlet gas" << nl;
    Info << "Ar mols in injected gas               = " << nGasDummyGas <<  nl; //"  [mol] " <<  nGasDummyGas/(nOldMols)*100 << " % of inlet gas" << nl << nl;


    Info << "Starting TC Calculation" << nl << nl;

// ## INITIAL CONDITIONS TO CALCULATE THERMODYNAMIC EQUILIBRIUM IN THERMOCHIMICA

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
  dMass = dMassElement6+2*nGas1;
  Thermochimica::setElementMass(iElement, dMass);
  iElement = 18; //Ar
  dMass = nGasDummyGas;                         
  Thermochimica::setElementMass(iElement, dMass);


  Info << "Starting TC Calculation`" << nl << nl;

  Thermochimica::setTemperaturePressure(dTemperature, dPressure);
  Thermochimica::parseThermoFile();
  //Thermochimica::setHeatCapacityEnthalpyEntropyRequested(false);
  Thermochimica::thermochimica();
  int iPrintMode = 2;
  Thermochimica::setPrintResultsMode(iPrintMode);
  Thermochimica::printResults();
  int info;
  Thermochimica::checkInfoThermo();  
  printf("Information: %i\n",info);

  Info << " *** Thermochimica Results *** " <<  nl << nl; 

    #include "thermochimicaCoupling/thermochimicaOutputs/liquidusOutputs.H"         //phasei = 1 (Liquid)
    #include "thermochimicaCoupling/thermochimicaOutputs/gaseousOutputs.H"          //phasei = 0 (gas)
  //#include "thermochimicaCoupling/thermochimicaOutputs/solidusOutputs.H"
  //#include "thermochimicaCoupling/thermochimicaOutputs/pureCondensedOutputs.H"

    Info << "Thermochimica alpha liq  = " << alphaLiqTC[celli]  << nl;
    Info << "Thermochimica alpha gas  = " << alphaGasTC[celli]  << nl;
    Info << "Thermochimica alpha tot  = " << alphaLiqTC[celli]+alphaGasTC[celli] << nl << nl;

  //#include "printResultsTC.H"

  Thermochimica::resetInfoThermo();
  Thermochimica::resetThermoAll();

