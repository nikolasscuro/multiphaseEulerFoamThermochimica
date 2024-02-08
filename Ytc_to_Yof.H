{
    autoPtr<phaseSystem::specieTransferTable>
        specieTransferPtr(fluid.specieTransfer());

    phaseSystem::specieTransferTable &
        specieTransfer(specieTransferPtr());

    fluid.correctReactions();

    forAll(fluid.multiComponentPhases(), multiComponentPhasei)
    {
        phaseModel &phase = fluid.multiComponentPhases()[multiComponentPhasei];

        UPtrList<volScalarField> &Y = phase.YActiveRef();
        const volScalarField &alpha = phase;
        const volScalarField &rho = phase.rho();

        if (multiComponentPhasei == 0)
        {
            forAll(Y, i)
            {
                forAll(Y[i], celli)
                {
                    if (i == 0)
                    {
                        Y[0][celli] = Y_gas_gas0[celli];
                    }
                    if (i == 1)
                    {
                        Y[1][celli] = Y_gas_gas1[celli];
                    }
                    if (i == 2)
                    {
                        Y[2][celli] = Y_gas_gas2[celli];
                    }
                    if (i == 3)
                    {
                        Y[3][celli] = Y_gas_gas3[celli];
                    }
                    if (i == 4)
                    {
                        Y[4][celli] = Y_gas_gas4[celli];
                    }
                    if (i == 5)
                    {
                        Y[5][celli] = Y_gas_gas5[celli];
                    }
                    if (i == 6)
                    {
                        Y[6][celli] = Y_gas_gas6[celli];
                    }
                    if (i == 7)
                    {
                        Y[7][celli] = Y_gas_gas7[celli];
                    }
                    if (i == 8)
                    {
                        Y[8][celli] = Y_gas_gas8[celli];
                    }
                    if (i == 9)
                    {
                        Y[9][celli] = Y_gas_gas9[celli];
                    }
                    if (i == 10)
                    {
                        Y[10][celli] = Y_gas_gas10[celli];
                    }
                    if (i == 11)
                    {
                        Y[11][celli] = Y_gas_gas11[celli];
                    }
                    if (i == 12)
                    {
                        Y[12][celli] = Y_gas_gas12[celli];
                    }
                    if (i == 13)
                    {

                        Y[13][celli] = Y_gas_gas13[celli];
                        /*
                                                            Y_gas_dummyGas[celli]     = 1 - (Y[0][celli]+Y[1][celli]+Y[2][celli]+Y[3][celli]+Y[4][celli]+Y[5][celli]+Y[6][celli]+Y[7][celli]+
                                                                                             Y[8][celli]+Y[9][celli]+Y[10][celli]+Y[11][celli]+Y[12][celli]+Y[13][celli]);

                                                            summation  = (
                                                            Y[0][celli]*(1/M_gas0)+
                                                            Y[1][celli]*(1/M_gas1)+
                                                            Y[2][celli]*(1/M_gas2)+
                                                            Y[3][celli]*(1/M_gas3)+
                                                            Y[4][celli]*(1/M_gas4)+
                                                            Y[5][celli]*(1/M_gas5)+
                                                            Y[6][celli]*(1/M_gas6)+
                                                            Y[7][celli]*(1/M_gas7)+
                                                            Y[8][celli]*(1/M_gas8)+
                                                            Y[9][celli]*(1/M_gas9)+
                                                            Y[10][celli]*(1/M_gas10)+
                                                            Y[11][celli]*(1/M_gas11)+
                                                            Y[12][celli]*(1/M_gas12)+
                                                            Y[13][celli]*(1/M_gas13)+
                                                            Y_gas_dummyGas[celli]*(1/M_dummyGas));

                                                            Xi_gas_gas0[celli]    = Y[0][celli]*(1/M_gas0)/summation;
                                                            Xi_gas_gas1[celli]    = Y[1][celli]*(1/M_gas1)/summation;
                                                            Xi_gas_gas2[celli]    = Y[2][celli]*(1/M_gas2)/summation;
                                                            Xi_gas_gas3[celli]    = Y[3][celli]*(1/M_gas3)/summation;
                                                            Xi_gas_gas4[celli]    = Y[4][celli]*(1/M_gas4)/summation;
                                                            Xi_gas_gas5[celli]    = Y[5][celli]*(1/M_gas5)/summation;
                                                            Xi_gas_gas6[celli]    = Y[6][celli]*(1/M_gas6)/summation;
                                                            Xi_gas_gas7[celli]    = Y[7][celli]*(1/M_gas7)/summation;
                                                            Xi_gas_gas8[celli]    = Y[8][celli]*(1/M_gas8)/summation;
                                                            Xi_gas_gas9[celli]    = Y[9][celli]*(1/M_gas9)/summation;
                                                            Xi_gas_gas10[celli]   = Y[10][celli]*(1/M_gas10)/summation;
                                                            Xi_gas_gas11[celli]   = Y[11][celli]*(1/M_gas11)/summation;
                                                            Xi_gas_gas12[celli]   = Y[12][celli]*(1/M_gas12)/summation;
                                                            Xi_gas_gas13[celli]   = Y[13][celli]*(1/M_gas13)/summation;
                                                            Xi_gas_dummyGas[celli]= 1 - (Xi_gas_gas0[celli]+Xi_gas_gas1[celli]+Xi_gas_gas2[celli]+Xi_gas_gas3[celli]+Xi_gas_gas4[celli]+Xi_gas_gas5[celli]+Xi_gas_gas6[celli]+Xi_gas_gas10[celli]+
                                                                                        Xi_gas_gas11[celli]+ Xi_gas_gas7[celli]+ Xi_gas_gas8[celli]+Xi_gas_gas9[celli]+Xi_gas_gas12[celli]+Xi_gas_gas13[celli]);


                                                            Info << "pressure                   " << fluid.multiComponentPhases()[0].thermo().p()[celli] <<nl;
                                                            Info << "Xi_gas_gas0  final       = " << Xi_gas_gas0[celli]   << nl;
                                                            Info << "Xi_gas_gas1  final       = " << Xi_gas_gas1[celli]   << nl;
                                                            Info << "Xi_gas_gas2  final       = " << Xi_gas_gas2[celli]   << nl;
                                                            Info << "Xi_gas_gas3  final       = " << Xi_gas_gas3[celli]   << nl;
                                                            Info << "Xi_gas_gas4  final       = " << Xi_gas_gas4[celli]   << nl;
                                                            Info << "Xi_gas_gas5  final       = " << Xi_gas_gas5[celli]   << nl;
                                                            Info << "Xi_gas_gas6  final       = " << Xi_gas_gas6[celli]   << nl;
                                                            Info << "Xi_gas_gas7  final       = " << Xi_gas_gas7[celli]   << nl;
                                                            Info << "Xi_gas_gas8  final       = " << Xi_gas_gas8[celli]   << nl;
                                                            Info << "Xi_gas_gas9  final       = " << Xi_gas_gas9[celli]   << nl;
                                                            Info << "Xi_gas_gas10 final       = " << Xi_gas_gas10[celli]  << nl;
                                                            Info << "Xi_gas_gas11 final       = " << Xi_gas_gas11[celli]  << nl;
                                                            Info << "Xi_gas_gas12 final       = " << Xi_gas_gas12[celli]  << nl;
                                                            Info << "Xi_gas_gas13 final       = " << Xi_gas_gas13[celli]  << nl << nl;
                                                            Info << "Xi_gas_dummyGas final       = " << Xi_gas_dummyGas[celli]  << nl << nl;
                        */
                        // Relative Pressure:
                        pi_gas_gas0[celli] = Xi_gas_gas0[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas1[celli] = Xi_gas_gas1[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas2[celli] = Xi_gas_gas2[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas3[celli] = Xi_gas_gas3[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas4[celli] = Xi_gas_gas4[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas5[celli] = Xi_gas_gas5[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas6[celli] = Xi_gas_gas6[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas7[celli] = Xi_gas_gas7[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas8[celli] = Xi_gas_gas8[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas9[celli] = Xi_gas_gas9[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas10[celli] = Xi_gas_gas10[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas11[celli] = Xi_gas_gas11[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas12[celli] = Xi_gas_gas12[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_gas13[celli] = Xi_gas_gas13[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
                        pi_gas_dummyGas[celli] = Xi_gas_dummyGas[celli] * fluid.multiComponentPhases()[0].thermo().p()[celli];
/*
                        // Relative Vapour Pressure of pure species:
                        // functions can be found at Table 3 of: Kalilainen, J., Nichenko, S., & Krepel, J. (2020). Evaporation of materials from the molten salt reactor fuel under elevated temperatures. Journal of Nuclear Materials, 533, 152134.
                        LiFpureVP[celli]   = Xi_gas_gas0[celli]  * pow(10, (39.233 - 17512.525 / fluid.multiComponentPhases()[1].thermo().T()[celli] - 7.6730 * std::log10(static_cast<double>(fluid.multiComponentPhases()[1].thermo().T()[celli]))));   // LiF(g)
                        F2Li2pureVP[celli] = Xi_gas_gas1[celli]  * pow(10, (11.969 - 12863.330 / fluid.multiComponentPhases()[1].thermo().T()[celli] - 0.0000 * std::log10(static_cast<double>(fluid.multiComponentPhases()[1].thermo().T()[celli])))); // F2Li2(g)
                        F3Li3pureVP[celli] = Xi_gas_gas2[celli]  * pow(10, (11.695 - 12734.668 / fluid.multiComponentPhases()[1].thermo().T()[celli] - 0.0000 * std::log10(static_cast<double>(fluid.multiComponentPhases()[1].thermo().T()[celli])))); // F3Li3(g)
                        UF3pureVP[celli]   = Xi_gas_gas11[celli] * pow(10, (12.340 - 16614.284 / fluid.multiComponentPhases()[1].thermo().T()[celli] - 0.0000 * std::log10(static_cast<double>(fluid.multiComponentPhases()[1].thermo().T()[celli]))));  // UF3(g)
                        UF4pureVP[celli]   = Xi_gas_gas3[celli]  * pow(10, (99.511 - 28515.009 / fluid.multiComponentPhases()[1].thermo().T()[celli] - 24.050 * std::log10(static_cast<double>(fluid.multiComponentPhases()[1].thermo().T()[celli]))));   // UF4(g)
                        CsFpureVP[celli]   = Xi_gas_gas8[celli]  * pow(10, (10.820 - 8861.1350 / fluid.multiComponentPhases()[1].thermo().T()[celli] - 0.0000 * std::log10(static_cast<double>(fluid.multiComponentPhases()[1].thermo().T()[celli]))));    // CsF(g)
                        ThF4pureVP[celli]  = Xi_gas_gas12[celli] * pow(10, (12.931 - 15448.733 / fluid.multiComponentPhases()[1].thermo().T()[celli] - 0.0000 * std::log10(static_cast<double>(fluid.multiComponentPhases()[1].thermo().T()[celli])))); // ThF4(g)
                 */   }
                }
            }
        }

        if (multiComponentPhasei == 1) // Liquid
        {
            forAll(Y, i)
            {

                forAll(Y[i], celli)
                {
                    if (i == 0)
                    {
                        Y[0][celli] = Y_liq_Liq1[celli];
                    }
                    if (i == 1)
                    {
                        Y[1][celli] = Y_liq_Liq2[celli];
                    }
                    if (i == 2)
                    {
                        Y[2][celli] = Y_liq_Liq3[celli];
                    }
                    if (i == 3)
                    {
                        Y[3][celli] = Y_liq_Liq4[celli];
                    }
                    if (i == 4)
                    {
                        Y[4][celli] = Y_liq_Liq5[celli];
                    }
                    if (i == 5)
                    {

                        Y[5][celli] = Y_liq_Liq6[celli];
/*
                        Y_liq_LiqDummy[celli] = 1 - (Y[0][celli] + Y[1][celli] + Y[2][celli] + Y[3][celli] + Y[4][celli] + Y[5][celli]);

                        summation2 = Y[0][celli] * (1 / M_Liq1) + Y[1][celli] * (1 / M_Liq2) + Y[2][celli] * (1 / M_Liq3) + Y[3][celli] * (1 / M_Liq4) + Y[4][celli] * (1 / M_Liq5) + Y[5][celli] * (1 / M_Liq6) + Y_liq_LiqDummy[celli] * (1 / M_LiqDummy);

                        Xi_liq_Liq1[celli] = Y[0][celli] * (1 / M_Liq1) / (summation2);
                        Xi_liq_Liq2[celli] = Y[1][celli] * (1 / M_Liq2) / (summation2);
                        Xi_liq_Liq3[celli] = Y[2][celli] * (1 / M_Liq3) / (summation2);
                        Xi_liq_Liq4[celli] = Y[3][celli] * (1 / M_Liq4) / (summation2);
                        Xi_liq_Liq5[celli] = Y[4][celli] * (1 / M_Liq5) / (summation2);
                        Xi_liq_Liq6[celli] = Y[5][celli] * (1 / M_Liq5) / (summation2);
                        Xi_liq_LiqDummy[celli] = 1 - (Xi_liq_Liq1[celli] + Xi_liq_Liq2[celli] + Xi_liq_Liq3[celli] + Xi_liq_Liq4[celli] + Xi_liq_Liq5[celli] + Xi_liq_Liq6[celli]);

                        UF4UF3redox[celli] = Xi_liq_Liq4[celli] / Xi_liq_Liq5[celli];*/
                    }
                }
            }
        }

        forAll(Y, i)
        {

            fvScalarMatrix YiEqn(
                phase.YiEqn(Y[i]) ==
                *specieTransfer[Y[i].name()] + fvModels.source(alpha, rho, Y[i]));

            YiEqn.relax();
            YiEqn.solve("Yi");
        }
    }

    fluid.correctSpecies(); // calls a function to correct
}
