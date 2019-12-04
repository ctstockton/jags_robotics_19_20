#ifndef MONOBARLIFT_TWOMOTOR_TWOMOTORMONOBARLIFT_H
#define MONOBARLIFT_TWOMOTOR_TWOMOTORMONOBARLIFT_H
#include "main.h"
#include "../MonobarLift.h"
#include "../../../../States/SubsystemStateControllers/SpecialistStateControllers/Bigboy/BigboyMonobarLiftController.h"

class TwoMotorMonobarLift : public MonobarLift
{
public:
  TwoMotorMonobarLift(void);
  TwoMotorMonobarLift(int L1, int R1, pros::motor_gearset_e gear);
  virtual ~TwoMotorMonobarLift(void);

  virtual void obey(pros::Controller);
  virtual void executeCommand(int*);
private:
  pros::Motor * leftLiftUp;
  pros::Motor * rightLiftUp;
};
#endif
