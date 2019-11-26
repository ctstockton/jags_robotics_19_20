#include "TrayLiftController.h"

TrayLiftController::TrayLiftController(void)
{}

TrayLiftController::TrayLiftController(pros::Motor* motor, int limit):
trayMotor (motor),
trayUpperLimit (limit)
{
  testing = new * Testing(trayMotor, trayUpperLimit);
}

TrayLiftController::~TrayLiftController(void)
{}
