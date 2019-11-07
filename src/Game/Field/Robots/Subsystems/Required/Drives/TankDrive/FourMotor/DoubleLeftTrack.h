#ifndef TANKDRIVE_FOURMOTOR_DOUBLELEFTTRACK_H
#define TANKDRIVE_FOURMOTOR_DOUBLELEFTTRACK_H
#include "main.h"
#include "../LeftDriveTrack.h"

class DoubleLeftTrack : public LeftDriveTrack
{
  public:
    DoubleLeftTrack(void);
    DoubleLeftTrack(int L1, int L2, pros::motor_gearset_e gear);
    ~DoubleLeftTrack(void);

    void obey(pros::Controller);
    void turnRight(int);
    void turnLeft(int);
    void driveForward(int);
    void driveBackward(int);
    void orbitPointRight(int);
    void orbitPointLeft(int);

    void tarePosition(void);
    bool positionReached(int);

  protected:
    pros::Motor * leftMotor1;
    pros::Motor * leftMotor2;
};
#endif
