#include "LiftRelaxTwoStateMonobarLiftController.h"

LiftRelaxTwoStateMonobarLiftController::LiftRelaxTwoStateMonobarLiftController(void)
{}

LiftRelaxTwoStateMonobarLiftController::LiftRelaxTwoStateMonobarLiftController(pros::Motor* left, pros::Motor* right, int position1, int speed1, int position2, int speed2, pros::controller_digital_e_t upButton, pros::controller_digital_e_t downButton):
moveToPosition (new MonobarLiftMoveToPosition(left, right, position1, speed1)),
returnToRestingZero (new MonobarLiftReturnToRestingZero(left, right, position2, speed2)),
state1Command (upButton),
state2Command (downButton)
{}

LiftRelaxTwoStateMonobarLiftController::~LiftRelaxTwoStateMonobarLiftController(void)
{}

void LiftRelaxTwoStateMonobarLiftController::obey(pros::Controller master)
{
  if(master.get_digital(state1Command) == 1){
    moveToPosition->obey(master);
  }
  else if(master.get_digital(state2Command) == 1){
    returnToRestingZero->obey(master);
  }
}
