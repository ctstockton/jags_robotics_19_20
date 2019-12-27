#ifndef MONOBARLIFT_STATE_CONTROLLER_FACTORY_H
#define MONOBARLIFT_STATE_CONTROLLER_FACTORY_H
#include "../StateControllerFactory.h"
class MonobarLiftStateControllerFactory : public StateControllerFactory
{
public:
  MonobarLiftStateControllerFactory(void);
  MonobarLiftStateControllerFactory(std::string, pros::Motor*, pros::Motor*, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~MonobarLiftStateControllerFactory(void);
};
#endif
