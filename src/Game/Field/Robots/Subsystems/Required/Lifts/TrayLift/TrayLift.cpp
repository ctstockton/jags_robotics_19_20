#include "TrayLift.h"
#include "main.h"

TrayLift::TrayLift(void)
{}

TrayLift::TrayLift(std::string string, RobotDetails* details)
{
  this->trayMotor = new pros::Motor(details->getTrayLiftMotor1(), details->getLiftGearset(), true);
  this->factory = new TrayLiftSCFactory(string, this->trayMotor, details);
  this->stateController = this->factory->getController();
  this->trayMotor->tare_position();
}

TrayLift::~TrayLift(void)
{
  delete this->trayMotor;
}

void TrayLift::obey(pros::Controller master)
{
  if((master.get_digital(DIGITAL_X) == 1)){
    trayMotor->move_absolute(8000, 25);
  }
  else if((master.get_digital(DIGITAL_Y) == 1)/* && (trayMotor->get_position() > 100)*/){
    trayMotor->move_absolute(-200, -25);
  }
  else{
    trayMotor->move(0);
  }
}

void TrayLift::executeCommand(int * input)
{}
