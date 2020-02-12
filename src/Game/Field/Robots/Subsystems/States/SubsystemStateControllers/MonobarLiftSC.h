#ifndef MONOBARLIFT_SC_H
#define MONOBARLIFT_SC_H
#include "AbstractControllers/LiftStateController.h"
class MonobarLiftSC : public LiftStateController
{
public:
  MonobarLiftSC(void);
  virtual ~MonobarLiftSC(void);
private:
  int i;
};
#endif
