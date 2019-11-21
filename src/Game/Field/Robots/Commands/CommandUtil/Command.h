/*-This is the interface for the rest of the command objects
  -When a command method is called in the Dance commandList, a Command
  - object is created and is applied to the move attribute of the
  - simultaneously created CommandNode wrapper
*/
#ifndef ROBOTS_COMMANDS_COMMAND_H
#define ROBOTS_COMMANDS_COMMAND_H
#include "main.h"
#include "../../Robot.h"
class Command
{
public:
  Command(void);
  virtual ~Command(void);

  //The execute method calls the object specific method and provides the
  //  object specific int pointer 'parameters' to the Robot pointer 'slave'
  virtual void execute(void) = 0;
protected:
  //The slave and parameters attributes are initialized in the object specific
  //  overloaded constructor
  Robot * slave;
  int * parameters;
};
#endif
