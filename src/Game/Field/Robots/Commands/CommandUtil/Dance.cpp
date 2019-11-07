#include "main.h"
#include "Dance.h"

Dance::Dance(void)
{}

Dance::Dance(Robot * bot):
CommandList()
{
  this->actor = bot;
  std::cout << "dance is created\n";
}

Dance::~Dance(void)
{}

void Dance::executeList(void)
{
  CommandNode * current = this->head;
  std::cout << "dance list is executing\n";
  while(current != 0){
    current->move->execute();
    current = current->nextMove;
  }
}

void Dance::driveBackward(int distance)
{
  std::cout << "drivebackward command is being created\n";
  Command * action = new DriveBackward(this->actor, distance);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::driveForward(int distance)
{
  Command * action = new DriveForward(this->actor, distance);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::orbitPointLeft(int distance)
{
  Command * action = new OrbitPointLeft(this->actor, distance);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::orbitPointRight(int distance)
{
  Command * action = new OrbitPointRight(this->actor, distance);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::turnLeft(int degrees)
{
  Command * action = new TurnLeft(this->actor, degrees);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}

void Dance::turnRight(int degrees)
{
  Command * action = new TurnRight(this->actor, degrees);
  CommandNode * newMove = new CommandNode(action);
  addMove(newMove);
}
