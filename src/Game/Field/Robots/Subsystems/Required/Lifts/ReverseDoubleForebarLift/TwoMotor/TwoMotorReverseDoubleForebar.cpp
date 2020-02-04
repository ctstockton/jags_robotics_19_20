#include "TwoMotorReverseDoubleForebar.h"
#include "main.h"

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(void)
{}

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(std::string string, RobotDetails* details)
{
  this->leftLiftUp = new pros::Motor(details->getLeftLiftMotor1(), details->getLiftGearset());
  this->rightLiftUp = new pros::Motor(details->getRightLiftMotor1(), details->getLiftGearset(), true);
  this->factory = new ReverseDoubleForebarLiftStateControllerFactory(string, this->leftLiftUp, this->rightLiftUp, details);
  this->stateController = this->factory->getController();
  this->leftLiftUp->tare_position();
  this->rightLiftUp->tare_position();
}

TwoMotorReverseDoubleForebar::~TwoMotorReverseDoubleForebar(void)
{
  delete this->leftLiftUp;
  delete this->rightLiftUp;
}

void TwoMotorReverseDoubleForebar::obey(pros::Controller master)
{
  this->stateController->obey(master);
}

void TwoMotorReverseDoubleForebar::executeCommand(int * input)
{}
