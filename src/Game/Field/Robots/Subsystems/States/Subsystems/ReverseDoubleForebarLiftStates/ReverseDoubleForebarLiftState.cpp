#include "ReverseDoubleForebarLiftState.h"

ReverseDoubleForebarLiftState::ReverseDoubleForebarLiftState(void)
{}

ReverseDoubleForebarLiftState::~ReverseDoubleForebarLiftState(void)
{}

void ReverseDoubleForebarLiftState::setMotors(pros::Motor* left, pros::Motor* right)
{
  leftMotor = left;
  rightMotor = right;
}
