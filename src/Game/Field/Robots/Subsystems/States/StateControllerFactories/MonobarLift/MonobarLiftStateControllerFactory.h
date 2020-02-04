#ifndef MONOBARLIFT_STATE_CONTROLLER_FACTORY_H
#define MONOBARLIFT_STATE_CONTROLLER_FACTORY_H
#include "../StateControllerFactory.h"
#include "../FunctionWrappers/MonobarLiftWrappers/MonobarLiftStateControllerFactoryFunctionWrapper.h"
#include "../FunctionWrappers/MonobarLiftWrappers/LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper.h"
class MonobarLiftStateControllerFactory : public StateControllerFactory
{
public:
  MonobarLiftStateControllerFactory(void);
  MonobarLiftStateControllerFactory(std::string, pros::Motor*, pros::Motor*, int, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~MonobarLiftStateControllerFactory(void);
private:
  std::map<std::string, MonobarLiftStateControllerFactoryFunctionWrapper*> map;
  MonobarLiftStateControllerFactoryFunctionWrapper * wrapper;
  LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper * liftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper;
};
#endif
