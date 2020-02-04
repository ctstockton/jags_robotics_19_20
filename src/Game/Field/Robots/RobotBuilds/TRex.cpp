#include "main.h"
#include "TRex.h"

TRex::TRex(void)
{
  this->details = new TRexDetails();
  this->driveSystem = new FourMotorDrive(details);
  this->liftSystem = new TwoMotorReverseDoubleForebar("manualControlLowerPointRelaxReverseDoubleForebarLiftStateController", details);
  this->intakeSystem = new TwoMotorIntake("scoringAssistTwoMotorSideRollingIntakeController", details);
}

TRex::~TRex(void)
{
  delete details;
  delete driveSystem;
  delete liftSystem;
  delete intakeSystem;
}

void TRex::obey(pros::Controller master)
{
  while(1){
    this->driveSystem->obey(master);
    this->liftSystem->obey(master);
    this->intakeSystem->obey(master);
    pros::delay(2);
  }
}
