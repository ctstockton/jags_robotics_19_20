#ifndef TOOLS_BRIDGES_TWOLANEINTEGERBRIDGE_H
#define TOOLS_BRIDGES_TWOLANEINTEGERBRIDGE_H
#include "Bridge.h"
#include "../../States/State.h"
#include "Lanes/IntegerBridgeLane.h"
class TwoLaneIntegerBridge : public Bridge
{
public:
  TwoLaneIntegerBridge(void);
  TwoLaneIntegerBridge(State*, State*);
  ~TwoLaneIntegerBridge(void);

private:
  IntegerBridgeLane lane1;
  IntegerBridgeLane lane2;
};
#endif
