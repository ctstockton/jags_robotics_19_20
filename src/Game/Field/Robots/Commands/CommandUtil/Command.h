#ifndef ROBOTS_COMMANDS_COMMAND_H
#define ROBOTS_COMMANDS_COMMAND_H
#include "main.h"
#include "../../Robot.h"
class Command
{
public:
  Command(void);
  virtual ~Command(void);

  Robot * slave;
  int parameter1, parameter2;

  virtual void execute(void) = 0;
};
#endif
