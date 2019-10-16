#ifndef TANKDRIVE_SIXMOTOR_TRIPLELEFTTRACK_H
#define TANKDRIVE_SIXMOTOR_TRIPLELEFTTRACK_H
#include "main.h"
#include "../LeftDriveTrack.h"

class TripleLeftTrack : public LeftDriveTrack
{
  public:
    TripleLeftTrack(void);
    TripleLeftTrack(int L1, int L2, int L3);
    ~TripleLeftTrack(void);

    void obey(pros::Controller);
    void driveForward(void);
    void turnAroundRight(void);

  protected:
    pros::Motor * leftMotor1;
    pros::Motor * leftMotor2;
    pros::Motor * leftMotor3;
};
#endif
