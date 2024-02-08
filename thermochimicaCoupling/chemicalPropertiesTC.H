//cv[i] = cell control volume previously defined [m^3]

double M_Salt    = 0.09; //obtained from FS for 1 mol of salt
double rho_Salt  = 2180;        //typical value for molten salt used in reactors, also similar to flibe

double R_gas = 8.314472;//[J K^−1 mol^−1] //Constant obtained from thermochimica

//Liquid Species
double M_Liq1     = 25.940e-3;   //LiF
double M_Liq2     = 47.01e-3;   //BeF2
double M_Liq3     = 167.22e-3;  //ZrF4
double M_Liq4     = 308.03e-3;  //ThF4
double M_Liq5     = 314.02e-3;  //UF4
double M_Liq6     = 295.02e-3;  //UF3
double M_LiqDummy = 1e-10;       //dummy7

//Gaseous Species
double M_gas0  = 19.00e-3;     //F
double M_gas1  = 38.00e-3;        //F2
double M_gas2  = 295.02e-3;     //UF3
double M_gas3  = 314.020e-3;     //UF4
double M_gas4  = 333.02e-3;     //UF5
double M_gas5  = 352.02e-3;     //UF6
double M_gas6  = 167.22e-3;     //ZrF4
double M_gas7  = 25.94e-3;     //FLi
double M_gas8  = 51.88e-3;     //F2Li2
double M_gas9  = 77.82e-3;     //F3Li3
double M_gas10 = 47.01e-3;     //F2Be
double M_gas11 = 72.95e-3;      //F3BeLi
double M_gas12 = 308.03e-3;      //ThF4
double M_gas13 = 94.02e-3;      //F4Be2
double M_dummyGas = 4e-3;   //Ar

Info << " ---   chemical properties has been set!   --- " << nl;

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
double nGasDummyGas{0};

double nOldMols{0};
double nOldMolsOldReaction{0};
double mass_total_initial{0};
double mass_Total_final{0};
double summation{0};
double summation2{0};

