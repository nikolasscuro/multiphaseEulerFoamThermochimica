volScalarField alphaLiqTC
(
    IOobject
    (
        "alphaLiqTC",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField rho_Salt_L
(
    IOobject
    (
        "rho_Salt_L",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField M_Salt_L
(
    IOobject
    (
        "M_Salt_L",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

//MQM:

volScalarField nPairs
(
    IOobject
    (
        "nPairs",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);


volScalarField nQuadruplets
(
    IOobject
    (
        "nQuadruplets",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);


volScalarField mass_after_liq_Total
(
    IOobject
    (
        "mass_after_liq_Total",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);





volScalarField Xi_liq_Liq1
(
    IOobject
    (
        "Xi_liq_Liq1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_liq_Liq2
(
    IOobject
    (
        "Xi_liq_Liq2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_liq_Liq3
(
    IOobject
    (
        "Xi_liq_Liq3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_liq_Liq4
(
    IOobject
    (
        "Xi_liq_Liq4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_liq_Liq5
(
    IOobject
    (
        "Xi_liq_Liq5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_liq_Liq6
(
    IOobject
    (
        "Xi_liq_Liq5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_liq_LiqDummy
(
    IOobject
    (
        "Xi_liq_LiqDummy",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);


/*

//Fission Products

volScalarField Cs_F_Pair
(
    IOobject
    (
        "Cs_F_Pair",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField La_F_Pair
(
    IOobject
    (
        "La_F_Pair",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Ce_F_Pair
(
    IOobject
    (
        "Ce_F_Pair",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

*/




//Mass Fractions of gaseous products


volScalarField Y_liq_Liq1
(
    IOobject
    (
        "Y_liq_Liq1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_liq_Liq2
(
    IOobject
    (
        "Y_liq_Liq2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_liq_Liq3
(
    IOobject
    (
        "Y_liq_Liq3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_liq_Liq4
(
    IOobject
    (
        "Y_liq_Liq4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_liq_Liq5
(
    IOobject
    (
        "Y_liq_Liq5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_liq_Liq6
(
    IOobject
    (
        "Y_liq_Liq6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_liq_LiqDummy
(
    IOobject
    (
        "Y_liq_LiqDummy",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);




volScalarField Y_after_liq_Liq1
(
    IOobject
    (
        "Y_after_liq_Liq1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_liq_Liq2
(
    IOobject
    (
        "Y_after_liq_Liq2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_liq_Liq3
(
    IOobject
    (
        "Y_after_liq_Liq3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_liq_Liq4
(
    IOobject
    (
        "Y_after_liq_Liq4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_liq_Liq5
(
    IOobject
    (
        "Y_after_liq_Liq5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_liq_Liq6
(
    IOobject
    (
        "Y_after_liq_Liq6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_liq_LiqDummy
(
    IOobject
    (
        "Y_after_liq_LiqDummy",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);




volScalarField sumMoleFracMol
(
    IOobject
    (
        "sumMoleFracMol",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);


volScalarField UF4UF3redox
(
    IOobject
    (
        "UF4UF3redox",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);