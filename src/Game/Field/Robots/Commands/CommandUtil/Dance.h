#ifndef COMMANDS_COMMANDUTIL_DANCE_H
#define COMMANDS_COMMANDUTIL_DANCE_H
/*This is both the tree for the individual robot commands as well as the
builder of those commands, when they are called in the main function*/
#include "main.h"
#include "CommandNode.h"

#include "../DriveCommands/LinearCommands/DriveBackward.h"
#include "../DriveCommands/LinearCommands/DriveForward.h"
#include "../DriveCommands/TurningCommands/OrbitPointLeft.h"
#include "../DriveCommands/TurningCommands/OrbitPointRight.h"
#include "../DriveCommands/TurningCommands/TurnLeft.h"
#include "../DriveCommands/TurningCommands/TurnRight.h"

class Dance
{
public:
  Dance(void);
  Dance(CommandTarget);
  ~Dance(void);

  CommandTarget dancer;
  CommandNode * head;

  void driveBackward(int);
  void driveForward(int);
  void orbitPointLeft(int);
  void orbitPointRight(int);
  void turnLeft(int);
  void turnRight(int);

  void startDance(void);
  void addMove(CommandNode*);
  void addAnotherMove(CommandNode*, CommandNode*);
};
#endif
