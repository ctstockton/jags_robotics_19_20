#include "TrayLift.h"
#include "main.h"

TrayLift::TrayLift(void)
{}

TrayLift::TrayLift(int M1, pros::motor_gearset_e gear)
{
  this->trayMotor = new pros::Motor(M1, gear);
  this->trayMotorReverse = new pros::Motor(M1, gear, true);
  this->trayMotor->tare_position();
  this->trayMotorReverse->tare_position();
}

TrayLift::~TrayLift(void)
{
  delete this->trayMotor;
}

void TrayLift::obey(pros::Controller master)
{
  if((master.get_digital(DIGITAL_Y) == 1) && (trayMotor->get_position() < 3900)){
    input = 1;
  }
  else if((master.get_digital(DIGITAL_X) == 1) && (trayMotor->get_position() > 0)){
    input = -1;
  }
  else{
    input = 0;
  }

  switch(input){
    case 1:
      trayMotor->move(100);
      break;
    case 0:
      trayMotor->move(0);
      break;
    case -1:
      trayMotor->move(-100);
      break;
    }

  std::cout << "Motor Position: " << trayMotor->get_position() << std::endl;
}
