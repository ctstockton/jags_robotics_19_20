#include "main.h"
#include "TRex.h"

TRex::TRex(void)
{
  subsystemList = new Subsystem*[4];
  this->driveSystem = new FourMotorDrive(LEFT_MOTOR_1, LEFT_MOTOR_2, RIGHT_MOTOR_1, RIGHT_MOTOR_2, DRIVE_GEARSET);
  subsystemList[0] = driveSystem;
  this->liftSystem = new TwoMotorReverseDoubleForebar(LEFT_LIFT_MOTOR, RIGHT_LIFT_MOTOR, LIFT_GEARSET);
  subsystemList[1] = liftSystem;
  this->intakeSystem = new TwoMotorIntake(LEFT_INTAKE_MOTOR, RIGHT_INTAKE_MOTOR, INTAKE_GEARSET);
  subsystemList[2] = intakeSystem;
  this->trayLiftSystem = new TrayLift(TRAY_LIFT_MOTOR, LIFT_GEARSET);
  subsystemList[3] = trayLiftSystem;
  subsystemList[4] = 0;
  obeyStateController->setSubsystemList(subsystemList);
}

TRex::~TRex(void)
{
  delete driveSystem;
  delete liftSystem;
  delete intakeSystem;
  delete trayLiftSystem;
  delete subsystemList;
}

void TRex::obey(pros::Controller master)
{
  obeyStateController->obey(master);
}
