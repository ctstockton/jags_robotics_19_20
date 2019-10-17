#ifndef COMMANDS_COMMANDUTIL_COMMANDLIST_H
#define COMMANDS_COMMANDUTIL_COMMANDLIST_H
#include "main.h"
#include "../../Robot.h"
#include "CommandNode.h"

class CommandList
{
public:
  CommandList(void);
  virtual ~CommandList(void);

  void executeList(void);

protected:
  Robot * actor;
  CommandNode * head;

  void addMove(CommandNode*);
  void addAnotherMove(CommandNode * node, CommandNode*);

};
#endif
