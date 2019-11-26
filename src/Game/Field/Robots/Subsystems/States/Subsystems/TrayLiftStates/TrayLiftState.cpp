#include "TrayLiftState.h"

TrayLiftState::TrayLiftState(void)
{}

TrayLiftState::TrayLiftState(pros::Motor* motor):
trayMotor (motor)
{}

TrayLiftState::~TrayLiftState(void)
{}
