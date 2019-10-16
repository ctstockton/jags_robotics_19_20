#ifndef DRIVECOMMANDS_TURNINGCOMMANDS_ORBITPOINTLEFT_H
#define DRIVECOMMANDS_TURNINGCOMMANDS_ORBITPOINTLEFT_H
#include "main.h"
#include "../DriveCommand.h"

class OrbitPointLeft : public DriveCommand
{
public:
  OrbitPointLeft(void);
  OrbitPointLeft(Robot*, int);
  ~OrbitPointLeft(void);

  void execute(void);
};
#endif
