#include "main.h"
#include "TRex.h"

TRex::TRex(void)
{
  float rotateConstant = ((CENTERPOINT_RADIUS*DRIVE_CONSTANT)/(360*WHEEL_RADIUS));
  this->driveSystem = new FourMotorDrive(LEFT_MOTOR_1, LEFT_MOTOR_2, RIGHT_MOTOR_1, RIGHT_MOTOR_2, DRIVE_GEARSET, DRIVE_CONSTANT, rotateConstant);
  this->liftSystem = new TwoMotorReverseDoubleForebar(LEFT_LIFT_MOTOR, RIGHT_LIFT_MOTOR, LIFT_GEARSET);
  this->intakeSystem = new TwoMotorIntake(LEFT_INTAKE_MOTOR, RIGHT_INTAKE_MOTOR, INTAKE_GEARSET);
  this->trayLiftSystem = new TrayLift(TRAY_LIFT_MOTOR, LIFT_GEARSET, TRAY_LIFT_MAX);
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
