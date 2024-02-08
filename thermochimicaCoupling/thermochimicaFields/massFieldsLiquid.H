volScalarField mass_liq_Total
(
    IOobject
    (
        "mass_liq_Total",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_liq_Liq1
(
    IOobject
    (
        "mass_liq_Liq1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_liq_Liq2
(
    IOobject
    (
        "mass_liq_Liq2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_liq_Liq3
(
    IOobject
    (
        "mass_liq_Liq3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_liq_Liq4
(
    IOobject
    (
        "mass_liq_Liq4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_liq_Liq5
(
    IOobject
    (
        "mass_liq_Liq5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_liq_Liq6
(
    IOobject
    (
        "mass_liq_Liq6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_liq_LiqDummy
(
    IOobject
    (
        "mass_liq_LiqDummy",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);




//After
volScalarField mass_after_liq_total
(
    IOobject
    (
        "mass_after_liq_total",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);


volScalarField mass_after_liq_Liq1
(
    IOobject
    (
        "mass_after_liq_Liq1",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_liq_Liq3
(
    IOobject
    (
        "mass_after_liq_Liq3",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_liq_Liq2
(
    IOobject
    (
        "mass_after_liq_Liq2",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_liq_Liq4
(
    IOobject
    (
        "mass_after_liq_Liq4",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_liq_Liq5
(
    IOobject
    (
        "mass_after_liq_Liq5",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_liq_Liq6
(
    IOobject
    (
        "mass_after_liq_Liq6",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);

volScalarField mass_after_liq_LiqDummy
(
    IOobject
    (
        "mass_after_liq_LiqDummy",
        runTime.timeName(),
        mesh,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    mesh,
    dimensionedScalar("", dimless, 0)
);