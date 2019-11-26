#include "SideRollingIntakeState.h"

SideRollingIntakeState::SideRollingIntakeState(void)
{}

SideRollingIntakeState::~SideRollingIntakeState(void)
{}

void SideRollingIntakeState::setIntakeTracks(SideRollingIntakeTrack* left, SideRollingIntakeTrack* right)
{
  leftIntakeTrack = left;
  rightIntakeTrack = right;
}
