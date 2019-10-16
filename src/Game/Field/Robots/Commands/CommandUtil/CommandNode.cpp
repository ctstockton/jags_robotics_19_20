#include "CommandNode.h"
#include "main.h"

CommandNode::CommandNode(void)
{}

CommandNode::CommandNode(Command * newMove):
move (newMove)
{}

CommandNode::~CommandNode(void)
{}
