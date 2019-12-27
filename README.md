# jags_robotics_19_20
/*************************************
ReadMe

Robot:
      An interface from which every concrete robot is created from.
  The robot interface contains three (3) subsystem pointers, one for each of the three
  required subsystems for a robot: a drive, an intake, and a lift. It also contains a
  pure virtual method "obey()", which is takes a pros::Controller parameter and is the
  main call for the entire robot to obey the parameter controller.

Subsystem:
      An interface from which all more specific subsystem interfaces inherit from.
  A subsystem interface contains a stateController pointer, as well as two (2) pure
  virtual methods, "obey()" and "executeCommand()". The obey() method of a concrete
  subsystem is called directly from the robot which it is a part of. The executeCommand()
  method is called by the subsystem type-specific Command structure. All subsystems have
  some manner of component pieces, whether these be motors or groups of motors
  constructed into their own objects. The two commands also differ in which parts of the
  subsystem they pass control to. The obey() method passes the pros::Controller to the
  StateController while the executeCommand() method passes the commands to be followed
  directly to the subsystems component pieces, if they have them, or directly control
  their component motors if they do not.

StateController:
      All subsystems have a StateController pointer which is initialized to whichever
  concrete subsystem-specific StateController the subsystem needs so it can perform
  all necessary tasks the robot needs it to do. The StateController creates and manages
  the States a robot will progress through as directed by the inputs of the PROS controller.
  Which States a particular StateController has varies depending on the StateController, as does
  progression from one State to another. Although a newly created StateController is grafted
  into a subsystem, it is not created by the subsystem directly.

Types of Subsystems:
  Drives:
    TankDrive:
      A tankdrive is a drive system that contains two (2) drive tracks on either side
    of the robot, each of which is controlled by one of the two thumbsticks on the
    standard PROS controller. The obey() and executeCommand() methods of this subsystem instructs the two
    component drive tracks to obey or to execute a specific command, respectively.      
*************************************/
