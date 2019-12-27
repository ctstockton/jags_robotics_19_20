#ifndef DRIVE_CONTROLLER_H
#define DRIVE_CONTROLLER_H
#include "../../StateController.h"
class DriveController : public StateController
{
public:
  DriveController(void);
  virtual ~DriveController(void);
};
#endif
