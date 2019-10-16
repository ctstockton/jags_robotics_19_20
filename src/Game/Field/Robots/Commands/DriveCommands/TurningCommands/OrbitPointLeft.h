#ifndef DRIVECOMMANDS_TURNINGCOMMANDS_ORBITPOINTLEFT_H
#define DRIVECOMMANDS_TURNINGCOMMANDS_ORBITPOINTLEFT_H
#include "main.h"
#include "../../CommandUtil/CommandTarget.h"
#include "../DriveCommand.h"

class OrbitPointLeft : public DriveCommand
{
public:
  OrbitPointLeft(void);
  OrbitPointLeft(CommandTarget, int);
  ~OrbitPointLeft(void);

  void execute(void);
};
#endif
