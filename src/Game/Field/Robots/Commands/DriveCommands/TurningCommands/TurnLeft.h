#ifndef DRIVECOMMANDS_TURNINGCOMMANDS_TURNLEFT_H
#define DRIVECOMMANDS_TURNINGCOMMANDS_TURNLEFT_H
#include "main.h"
#include "../DriveCommand.h"

class TurnLeft : public DriveCommand
{
public:
  TurnLeft(void);
  TurnLeft(Robot*, int);
  ~TurnLeft(void);

  void execute(void);
};
#endif
