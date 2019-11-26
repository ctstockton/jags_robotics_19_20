#ifndef SIDEROLLINGINTAKE_TWOMOTOR_TWOMOTORINTAKE_H
#define SIDEROLLINGINTAKE_TWOMOTOR_TWOMOTORINTAKE_H
#include "../SideRollingIntake.h"
#include "../SideRollingIntakeTrack.h"
#include "SingleLeftTrack.h"
#include "SingleRightTrack.h"
#include "../../../../States/SubsystemStateControllers/SideRollingIntakeController.h"
#include "main.h"

class TwoMotorIntake : public SideRollingIntake
{
public:
  TwoMotorIntake(void);
  TwoMotorIntake(int L1, int R1, pros::motor_gearset_e gear);
  virtual ~TwoMotorIntake(void);

  void obey(pros::Controller);
  void executeCommand(int*);
private:
  SideRollingIntakeTrack * leftIntakeTrack;
  SideRollingIntakeTrack * rightIntakeTrack;
};
#endif
