#include "CommandNode.h"
#include "main.h"

CommandNode::CommandNode(void):
move (0),
nextMove (0)
{}

CommandNode::CommandNode(Command * newMove):
move (newMove),
nextMove (0)
{}

CommandNode::~CommandNode(void)
{}
