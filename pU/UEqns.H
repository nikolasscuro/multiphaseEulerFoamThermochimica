Info<< "Constructing momentum equations" << endl;

PtrList<fvVectorMatrix> UEqns(phases.size()); //phases.size() = number of phases?

{
    autoPtr<phaseSystem::momentumTransferTable>
        momentumTransferPtr(fluid.momentumTransfer());

    phaseSystem::momentumTransferTable&
        momentumTransfer(momentumTransferPtr());

    forAll(fluid.movingPhases(), movingPhasei) //moving phases because there is non moving phases like solid
    {
        phaseModel& phase = fluid.movingPhases()[movingPhasei];

        const volScalarField& alpha = phase;
        const volScalarField& rho = phase.rho();
        volVectorField& U = phase.URef();

        UEqns.set
        (
            phase.index(),
            new fvVectorMatrix
            (
                phase.UEqn()
             ==
               *momentumTransfer[phase.name()]
              + fvModels.source(alpha, rho, U)

            )
        );

        UEqns[phase.index()].relax();
        fvConstraints.constrain(UEqns[phase.index()]);
        U.correctBoundaryConditions();
        fvConstraints.constrain(U);
    }
}
