#ifndef COMMANDS_DRIVECOMMANDS_DRIVECOMMAND_H
#define COMMANDS_DRIVECOMMANDS_DRIVECOMMAND_H
#include "main.h"
#include "../CommandUtil/Command.h"

class DriveCommand : public Command
{
public:
  DriveCommand(void);
  virtual ~DriveCommand(void);
};
#endif
