#include "TwoMotorIntake.h"
#include "main.h"

TwoMotorIntake::TwoMotorIntake(void)
{}

TwoMotorIntake::TwoMotorIntake(std::string string, RobotDetails * details)
{
  this->leftIntakeTrack = new SingleLeftIntakeTrack(details->getLeftIntakeMotor1(), details->getIntakeGearset(), details->getIntakeSpeed(), details->getOuttakeSpeed());
  this->rightIntakeTrack = new SingleRightIntakeTrack(details->getRightIntakeMotor1(), details->getIntakeGearset(), details->getIntakeSpeed(), details->getOuttakeSpeed());
  factory = new SideRollingIntakeSCFactory(string, this->leftIntakeTrack, this->rightIntakeTrack, details);
  this->stateController = factory->getController();
}

TwoMotorIntake::~TwoMotorIntake(void)
{
  delete this->leftIntakeTrack;
  delete this->rightIntakeTrack;
  delete this->stateController;
}

void TwoMotorIntake::obey(pros::Controller master)
{
  this->stateController->obey(master);
}

void TwoMotorIntake::executeCommand(int * input)
{}
