#include "BigboyTrayLift.h"
#include "main.h"

BigboyTrayLift::BigboyTrayLift(void)
{}

BigboyTrayLift::BigboyTrayLift(int M1, pros::motor_gearset_e gear)
{
  this->trayMotor = new pros::Motor(M1, gear, true);
  this->trayMotorReverse = new pros::Motor(M1, gear);
  this->trayMotor->tare_position();
  this->trayMotorReverse->tare_position();
}

BigboyTrayLift::~BigboyTrayLift(void)
{
  delete this->trayMotor;
}

void BigboyTrayLift::obey(pros::Controller master)
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

void BigboyTrayLift::scoringObey(pros::Controller master)
{
  obey(master);
}

void BigboyTrayLift::executeCommand(int * input)
{}
