#include "main.h"
#include "Bigboy.h"

Bigboy::Bigboy(void):
Robot()
{
  this->subsystemList = new Subsystem*[5];
  int rotateConstant = ((CENTERPOINT_RADIUS*DRIVE_CONSTANT)/(360*WHEEL_RADIUS));
  this->driveSystem = new FourMotorDrive(LEFT_MOTOR_1, LEFT_MOTOR_2, RIGHT_MOTOR_1, RIGHT_MOTOR_2, DRIVE_GEARSET, DRIVE_CONSTANT, rotateConstant);
  this->subsystemList[0] = driveSystem;
  this->liftSystem = new TwoMotorMonobarLift(LEFT_LIFT_MOTOR, RIGHT_LIFT_MOTOR, LIFT_GEARSET);
  this->subsystemList[1] = liftSystem;
  this->intakeSystem = new TwoMotorIntake(LEFT_INTAKE_MOTOR, RIGHT_INTAKE_MOTOR, INTAKE_GEARSET);
  this->subsystemList[2] = intakeSystem;
  this->trayLiftSystem = new BigboyTrayLift(TRAY_LIFT_MOTOR, LIFT_GEARSET);
  this->subsystemList[3] = trayLiftSystem;
  this->subsystemList[4] = 0;
  obeyStateController->setSubsystemList(this->subsystemList);
}

Bigboy::~Bigboy(void)
{
  delete driveSystem;
  delete liftSystem;
  delete intakeSystem;
  delete trayLiftSystem;
  delete subsystemList;
}

void Bigboy::obey(pros::Controller master)
{
  obeyStateController->obey(master);
}
