#include "main.h"
#include "TRex.h"

TRex::TRex(void):
trayLiftString ("unrestrictToggleTrayLiftController")
{
  float rotateConstant = ((CENTERPOINT_RADIUS*DRIVE_CONSTANT)/(360*WHEEL_RADIUS));
  this->driveSystem = new FourMotorDrive(LEFT_MOTOR_1, LEFT_MOTOR_2, RIGHT_MOTOR_1, RIGHT_MOTOR_2, DRIVE_GEARSET, DRIVE_CONSTANT, rotateConstant);
  this->liftSystem = new TwoMotorReverseDoubleForebar(LEFT_LIFT_MOTOR, RIGHT_LIFT_MOTOR, LIFT_GEARSET);
<<<<<<< HEAD
  this->intakeSystem = new TwoMotorIntake(LEFT_INTAKE_MOTOR, RIGHT_INTAKE_MOTOR, INTAKE_GEARSET);
  this->trayLiftSystem = new TrayLift(trayLiftString, TRAY_LIFT_MOTOR, LIFT_GEARSET, TRAY_LIFT_MAX, DIGITAL_X, DIGITAL_Y, DIGITAL_L1, DIGITAL_L2);
=======
  this->intakeSystem = new TwoMotorIntake(LEFT_INTAKE_MOTOR, RIGHT_INTAKE_MOTOR, INTAKE_GEARSET, INTAKE_SPEED, OUTTAKE_SPEED);
  this->trayLiftSystem = new TrayLift(TRAY_LIFT_MOTOR, LIFT_GEARSET, TRAY_LIFT_MAX, DIGITAL_X, DIGITAL_Y, DIGITAL_L1, DIGITAL_L2);
>>>>>>> ad659745b1c6c9c1f407cb3940411dbcd70773e5
}

TRex::~TRex(void)
{
  delete driveSystem;
  delete liftSystem;
  delete intakeSystem;
  delete trayLiftSystem;
}

void TRex::obey(pros::Controller master)
{
  while(!interrupt){
    this->driveSystem->obey(master);
    this->liftSystem->obey(master);
    this->intakeSystem->obey(master);
    this->trayLiftSystem->obey(master);
    pros::delay(2);
  }
}
