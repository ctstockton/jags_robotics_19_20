#ifndef SPECIALISTSTATECONTROLLERS_BIGBOY_BIGBOYTRAYLIFT_H
#define SPECIALISTSTATECONTROLLERS_BIGBOY_BIGBOYTRAYLIFT_H
#include "../../TrayLiftController.h"
#include "../../../Subsystems/TrayLiftStates/TrayLiftPositionStates/TrayLiftPositionZero.h"
#include "../../../Subsystems/TrayLiftStates/TrayLiftPositionStates/TrayLiftPositionOne.h"
#include "../../../Subsystems/TrayLiftStates/TrayLiftPositionStates/TrayLiftPositionTwo.h"
#include "../../../Subsystems/TrayLiftStates/TrayLiftStall.h"
class BigboyTrayLiftController : public TrayLiftController
{
public:
  BigboyTrayLiftController(void);
  BigboyTrayLiftController(pros::Motor*, int);
  ~BigboyTrayLiftController(void);

  void obey(pros::Controller);
private:
  int upperLimit;
  int firstPosition;
  int secondPosition;
  bool basicSet;

  TrayLiftState * positionZero;
  TrayLiftState * positionOne;
  TrayLiftState * positionTwo;
  TrayLiftStall stall;
};
#endif
