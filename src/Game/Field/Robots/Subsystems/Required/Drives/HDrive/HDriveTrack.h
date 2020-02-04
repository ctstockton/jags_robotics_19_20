#ifndef H_DRIVE_TRACK_H
#define H_DRIVE_TRACK_H
#include "main.h"
#include "../DriveUtil/DriveTrack.h"

class HDriveTrack : public DriveTrack
{
  public:
    HDriveTrack(void);
    virtual ~HDriveTrack(void);

    virtual void strafeLeft(int) = 0;
    virtual void strafeRight(int) = 0;
};
#endif
