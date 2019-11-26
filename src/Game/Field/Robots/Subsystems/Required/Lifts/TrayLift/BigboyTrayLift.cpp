#include "BigboyTrayLift.h"
#include "main.h"

BigboyTrayLift::BigboyTrayLift(void)
{}

BigboyTrayLift::BigboyTrayLift(int M1, pros::motor_gearset_e gear, int maxLimit)
{
  this->trayMotor = new pros::Motor(M1, gear, true);
  this->stateController = new TrayLiftController(trayMotor, maxLimit);
  this->trayMotor->tare_position();
  completeLift = true;
  scoringLift = false;
}

BigboyTrayLift::~BigboyTrayLift(void)
{
  delete this->trayMotor;
}

void BigboyTrayLift::obey(pros::Controller master)
{
  this->stateController->obey(master);
}

  /*if(master.get_digital(DIGITAL_L1) == 1 && scoringLift == false){
    completeLift = false;
    trayMotor->move_absolute(7500, 100);
  }
  else if(completeLift == false && scoringLift == false && trayMotor->get_position() > 7400){
    completeLift = true;
    trayMotor->move_absolute(2500, 100);
  }
  if(scoringLift == false && trayMotor->get_position()  2500){
    scoringLift = true;
  }

  if(master.get_digital(DIGITAL_L2) == 1 && scoringLift == true){

  }*/

void BigboyTrayLift::executeCommand(int * input)
{}
