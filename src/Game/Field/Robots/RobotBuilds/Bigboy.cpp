#include "main.h"
#include "Bigboy.h"

Bigboy::Bigboy(void)
{
  this->details = new BigboyDetails();
  this->driveSystem = new SevenMotorHDrive(details);
  this->liftSystem = new TwoMotorMonobarLift(details);
  this->intakeSystem = new TwoMotorIntake("scoringAssistTwoMotorSideRollingIntakeController", details);
  this->trayLiftSystem = new TrayLift("unrestrictToggleFourStateMidStallTrayLiftController", details);
}

Bigboy::~Bigboy(void)
{
  delete driveSystem;
  delete liftSystem;
  delete intakeSystem;
  delete trayLiftSystem;
}

void Bigboy::obey(pros::Controller master)
{
  while(!interrupt){
    this->driveSystem->obey(master);
    this->liftSystem->obey(master);
    this->intakeSystem->obey(master);
    this->trayLiftSystem->obey(master);
    pros::delay(2);
  }
}
