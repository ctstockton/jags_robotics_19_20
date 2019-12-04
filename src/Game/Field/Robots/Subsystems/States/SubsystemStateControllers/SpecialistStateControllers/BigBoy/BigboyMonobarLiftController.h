#ifndef SPECIALISTSTATECONTROLLERS_BIGBOY_BIGBOYMONOBARLIFTCONTROLLER_H
#define SPECIALISTSTATECONTROLLERS_BIGBOY_BIGBOYMONOBARLIFTCONTROLLER_H
#include "../../MonobarLiftController.h"
#include "../../../Subsystems/MonobarLiftStates/MonobarLiftBigboyCustom.h"
class BigboyMonobarLiftController : public MonobarLiftController
{
public:
  BigboyMonobarLiftController(void);
  BigboyMonobarLiftController(pros::Motor*, pros::Motor*);
  ~BigboyMonobarLiftController(void);

  void obey(pros::Controller);
private:
  MonobarLiftBigboyCustom bigboy;
};
#endif
