#include "main.h"
#include "CommandList.h"

CommandList::CommandList(void):
head (0),
actor (0)
{}

CommandList::~CommandList(void)
{}

void CommandList::addMove(CommandNode * node)
{
  if (head == 0){
    head = node;
  }
  else
     addAnotherMove(node, head);
}

void CommandList::addAnotherMove(CommandNode * node, CommandNode * head)
{
  if(head->nextMove == 0)
    head->nextMove = node;
  else
    addAnotherMove(node, head->nextMove);
}

void CommandList::executeList(void)
{
  CommandNode * current = head;
  while(current != 0){
    current->move->execute();
    current = current->nextMove;
  }
}
