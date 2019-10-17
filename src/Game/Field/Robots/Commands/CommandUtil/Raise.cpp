#include "main.h"
#include "Raise.h"

Raise::Raise(void)
{
  this->head = 0;
}

Raise::Raise(Robot * bot)
{
  this->head = 0;
  this->actor = bot;
}

Raise::~Raise(void)
{}
