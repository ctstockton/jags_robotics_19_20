#ifndef DRIVECOMMANDS_TURNINGCOMMANDS_TURNRIGHT_H
#define DRIVECOMMANDS_TURNINGCOMMANDS_TURNRIGHT_H
#include "main.h"
#include "../DriveCommand.h"

class TurnRight : public DriveCommand
{
public:
  TurnRight(void);
  TurnRight(Robot*, int);
  ~TurnRight(void);

  void execute(void);
};
#endif
