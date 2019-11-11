#include"State.h"

State::State(void)
{}

State::~State(void)
{}

void State::setRobotSubsystems(void)
{}

Subsystem * State::getRobotSubsystem(int selection)
{
  return &robotSubsystems[selection];
}
