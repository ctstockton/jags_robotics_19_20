#ifndef TRAYLIFT_SC_WRAPPER_H
#define TRAYLIFT_SC_WRAPPER_H
#include "../StateControllerFactoryFunctionWrapper.h"
class TrayLiftSCWrapper : public StateControllerFactoryFunctionWrapper
{
public:
  TrayLiftSCWrapper(void);
  virtual ~TrayLiftSCWrapper(void);

  virtual StateController * getController(pros::Motor*, RobotDetails*) = 0;
};
#endif
