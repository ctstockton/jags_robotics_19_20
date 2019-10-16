#ifndef ROBOTS_COMMANDS_COMMANDTARGET_H
#define ROBOTS_COMMANDS_COMMANDTARGET_H
#include "main.h"
class Robot;

class CommandTarget
{
public:
  CommandTarget(void);
  ~CommandTarget(void);

  Robot * target;
};
#endif
