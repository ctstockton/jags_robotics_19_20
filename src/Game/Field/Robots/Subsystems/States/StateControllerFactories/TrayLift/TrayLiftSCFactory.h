#ifndef TRAYLIFT_SC_FACTORY
#define TRAYLIFT_SC_FACTORY
#include "../StateControllerFactory.h"
#include "../FunctionWrappers/TrayLiftWrappers/TrayLiftSCWrapper.h"
#include "../FunctionWrappers/TrayLiftWrappers/UnrestrictToggleFourStateMidStallTrayLiftSCWrapper.h"
#include "../FunctionWrappers/TrayLiftWrappers/UnrestrictToggleTrayLiftSCWrapper.h"
class TrayLiftSCFactory : public StateControllerFactory
{
public:
  TrayLiftSCFactory(void);
  TrayLiftSCFactory(std::string, pros::Motor*, RobotDetails*);
  ~TrayLiftSCFactory(void);

private:
  std::map<std::string, TrayLiftSCWrapper*> map;
  TrayLiftSCWrapper * wrapper;
  UnrestrictToggleFourStateMidStallTrayLiftSCWrapper * unrestrictToggleFourStateMidStallTrayLiftSCWrapper;
  UnrestrictToggleTrayLiftSCWrapper * unrestrictToggleTrayLiftSCWrapper;
};
#endif
