#include "TrayLift.h"
#include "main.h"

TrayLift::TrayLift(void)
{}

TrayLift::TrayLift(std::string string, int M1, pros::motor_gearset_e gear, int maxLimit, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2)
{
  this->trayMotor = new pros::Motor(M1, gear, true);
  this->factory = new TrayLiftStateControllerFactory(string, this->trayMotor, maxLimit, raise, lower, util1, util2);
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
    trayMotor->move_absolute(4000, 25);
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
