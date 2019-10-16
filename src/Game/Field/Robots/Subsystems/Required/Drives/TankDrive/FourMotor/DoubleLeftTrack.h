#ifndef TANKDRIVE_FOURMOTOR_DOUBLELEFTTRACK_H
#define TANKDRIVE_FOURMOTOR_DOUBLELEFTTRACK_H
#include "main.h"
#include "../LeftDriveTrack.h"

class DoubleLeftTrack : public LeftDriveTrack
{
  public:
    DoubleLeftTrack(void);
    DoubleLeftTrack(int L1, int L2);
    ~DoubleLeftTrack(void);

    void obey(pros::Controller);
    void turnAroundRight(void);
    void driveForward(void);

  protected:
    pros::Motor * leftMotor1;
    pros::Motor * leftMotor2;
};
#endif
