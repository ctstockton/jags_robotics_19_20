#ifndef TWO_MOTOR_REVERSE_DOUBLE_FOREBAR_H
#define TWO_MOTOR_REVERSE_DOUBLE_FOREBAR_H
#include "../ReverseDoubleForebar.h"
#include "../../../../States/SubsystemStateControllers/ReverseDoubleForebarLiftController.h"
#include "../../../../States/StateControllerFactories/ReverseDoubleForebarLiftStateControllerFactory.h"
#include "main.h"

class TwoMotorReverseDoubleForebar : public ReverseDoubleForebar
{
public:
  TwoMotorReverseDoubleForebar(void);
  TwoMotorReverseDoubleForebar(std::string, RobotDetails*);
  ~TwoMotorReverseDoubleForebar(void);

  void obey(pros::Controller);
  void executeCommand(int*);
private:
  pros::Motor * leftLiftUp;
  pros::Motor * rightLiftUp;
  ReverseDoubleForebarLiftStateControllerFactory * factory;
};
#endif
