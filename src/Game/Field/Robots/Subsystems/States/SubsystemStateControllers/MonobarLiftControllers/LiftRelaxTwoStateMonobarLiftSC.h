#ifndef LIFT_RELAX_TWO_STATE_MONOBARLIFT_SC_H
#define LIFT_RELAX_TWO_STATE_MONOBARLIFT_SC_H
#include "../MonobarLiftSC.h"
#include "../../Subsystems/MonobarLiftStates/MonobarLiftMoveToPosition.h"
#include "../../Subsystems/MonobarLiftStates/MonobarLiftReturnToRestingZero.h"
class LiftRelaxTwoStateMonobarLiftSC : public MonobarLiftSC
{
public:
  LiftRelaxTwoStateMonobarLiftSC(void);
  LiftRelaxTwoStateMonobarLiftSC(pros::Motor*, pros::Motor*, int, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~LiftRelaxTwoStateMonobarLiftSC(void);

  void obey(pros::Controller);
private:
  MonobarLiftMoveToPosition * moveToPosition;
  MonobarLiftReturnToRestingZero * returnToRestingZero;
  pros::controller_digital_e_t state1Command;
  pros::controller_digital_e_t state2Command;
};
#endif
