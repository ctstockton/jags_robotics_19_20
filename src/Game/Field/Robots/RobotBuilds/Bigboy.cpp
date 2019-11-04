#include "main.h"
#include "Bigboy.h"

Bigboy::Bigboy(void)
{
  this->driveSystem = new FourMotorDrive(LEFT_MOTOR_1, LEFT_MOTOR_2, RIGHT_MOTOR_1, RIGHT_MOTOR_2);
  this->liftSystem = new TwoMotorReverseDoubleForebar(LEFT_LIFT_MOTOR, RIGHT_LIFT_MOTOR);
  this->intakeSystem = new SideRollingIntake(LEFT_INTAKE_MOTOR, RIGHT_INTAKE_MOTOR);
  this->trayLiftSystem = new TrayLift(TRAY_LIFT_MOTOR);
}

Bigboy::~Bigboy(void)
{}

void Bigboy::obey(pros::Controller master)
{

  while (true) {
    driveSystem->obey(master);
    liftSystem->obey(master);
    intakeSystem->obey(master);
    trayLiftSystem->obey(master);
    pros::delay(2);
  }
}
