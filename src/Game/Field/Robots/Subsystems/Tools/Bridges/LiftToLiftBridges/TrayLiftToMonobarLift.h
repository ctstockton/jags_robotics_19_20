#ifndef BRIDGES_LIFTTOLIFTBRIDGES_TRAYLIFTTOMONOBARLIFT_H
#define BRIDGES_LIFTTOLIFTBRIDGES_TRAYLIFTTOMONOBARLIFT_H
#include "LiftToLiftBridge.h"
#include "../../../Required/Lifts/TrayLift/TrayLift.h"
#include "../../../Required/Lifts/MonobarLift/MonobarLift.h"
class TrayLiftToTwoMotorMonobar : public LiftToLiftBridge
{
public:
  TrayLiftToMonobar(void);
  ~TrayLiftToMonobar(void);

  void setTrayLift(TrayLift);
  void setMonobarLift(MonobarLift);
private:
  TrayLift * tray;
  MonobarLift * mono;

};
#endif
