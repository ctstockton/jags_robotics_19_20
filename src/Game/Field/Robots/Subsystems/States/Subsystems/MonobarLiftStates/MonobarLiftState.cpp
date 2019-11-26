#include "MonobarLiftState.h"

MonobarLiftState::MonobarLiftState(void)
{}

MonobarLiftState::~MonobarLiftState(void)
{}

void MonobarLiftState::setMotors(pros::Motor* left, pros::Motor* right)
{
  leftMotor = left;
  rightMotor = right;
}
