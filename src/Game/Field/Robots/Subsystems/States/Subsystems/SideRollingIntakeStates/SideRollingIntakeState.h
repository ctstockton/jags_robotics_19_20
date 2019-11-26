#ifndef SUBSYSTEMS_SIDEROLLINGINTAKESTATES_SIDEROLLINGINTAKESTATE_H
#define SUBSYSTEMS_SIDEROLLINGINTAKESTATES_SIDEROLLINGINTAKESTATE_H
#include "../../State.h"
#include "../../../Required/Intakes/SideRollingIntake/SideRollingIntakeTrack.h"
class SideRollingIntakeState : public State
{
public:
  SideRollingIntakeState(void);
  ~SideRollingIntakeState(void);

  void setIntakeTracks(SideRollingIntakeTrack*, SideRollingIntakeTrack*);
protected:
  SideRollingIntakeTrack * leftIntakeTrack;
  SideRollingIntakeTrack * rightIntakeTrack;
};
#endif
