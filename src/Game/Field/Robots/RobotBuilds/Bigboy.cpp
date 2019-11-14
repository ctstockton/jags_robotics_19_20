#include "main.h"
#include "Bigboy.h"

Bigboy::Bigboy(void):
Robot()
{
  this->subsystemList = new Subsystem*[5];
  this->driveSystem = new FourMotorDrive(LEFT_MOTOR_1, LEFT_MOTOR_2, RIGHT_MOTOR_1, RIGHT_MOTOR_2, DRIVE_GEARSET);
  this->subsystemList[0] = driveSystem;
  this->liftSystem = new TwoMotorReverseDoubleForebar(LEFT_LIFT_MOTOR, RIGHT_LIFT_MOTOR, LIFT_GEARSET);
  this->subsystemList[1] = liftSystem;
  this->intakeSystem = new TwoMotorIntake(LEFT_INTAKE_MOTOR, RIGHT_INTAKE_MOTOR, INTAKE_GEARSET);
  this->subsystemList[2] = intakeSystem;
  this->trayLiftSystem = new TrayLift(TRAY_LIFT_MOTOR, LIFT_GEARSET);
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
  /*while (true) {
    driveSystem->obey(master);
    liftSystem->obey(master);
    intakeSystem->obey(master);
    trayLiftSystem->obey(master);
    //buttonCheck(master);
    pros::delay(2);
  }*/
  obeyStateController->obey(master);
}
/*
void Bigboy::buttonCheck(pros::Controller master){
  if(master.get_digital(DIGITAL_DOWN)){
    driveSystem->runScoreRoutine();
  }
}*/
