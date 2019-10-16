#ifndef DRIVECOMMANDS_TURNINGCOMMANDS_TURNLEFT_H
#define DRIVECOMMANDS_TURNINGCOMMANDS_TURNLEFT_H
#include "main.h"
#include "../../CommandUtil/CommandTarget.h"
#include "../DriveCommand.h"

class TurnLeft : public DriveCommand
{
public:
  TurnLeft(void);
  TurnLeft(CommandTarget, int);
  ~TurnLeft(void);

  void execute(void);
};
#endif
