  // Get number of mols of SALTsoln
  char phaseName_SALTsoln[25] = "SALTsoln";
  mols_of_SALTsoln = Thermochimica::getSolnPhaseMol(phaseName_SALTsoln);
  //Info << "moles of SALTsoln = " << mols_of_SALTsoln.first << nl;

  // Get number of mols of each pair
  char pair_Liq1[25] = "Li//F";
  Liq1_liq_mols = Thermochimica::getMqmqaPairMolFraction(phaseName_SALTsoln, pair_Liq1);
  Xi_liq_Liq1[celli] =  (Liq1_liq_mols.first);

  char pair_Liq2[25] = "Be//F";
  Liq2_liq_mols = Thermochimica::getMqmqaPairMolFraction(phaseName_SALTsoln, pair_Liq2);
  Xi_liq_Liq2[celli] =  (Liq2_liq_mols.first);

  char pair_Liq3[25] = "Zr//F";
  Liq3_liq_mols = Thermochimica::getMqmqaPairMolFraction(phaseName_SALTsoln, pair_Liq3);
  Xi_liq_Liq3[celli] =  (Liq3_liq_mols.first);

  char pair_Liq4[25] = "Th//F";
  Liq4_liq_mols = Thermochimica::getMqmqaPairMolFraction(phaseName_SALTsoln, pair_Liq4);
  Xi_liq_Liq4[celli] =  (Liq4_liq_mols.first);

  char pair_Liq5[25] = "U(4)//F";
  Liq5_liq_mols = Thermochimica::getMqmqaPairMolFraction(phaseName_SALTsoln, pair_Liq5);
  Xi_liq_Liq5[celli] =  (Liq5_liq_mols.first);

  char pair_Liq6[25] = "U(3)//F";
  Liq6_liq_mols = Thermochimica::getMqmqaPairMolFraction(phaseName_SALTsoln, pair_Liq6);
  Xi_liq_Liq6[celli] =  (Liq6_liq_mols.first);

  Xi_liq_LiqDummy[celli] =  0;


  Y_liq_Liq1[celli]  = (Xi_liq_Liq1[celli]*M_Liq1)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq2[celli]  = (Xi_liq_Liq2[celli]*M_Liq2)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq4[celli]  = (Xi_liq_Liq4[celli]*M_Liq4)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq3[celli]  = (Xi_liq_Liq3[celli]*M_Liq3)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq5[celli]  = (Xi_liq_Liq5[celli]*M_Liq5)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq6[celli]  = (Xi_liq_Liq6[celli]*M_Liq6)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_LiqDummy[celli] = 0;//1 - (Xi_liq_Liq1[celli]+Xi_liq_Liq2[celli]+Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli]+Xi_liq_Liq6[celli]) ;

  //#2nd Iteraction
  Xi_liq_Liq1[celli] =  Y_liq_Liq1[celli]*(1/M_Liq1)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq2[celli] =  Y_liq_Liq2[celli]*(1/M_Liq2)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq3[celli] =  Y_liq_Liq3[celli]*(1/M_Liq3)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq4[celli] =  Y_liq_Liq4[celli]*(1/M_Liq4)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq5[celli] =  Y_liq_Liq5[celli]*(1/M_Liq5)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq6[celli] =  Y_liq_Liq6[celli]*(1/M_Liq6)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_LiqDummy[celli] = 0;// 1 - (Xi_liq_Liq1[celli]+Xi_liq_Liq2[celli]+Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli]+Xi_liq_Liq6[celli]) ;

  Y_liq_Liq1[celli]  = (Xi_liq_Liq1[celli]*M_Liq1)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq2[celli]  = (Xi_liq_Liq2[celli]*M_Liq2)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq4[celli]  = (Xi_liq_Liq4[celli]*M_Liq4)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq3[celli]  = (Xi_liq_Liq3[celli]*M_Liq3)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq5[celli]  = (Xi_liq_Liq5[celli]*M_Liq5)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq6[celli]  = (Xi_liq_Liq6[celli]*M_Liq6)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_LiqDummy[celli] = 0;

/*
  //#3rd Iteraction
  Xi_liq_Liq1[celli] =  Y_liq_Liq1[celli]*(1/M_Liq1)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq2[celli] =  Y_liq_Liq2[celli]*(1/M_Liq2)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq3[celli] =  Y_liq_Liq3[celli]*(1/M_Liq3)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq4[celli] =  Y_liq_Liq4[celli]*(1/M_Liq4)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq5[celli] =  Y_liq_Liq5[celli]*(1/M_Liq5)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq6[celli] =  Y_liq_Liq6[celli]*(1/M_Liq6)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_LiqDummy[celli] = 1 - (Xi_liq_Liq1[celli]+Xi_liq_Liq2[celli]+Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli]+Xi_liq_Liq6[celli]) ;

  Y_liq_Liq1[celli]  = (Xi_liq_Liq1[celli]*M_Liq1)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq2[celli]  = (Xi_liq_Liq2[celli]*M_Liq2)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq4[celli]  = (Xi_liq_Liq4[celli]*M_Liq4)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq3[celli]  = (Xi_liq_Liq3[celli]*M_Liq3)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq5[celli]  = (Xi_liq_Liq5[celli]*M_Liq5)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq6[celli]  = (Xi_liq_Liq6[celli]*M_Liq6)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_LiqDummy[celli] = 0;

  //#4th Iteraction
  Xi_liq_Liq1[celli] =  Y_liq_Liq1[celli]*(1/M_Liq1)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq2[celli] =  Y_liq_Liq2[celli]*(1/M_Liq2)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq3[celli] =  Y_liq_Liq3[celli]*(1/M_Liq3)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq4[celli] =  Y_liq_Liq4[celli]*(1/M_Liq4)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq5[celli] =  Y_liq_Liq5[celli]*(1/M_Liq5)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_Liq6[celli] =  Y_liq_Liq6[celli]*(1/M_Liq6)/(Y_liq_Liq1[celli]*(1/M_Liq1)+Y_liq_Liq2[celli]*(1/M_Liq2)+Y_liq_Liq3[celli]*(1/M_Liq3)+Y_liq_Liq4[celli]*(1/M_Liq4)+Y_liq_Liq5[celli]*(1/M_Liq5)+Y_liq_Liq6[celli]*(1/M_Liq6)+Y_liq_LiqDummy[celli]*(1/M_LiqDummy));
  Xi_liq_LiqDummy[celli] = 1 - (Xi_liq_Liq1[celli]+Xi_liq_Liq2[celli]+Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli]+Xi_liq_Liq6[celli]) ;

  Y_liq_Liq1[celli]  = (Xi_liq_Liq1[celli]*M_Liq1)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq2[celli]  = (Xi_liq_Liq2[celli]*M_Liq2)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq4[celli]  = (Xi_liq_Liq4[celli]*M_Liq4)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq3[celli]  = (Xi_liq_Liq3[celli]*M_Liq3)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq5[celli]  = (Xi_liq_Liq5[celli]*M_Liq5)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_Liq6[celli]  = (Xi_liq_Liq6[celli]*M_Liq6)/(Xi_liq_Liq1[celli]*M_Liq1+Xi_liq_Liq2[celli]*M_Liq2+Xi_liq_Liq3[celli]*M_Liq3+Xi_liq_Liq4[celli]*M_Liq4+Xi_liq_Liq5[celli]*M_Liq5+Xi_liq_Liq6[celli]*M_Liq6+Xi_liq_LiqDummy[celli]*M_LiqDummy); 
  Y_liq_LiqDummy[celli] = 0;
*/

  Info << "Xi_liq_Liq1     (TC)'     = " << Xi_liq_Liq1[celli]  << nl;
  Info << "Xi_liq_Liq2     (TC)'     = " << Xi_liq_Liq2[celli]  << nl;
  Info << "Xi_liq_Liq3     (TC)'     = " << Xi_liq_Liq3[celli]  << nl;
  Info << "Xi_liq_Liq4     (TC)'     = " << Xi_liq_Liq4[celli]  << nl;
  Info << "Xi_liq_Liq5     (TC)'     = " << Xi_liq_Liq5[celli]  << nl;
  Info << "Xi_liq_Liq6     (TC)'     = " << Xi_liq_Liq6[celli]  << nl;
  Info << "Xi_liq_LiqDummy (TC)'     = " << Xi_liq_LiqDummy[celli]  << nl;
  Info << "Xi_liq_Total    (TC)'     = " << Xi_liq_Liq1[celli] + Xi_liq_Liq2[celli]+ Xi_liq_Liq3[celli]+Xi_liq_Liq4[celli]+Xi_liq_Liq5[celli]+Xi_liq_Liq6[celli] +Xi_liq_LiqDummy[celli]<< nl << nl; 

  Info << "Y_liq_Liq1      (new from TC)'  = " << Y_liq_Liq1[celli]  << nl;
  Info << "Y_liq_Liq2      (new from TC)'  = " << Y_liq_Liq2[celli]  << nl;
  Info << "Y_liq_Liq3      (new from TC)'  = " << Y_liq_Liq3[celli]  << nl;
  Info << "Y_liq_Liq4      (new from TC)'  = " << Y_liq_Liq4[celli]  << nl;
  Info << "Y_liq_Liq5      (new from TC)'  = " << Y_liq_Liq5[celli]  << nl;
  Info << "Y_liq_Liq6      (new from TC)'  = " << Y_liq_Liq6[celli]  << nl;
  Info << "Y_liq_LiqDummy  (new from TC)'  = " << Y_liq_LiqDummy[celli]  << nl;
  Info << "Y_total_liq     (new from TC)'  = " << Y_liq_Liq1[celli]+Y_liq_Liq2[celli]+Y_liq_Liq3[celli]+Y_liq_Liq4[celli]+Y_liq_Liq5[celli]+Y_liq_Liq6[celli] +Y_liq_LiqDummy[celli] << nl << nl;
   
  M_Salt = Xi_liq_Liq1[celli]*M_Liq1 + Xi_liq_Liq2[celli]*M_Liq2 + Xi_liq_Liq3[celli]*M_Liq3 + Xi_liq_Liq4[celli]*M_Liq4 + Xi_liq_Liq5[celli]*M_Liq5 + Xi_liq_Liq6[celli]*M_Liq6 + Xi_liq_LiqDummy[celli]*M_LiqDummy;
  std::cout << "M_Salt        (TC)       = " << std::setprecision(20) << M_Salt << nl;

  // Get number of mols of liquid
  mols_of_liquid = Thermochimica::getMqmqaMolesPairs(phaseName_SALTsoln);
  alphaLiqTC[celli] = (mols_of_liquid.first*M_Salt/rho_Salt)/cv[celli];
  
  Info << "moles of liquid = " << mols_of_liquid.first << nl;

  // Get number of mols of liquid
  mols_of_liquid = Thermochimica::getMqmqaMolesPairs(phaseName_SALTsoln);
  Info << "moles of liquid (TC)    = " << mols_of_liquid.first << nl;
  alphaLiqTC[celli] = (mols_of_liquid.first*M_Salt/rho_Salt)/cv[celli];

  Info << "new alpha_liq (TC)      = " <<  alphaLiqTC[celli] << " Should be smaller than = " << fluid.multiComponentPhases()[1][celli] << nl;

  mass_after_liq_Liq1[celli]  = (Y_liq_Liq1[celli])*alphaLiqTC[celli]*cv[celli]*rho_Salt ;
  mass_after_liq_Liq2[celli]  = (Y_liq_Liq2[celli])*alphaLiqTC[celli]*cv[celli]*rho_Salt ;
  mass_after_liq_Liq3[celli]  = (Y_liq_Liq3[celli])*alphaLiqTC[celli]*cv[celli]*rho_Salt ;
  mass_after_liq_Liq4[celli]  = (Y_liq_Liq4[celli])*alphaLiqTC[celli]*cv[celli]*rho_Salt ;
  mass_after_liq_Liq5[celli]  = (Y_liq_Liq5[celli])*alphaLiqTC[celli]*cv[celli]*rho_Salt ;
  mass_after_liq_Liq6[celli]  = (Y_liq_Liq6[celli])*alphaLiqTC[celli]*cv[celli]*rho_Salt ;
  mass_after_liq_LiqDummy[celli]    = (Y_liq_LiqDummy[celli])*alphaLiqTC[celli]*cv[celli]*rho_Salt ;
  mass_after_liq_Total[celli] = mass_after_liq_Liq1[celli]  + mass_after_liq_Liq2[celli]+ mass_after_liq_Liq3[celli]+mass_after_liq_Liq4[celli]+mass_after_liq_Liq5[celli]+mass_after_liq_Liq6[celli] + mass_liq_LiqDummy[celli];
    
  /*
  Info << "mass_liq_Liq1   (TC)    = " << mass_after_liq_Liq1[celli]  << "   Y_liq_Liq1  = " << mass_after_liq_Liq1[celli]/mass_after_liq_Total[celli] << nl;
  Info << "mass_liq_Liq2   (TC)    = " << mass_after_liq_Liq2[celli]  << "   Y_liq_Liq2  = " << mass_after_liq_Liq2[celli]/mass_after_liq_Total[celli] << nl;
  Info << "mass_liq_Liq3   (TC)    = " << mass_after_liq_Liq3[celli]  << "   Y_liq_Liq3  = " << mass_after_liq_Liq3[celli]/mass_after_liq_Total[celli] << nl; 
  Info << "mass_liq_Liq4   (TC)    = " << mass_after_liq_Liq4[celli]  << "   Y_liq_Liq4  = " << mass_after_liq_Liq4[celli]/mass_after_liq_Total[celli] << nl;
  Info << "mass_liq_Liq5   (TC)    = " << mass_after_liq_Liq5[celli]  << "   Y_liq_Liq5  = " << mass_after_liq_Liq5[celli]/mass_after_liq_Total[celli] << nl;
  Info << "mass_liq_Liq6   (TC)    = " << mass_after_liq_Liq6[celli]  << "   Y_liq_Liq6  = " << mass_after_liq_Liq6[celli]/mass_after_liq_Total[celli] << nl;
  Info << "mass_liq_LiqDummy   (TC)    = " << mass_liq_LiqDummy[celli]<< "   Y_liq_Liq6  = " <<   mass_liq_LiqDummy[celli]/mass_after_liq_Total[celli] << nl;

  std::cout << "mass_after_liq_Total  (TC)    = " << std::setprecision(20) << mass_after_liq_Total[celli] << nl << nl;
  */

