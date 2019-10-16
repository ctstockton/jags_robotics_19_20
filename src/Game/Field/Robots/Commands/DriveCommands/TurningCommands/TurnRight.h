#ifndef DRIVECOMMANDS_TURNINGCOMMANDS_TURNRIGHT_H
#define DRIVECOMMANDS_TURNINGCOMMANDS_TURNRIGHT_H
#include "main.h"
#include "../../CommandUtil/CommandTarget.h"
#include "../DriveCommand.h"

class TurnRight : public DriveCommand
{
public:
  TurnRight(void);
  TurnRight(CommandTarget, int);
  ~TurnRight(void);

  void execute(void);
};
#endif
