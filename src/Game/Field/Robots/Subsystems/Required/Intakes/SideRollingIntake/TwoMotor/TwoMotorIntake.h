#ifndef SIDEROLLINGINTAKE_TWOMOTOR_TWOMOTORINTAKE_H
#define SIDEROLLINGINTAKE_TWOMOTOR_TWOMOTORINTAKE_H
#include "../SideRollingIntake.h"
#include "../SideRollingIntakeTrack.h"
#include "SingleLeftIntakeTrack.h"
#include "SingleRightIntakeTrack.h"
#include "../../../../States/StateControllerFactories/SideRollingIntake/SideRollingIntakeFactory.h"
#include "main.h"

class TwoMotorIntake : public SideRollingIntake
{
public:
  TwoMotorIntake(void);
  TwoMotorIntake(std::string, RobotDetails*);
  virtual ~TwoMotorIntake(void);

  void obey(pros::Controller);
  void executeCommand(int*);
private:
  SideRollingIntakeTrack * leftIntakeTrack;
  SideRollingIntakeTrack * rightIntakeTrack;
  SideRollingIntakeFactory * factory;
};
#endif
