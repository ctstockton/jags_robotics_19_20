#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTPOSITION_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTPOSITION_H
#include "TrayLiftState.h"
class TrayLiftPosition : public TrayLiftState
{
public:
  TrayLiftPosition(void);
  virtual ~TrayLiftPosition(void);
protected:
  int speed;
};
#endif
