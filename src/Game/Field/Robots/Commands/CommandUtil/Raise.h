#ifndef COMMANDS_COMMANDUTIL_RAISE_H
#define COMMANDS_COMMANDUTIL_RAISE_H
#include "main.h"
#include "CommandNode.h"
#include "CommandList.h"

#include "../../Robot.h"

class Raise : public CommandList
{
public:
  Raise(void);
  Raise(Robot*);
  ~Raise(void);

  void executeList(int*);
};
#endif
