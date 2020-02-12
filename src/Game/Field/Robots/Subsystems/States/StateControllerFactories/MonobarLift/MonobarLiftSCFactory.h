#ifndef MONOBARLIFT_SC_FACTORY_H
#define MONOBARLIFT_SC_FACTORY_H
#include "../StateControllerFactory.h"
#include "../FunctionWrappers/MonobarLiftWrappers/MonobarLiftSCWrapper.h"
#include "../FunctionWrappers/MonobarLiftWrappers/LiftRelaxTwoStateMonobarLiftSCWrapper.h"
class MonobarLiftSCFactory : public StateControllerFactory
{
public:
  MonobarLiftSCFactory(void);
  MonobarLiftSCFactory(std::string, pros::Motor*, pros::Motor*, int, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~MonobarLiftSCFactory(void);
private:
  std::map<std::string, MonobarLiftSCWrapper*> map;
  MonobarLiftSCWrapper * wrapper;
  LiftRelaxTwoStateMonobarLiftSCWrapper * liftRelaxTwoStateMonobarLiftSCWrapper;
};
#endif
