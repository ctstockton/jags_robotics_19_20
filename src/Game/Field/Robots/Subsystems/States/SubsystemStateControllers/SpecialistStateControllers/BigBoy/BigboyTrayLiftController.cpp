#include "BigboyTrayLiftController.h"

BigboyTrayLiftController::BigboyTrayLiftController(void)
{}

BigboyTrayLiftController::BigboyTrayLiftController(pros::Motor* motor, int upper, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2):
positionZero (new TrayLiftMoveThenReturn(motor, 0, 100, 4)),
positionOne (new TrayLiftMoveThenReturn(motor, 6000, 100, 2)),
stall (new TrayLiftStall(util2, 3)),
unrestricted (new TrayLiftUnrestrictedObey(motor, raise, lower, DIGITAL_RIGHT, 4))
{
}

BigboyTrayLiftController::~BigboyTrayLiftController(void)
{
  delete positionZero;
  delete positionOne;
  delete stall;
}

void BigboyTrayLiftController::obey(pros::Controller master)
{

}
