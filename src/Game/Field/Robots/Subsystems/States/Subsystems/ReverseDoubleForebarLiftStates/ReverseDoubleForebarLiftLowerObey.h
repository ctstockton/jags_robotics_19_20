#ifndef REVERSE_DOUBLEFOREBARLIFT_LOWER_OBEY_H
#define REVERSE_DOUBLEFOREBARLIFT_LOWER_OBEY_H
#include "ReverseDoubleForebarLiftState.h"
class ReverseDoubleForebarLiftLowerObey : public ReverseDoubleForebarLiftState
{
public:
  ReverseDoubleForebarLiftLowerObey(void);
  ReverseDoubleForebarLiftLowerObey(pros::Motor*, pros::Motor*, int, pros::controller_digital_e_t);
  ~ReverseDoubleForebarLiftLowerObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
  void setPosition(int);
  int getPosition(void);
private:
  int position;
  int lowerSpeed;
  pros::controller_digital_e_t control;
};
#endif
