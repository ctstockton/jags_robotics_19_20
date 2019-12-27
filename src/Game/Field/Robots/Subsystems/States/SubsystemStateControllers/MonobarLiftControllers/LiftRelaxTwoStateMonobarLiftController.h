#ifndef LIFT_RELAX_TWO_STATE_MONOBARLIFT_CONSTROLLER_H
#define LIFT_RELAX_TWO_STATE_MONOBARLIFT_CONSTROLLER_H
#include "../MonobarLiftController.h"
#include "../../Subsystems/MonobarLiftStates/MonobarLiftMoveToPosition.h"
#include "../../Subsystems/MonobarLiftStates/MonobarLiftReturnToRestingZero.h"
class LiftRelaxTwoStateMonobarLiftController : public MonobarLiftController
{
public:
  LiftRelaxTwoStateMonobarLiftController(void);
  LiftRelaxTwoStateMonobarLiftController(pros::Motor*, pros::Motor*, int, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~LiftRelaxTwoStateMonobarLiftController(void);

  void obey(pros::Controller);
private:
  MonobarLiftMoveToPosition * moveToPosition;
  MonobarLiftReturnToRestingZero * returnToRestingZero;
  pros::controller_digital_e_t state1Command;
  pros::controller_digital_e_t state2Command;
};
#endif
