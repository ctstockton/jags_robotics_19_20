#ifndef COMMAND_COMMANDUTIL_COMMANDNODE_H
#define COMMAND_COMMANDUTIL_COMMANDNODE_H
#include "main.h"
#include "Command.h"

class CommandNode
{
public:
  CommandNode(void);
  CommandNode(Command*);
  virtual ~CommandNode(void);

  Command * move;

  CommandNode * nextMove;
};
#endif
