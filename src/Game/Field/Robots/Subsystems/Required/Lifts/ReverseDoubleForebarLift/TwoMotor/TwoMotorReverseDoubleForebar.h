#ifndef REVERSEDOUBLEFOREBARLIFT_TWOMOTOR_TWOMOTORREVERSEDOUBLEFOREBAR_H
#define REVERSEDOUBLEFOREBARLIFT_TWOMOTOR_TWOMOTORREVERSEDOUBLEFOREBAR_H
#include "../ReverseDoubleForebar.h"
#include "../../../../States/SubsystemStateControllers/ReverseDoubleForebarController.h"
#include "main.h"

class TwoMotorReverseDoubleForebar : public ReverseDoubleForebar
{
public:
  TwoMotorReverseDoubleForebar(void);
  TwoMotorReverseDoubleForebar(int L1, int R1, pros::motor_gearset_e gear);
  ~TwoMotorReverseDoubleForebar(void);

  void obey(pros::Controller);
  void executeCommand(int*);
private:
  pros::Motor * leftLiftUp;
  pros::Motor * rightLiftUp;
};
#endif
