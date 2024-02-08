volScalarField pi_gas_gas0
(
    IOobject
    (
        "pi_gas_gas0",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas1
(
    IOobject
    (
        "pi_gas_gas1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas2
(
    IOobject
    (
        "pi_gas_gas2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas3
(
    IOobject
    (
        "pi_gas_gas3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas4
(
    IOobject
    (
        "pi_gas_gas4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas5
(
    IOobject
    (
        "pi_gas_gas5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas6
(
    IOobject
    (
        "pi_gas_gas6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas7
(
    IOobject
    (
        "pi_gas_gas7",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas8
(
    IOobject
    (
        "pi_gas_gas8",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas9
(
    IOobject
    (
        "pi_gas_gas9",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas10
(
    IOobject
    (
        "pi_gas_gas10",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas11
(
    IOobject
    (
        "pi_gas_gas11",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas12
(
    IOobject
    (
        "pi_gas_gas12",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField pi_gas_gas13
(
    IOobject
    (
        "pi_gas_gas13",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);



    volScalarField pi_gas_dummyGas
(
    IOobject
    (
        "pi_gas_dummyGas",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);



volScalarField LiFpureVP
(
    IOobject
    (
        "LiFpureVP",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField F2Li2pureVP
(
    IOobject
    (
        "F2Li2pureVP",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField F3Li3pureVP
(
    IOobject
    (
        "F3Li3pureVP",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField UF3pureVP
(
    IOobject
    (
        "UF3pureVP",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField UF4pureVP
(
    IOobject
    (
        "UF4pureVP",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField CsFpureVP
(
    IOobject
    (
        "CsFpureVP",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);

volScalarField ThF4pureVP
(
    IOobject
    (
        "ThF4pureVP",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    mesh,
        dimensionedScalar(dimensionSet(1, -1, -2, 0, 0), 0)
);