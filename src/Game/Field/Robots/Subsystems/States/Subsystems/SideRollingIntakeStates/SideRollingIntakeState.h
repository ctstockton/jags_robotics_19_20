#ifndef SIDE_ROLLING_INTAKE_STATE_H
#define SIDE_ROLLING_INTAKE_STATE_H
#include "../../State.h"
#include "../../../Required/Intakes/SideRollingIntake/SideRollingIntakeTrack.h"
class SideRollingIntakeState : public State
{
public:
  SideRollingIntakeState(void);
  ~SideRollingIntakeState(void);
  
protected:
  SideRollingIntakeTrack * leftIntakeTrack;
  SideRollingIntakeTrack * rightIntakeTrack;
};
#endif
