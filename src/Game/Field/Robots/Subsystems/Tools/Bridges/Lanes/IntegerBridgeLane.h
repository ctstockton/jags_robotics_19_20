#ifndef TOOLS_BRIDGES_INTEGERBRIDGELANE_H
#define TOOLS_BRIDGES_INTEGERBRIDGELANE_H
#include "../Bridge.h"
#include "../../../States/State.h"
class IntegerBridgeLane : public Bridge
{
public:
  IntegerBridgeLane(void);
  ~IntegerBridgeLane(void);

  void setPackage(int);
  int getPackage(void);
private:
  int package1;
  int package2;
};
#endif
