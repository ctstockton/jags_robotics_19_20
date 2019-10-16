#ifndef DRIVECOMMANDS_TURNINGCOMMANDS_ORBITPOINTRIGHT_H
#define DRIVECOMMANDS_TURNINGCOMMANDS_ORBITPOINTRIGHT_H
#include "main.h"
#include "../../CommandUtil/CommandTarget.h"
#include "../DriveCommand.h"

class OrbitPointRight : public DriveCommand
{
public:
  OrbitPointRight(void);
  OrbitPointRight(CommandTarget, int);
  ~OrbitPointRight(void);

  void execute(void);
};
#endif
