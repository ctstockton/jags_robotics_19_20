#include "TrayLift.h"
#include "main.h"

TrayLift::TrayLift(void)
{}

TrayLift::TrayLift(int M1, pros::motor_gearset_e gear)
{
  this->trayMotor = new pros::Motor(M1, gear, true);
  this->trayMotorReverse = new pros::Motor(M1, gear);
  this->trayMotor->tare_position();
  this->trayMotorReverse->tare_position();
}

TrayLift::~TrayLift(void)
{
  delete this->trayMotor;
}

void TrayLift::obey(pros::Controller master)
{
  if((master.get_digital(DIGITAL_Y) == 1) && (trayMotor->get_position() < -400)){
    trayMotor->move(100);
  }
  else if((master.get_digital(DIGITAL_X) == 1)/* && (trayMotor->get_position() > 100)*/){
    trayMotor->move(-100);
  }
  else{
    std::cout << trayMotor->get_position() << std::endl;
    trayMotor->move(0);
  }
}

void TrayLift::scoringObey(pros::Controller master)
{
  obey(master);
}

void TrayLift::executeCommand(int * input)
{}
