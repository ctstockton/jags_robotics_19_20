#ifndef DRIVECOMMANDS_LINEARCOMMANDS_DRIVEBACKWARD_H
#define DRIVECOMMANDS_LINEARCOMMANDS_DRIVEBACKWARD_H
#include "../DriveCommand.h"
#include "../../CommandUtil/CommandTarget.h"
#include "main.h"

class DriveBackward : public DriveCommand
{
public:
  DriveBackward(void);
  DriveBackward(CommandTarget, int);
  ~DriveBackward(void);

  void execute(void);
};
#endif
