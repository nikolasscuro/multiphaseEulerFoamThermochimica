volScalarField mass_gas_total
(
    IOobject
    (
        "mass_gas_total",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);


volScalarField mass_gas_dummyGas
(
    IOobject
    (
        "mass_gas_dummyGas",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas0
(
    IOobject
    (
        "mass_gas_gas0",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas1
(
    IOobject
    (
        "mass_gas_gas1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas2
(
    IOobject
    (
        "mass_gas_gas2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas3
(
    IOobject
    (
        "mass_gas_gas3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas4
(
    IOobject
    (
        "mass_gas_gas4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas5
(
    IOobject
    (
        "mass_gas_gas5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas6
(
    IOobject
    (
        "mass_gas_gas6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas10
(
    IOobject
    (
        "mass_gas_gas10",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas11
(
    IOobject
    (
        "mass_gas_gas11",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas7
(
    IOobject
    (
        "mass_gas_gas7",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas8
(
    IOobject
    (
        "mass_gas_gas8",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas9
(
    IOobject
    (
        "mass_gas_gas9",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas12
(
    IOobject
    (
        "mass_gas_gas12",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_gas_gas13
(
    IOobject
    (
        "mass_gas_gas13",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);











volScalarField mass_after_gas_total
(
    IOobject
    (
        "mass_after_gas_total",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);


volScalarField mass_after_gas_dummyGas
(
    IOobject
    (
        "mass_after_gas_dummyGas",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas0
(
    IOobject
    (
        "mass_after_gas_gas0",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas1
(
    IOobject
    (
        "mass_after_gas_gas1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas2
(
    IOobject
    (
        "mass_after_gas_gas2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas3
(
    IOobject
    (
        "mass_after_gas_gas3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas4
(
    IOobject
    (
        "mass_after_gas_gas4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas5
(
    IOobject
    (
        "mass_after_gas_gas5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas6
(
    IOobject
    (
        "mass_after_gas_gas6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas10
(
    IOobject
    (
        "mass_after_gas_gas10",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas11
(
    IOobject
    (
        "mass_after_gas_gas11",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas7
(
    IOobject
    (
        "mass_after_gas_gas7",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas8
(
    IOobject
    (
        "mass_after_gas_gas8",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas9
(
    IOobject
    (
        "mass_after_gas_gas9",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas12
(
    IOobject
    (
        "mass_after_gas_gas12",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_gas_gas13
(
    IOobject
    (
        "mass_after_gas_gas13",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);