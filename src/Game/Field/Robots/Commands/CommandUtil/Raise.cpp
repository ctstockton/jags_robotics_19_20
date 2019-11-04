#include "main.h"
#include "Raise.h"

Raise::Raise(void)
{}

Raise::Raise(Robot * bot):
CommandList()
{
  this->actor = bot;
}

Raise::~Raise(void)
{}
