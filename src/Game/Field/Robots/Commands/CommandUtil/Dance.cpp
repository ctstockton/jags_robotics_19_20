#include "main.h"
#include "Dance.h"

Dance::Dance(void):
head (0)
{}

Dance::Dance(CommandTarget bot):
head (0),
dancer (bot)
{}

Dance::~Dance(void)
{}

void Dance::startDance(void)
{
  CommandNode * current = head;
  while(current != 0){
    current->move->execute();
    current = current->nextMove;
  }
}

void Dance::addMove(CommandNode * node)
{
  if (head == 0){
    head = node;
  }
  else
     addAnotherMove(node, head);
}

void Dance::addAnotherMove(CommandNode * node, CommandNode * head)
{
  if(head->nextMove == 0)
    head->nextMove = node;
  else
    addAnotherMove(node, head->nextMove);
}

void Dance::driveBackward(int distance)
{
  Command * action = new DriveBackward(dancer, distance);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::driveForward(int distance)
{
  Command * action = new DriveForward(dancer, distance);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::orbitPointLeft(int distance)
{
  Command * action = new OrbitPointLeft(dancer, distance);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::orbitPointRight(int distance)
{
  Command * action = new OrbitPointRight(dancer, distance);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::turnLeft(int degrees)
{
  Command * action = new TurnLeft(dancer, degrees);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::turnRight(int degrees)
{
  Command * action = new TurnRight(dancer, degrees);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}
