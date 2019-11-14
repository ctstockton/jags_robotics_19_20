#include "main.h"
#include "Robot.h"

Robot::Robot(void):
obeyStateController (new ObeyStateController())
{}

Robot::~Robot(void)
{}
