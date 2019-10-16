#ifndef REVERSEDOUBLEFOREBARLIFT_TWOMOTOR_TWOMOTORREVERSEDOUBLEFOREBAR_H
#define REVERSEDOUBLEFOREBARLIFT_TWOMOTOR_TWOMOTORREVERSEDOUBLEFOREBAR_H
#include "../ReverseDoubleForebar.h"
#include "main.h"

class TwoMotorReverseDoubleForebar : public ReverseDoubleForebar
{
public:
  TwoMotorReverseDoubleForebar(void);
  TwoMotorReverseDoubleForebar(int L1, int R1);
  ~TwoMotorReverseDoubleForebar(void);

  void obey(pros::Controller);

protected:
  pros::Motor * leftLiftUp;
  pros::Motor * rightLiftUp;
  pros::Motor * leftLiftDown;
  pros::Motor * rightLiftDown;
};
#endif
