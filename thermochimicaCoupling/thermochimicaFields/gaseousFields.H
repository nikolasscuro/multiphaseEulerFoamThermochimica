volScalarField alphaGasTC
(
    IOobject
    (
        "alphaGasTC",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField idealGasPhase
(
    IOobject
    (
        "idealGasPhase",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField excessGas
(
    IOobject
    (
        "excessGas",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);





volScalarField Xi_gas_gas0
(
    IOobject
    (
        "Xi_gas_gas0",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas1
(
    IOobject
    (
        "Xi_gas_gas1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas2
(
    IOobject
    (
        "Xi_gas_gas2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas3
(
    IOobject
    (
        "Xi_gas_gas3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas4
(
    IOobject
    (
        "Xi_gas_gas4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas5
(
    IOobject
    (
        "Xi_gas_gas5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas6
(
    IOobject
    (
        "Xi_gas_gas6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas10
(
    IOobject
    (
        "Xi_gas_gas10",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas11
(
    IOobject
    (
        "Xi_gas_gas11",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas7
(
    IOobject
    (
        "Xi_gas_gas7",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas8
(
    IOobject
    (
        "Xi_gas_gas8",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas9
(
    IOobject
    (
        "Xi_gas_gas9",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas12
(
    IOobject
    (
        "Xi_gas_gas12",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Xi_gas_gas13
(
    IOobject
    (
        "Xi_gas_gas13",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);


volScalarField Xi_gas_dummyGas
(
    IOobject
    (
        "Xi_gas_dummyGas",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);






//Mass Fractions of gaseous products


volScalarField Y_gas_gas0
(
    IOobject
    (
        "Y_gas_gas0",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas1
(
    IOobject
    (
        "Y_gas_gas1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas2
(
    IOobject
    (
        "Y_gas_gas13",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas3
(
    IOobject
    (
        "Y_gas_gas3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas4
(
    IOobject
    (
        "Y_gas_gas12",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas5
(
    IOobject
    (
        "Y_gas_gas5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas6
(
    IOobject
    (
        "Y_gas_gas6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas7
(
    IOobject
    (
        "Y_gas_gas7",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas8
(
    IOobject
    (
        "Y_gas_gas8",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas9
(
    IOobject
    (
        "Y_gas_gas9",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas10
(
    IOobject
    (
        "Y_gas_gas10",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas11
(
    IOobject
    (
        "Y_gas_gas11",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas12
(
    IOobject
    (
        "Y_gas_gas12",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_gas13
(
    IOobject
    (
        "Y_gas_gas13",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_gas_dummyGas
(
    IOobject
    (
        "Y_dummyGas_gas",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);



// Test Y_after


volScalarField Y_after_gas_gas0
(
    IOobject
    (
        "Y_after_gas_gas0",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas1
(
    IOobject
    (
        "Y_after_gas_gas1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas2
(
    IOobject
    (
        "Y_after_gas_gas2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas3
(
    IOobject
    (
        "Y_after_gas_gas3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas4
(
    IOobject
    (
        "Y_after_gas_gas4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas5
(
    IOobject
    (
        "Y_after_gas_gas5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas6
(
    IOobject
    (
        "Y_after_gas_gas6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas7
(
    IOobject
    (
        "Y_after_gas_gas7",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas8
(
    IOobject
    (
        "Y_after_gas_gas8",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas9
(
    IOobject
    (
        "Y_after_gas_gas9",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas10
(
    IOobject
    (
        "Y_after_gas_gas10",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas11
(
    IOobject
    (
        "Y_after_gas_gas11",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas12
(
    IOobject
    (
        "Y_after_gas_gas12",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_gas13
(
    IOobject
    (
        "Y_gas_gas13",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField Y_after_gas_dummyGas
(
    IOobject
    (
        "Y_after_dummyGas_gas",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);