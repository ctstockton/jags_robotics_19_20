#ifndef TANKDRIVE_SIXMOTOR_TRIPLELEFTTRACK_H
#define TANKDRIVE_SIXMOTOR_TRIPLELEFTTRACK_H
#include "main.h"
#include "../LeftDriveTrack.h"

class TripleLeftTrack : public LeftDriveTrack
{
  public:
    TripleLeftTrack(void);
    TripleLeftTrack(int L1, int L2, int L3, pros::motor_gearset_e gear);
    ~TripleLeftTrack(void);

    void obey(pros::Controller);
    void turnRight(int);
    void turnLeft(int);
    void driveForward(int);
    void driveBackward(int);
    void orbitPointRight(int);
    void orbitPointLeft(int);

  protected:
    pros::Motor * leftMotor1;
    pros::Motor * leftMotor2;
    pros::Motor * leftMotor3;
};
#endif
