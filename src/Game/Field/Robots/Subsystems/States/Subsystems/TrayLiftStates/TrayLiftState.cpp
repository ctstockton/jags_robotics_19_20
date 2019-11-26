#include "TrayLiftState.h"

TrayLiftState::TrayLiftState(void)
{}

TrayLiftState::~TrayLiftState(void)
{}

void TrayLiftState::initialize(pros::Motor* motor, int limit)
{
  trayMotor = motor;
  trayUpperLimit = limit;
}
