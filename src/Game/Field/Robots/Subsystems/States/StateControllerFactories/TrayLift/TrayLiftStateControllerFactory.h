#ifndef TRAYLIFT_STATE_CONTROLLER_FACTORY
#define TRAYLIFT_STATE_CONTROLLER_FACTORY
#include "../StateControllerFactory.h"
#include "../FunctionWrappers/TrayLiftWrappers/TrayLiftStateControllerFactoryFunctionWrapper.h"
#include "../FunctionWrappers/TrayLiftWrappers/UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper.h"
#include "../FunctionWrappers/TrayLiftWrappers/UnrestrictToggleTrayLiftControllerWrapper.h"
class TrayLiftStateControllerFactory : public StateControllerFactory
{
public:
  TrayLiftStateControllerFactory(void);
  TrayLiftStateControllerFactory(std::string, pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~TrayLiftStateControllerFactory(void);

private:
  std::map<std::string, TrayLiftStateControllerFactoryFunctionWrapper*> map;
  TrayLiftStateControllerFactoryFunctionWrapper * wrapper;
  UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper * unrestrictToggleFourStateMidStallTrayLiftControllerWrapper;
  UnrestrictToggleTrayLiftControllerWrapper * unrestrictToggleTrayLiftControllerWrapper;
};
#endif
