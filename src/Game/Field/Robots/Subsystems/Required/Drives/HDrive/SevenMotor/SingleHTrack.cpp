#include "SingleHTrack.h"
#include "main.h"

SingleHTrack::SingleHTrack(void)
{}

SingleHTrack::SingleHTrack(int H1, pros::motor_gearset_e gear):
hMotor (new pros::Motor(H1, gear))
{}

SingleHTrack::~SingleHTrack(void)
{
  delete hMotor;
}

void SingleHTrack::obey(pros::Controller master)
{
  input2 = master.get_analog(ANALOG_LEFT_X);
  if(input2 > 50 || input2 < -50){
    bypass = true;
  }
  if(bypass){
    if(input2 > 50){
      hMotor->move(input2 - 50);
    }
    else if(input2 < -50){
      hMotor->move(input2 + 50);
    }
    else{
      hMotor->move(0);
      bypass = false;
    }
  }
  else{}
}

bool SingleHTrack::positionReached(int)
{
  return false;
}

void SingleHTrack::driveBackward(int)
{}

void SingleHTrack::driveForward(int)
{}

void SingleHTrack::orbitPointLeft(int)
{}

void SingleHTrack::orbitPointRight(int)
{}

void SingleHTrack::strafeLeft(int)
{}

void SingleHTrack::strafeRight(int)
{}

void SingleHTrack::turnLeft(int)
{}

void SingleHTrack::turnRight(int)
{}

void SingleHTrack::scoringObey(pros::Controller master)
{
  obey(master);
}

void SingleHTrack::tarePosition(void)
{
  hMotor->tare_position();

}
