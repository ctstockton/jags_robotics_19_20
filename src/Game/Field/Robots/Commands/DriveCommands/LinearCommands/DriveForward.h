#ifndef DRIVECOMMANDS_LINEARCOMMANDS_DRIVEFORWARD_H
#define DRIVECOMMANDS_LINEARCOMMANDS_DRIVEFORWARD_H
#include "../DriveCommand.h"
#include "main.h"

class DriveForward : public DriveCommand
{
public:
  DriveForward(void);
  DriveForward(Robot*, int);
  ~DriveForward(void);

  void execute(void);
};
#endif
