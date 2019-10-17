#include "main.h"

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Hello PROS User!");

	pros::lcd::register_btn1_cb(on_center_button);
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
 #include "Game/Field/Robots/RobotBuilds/Ellie19.h"
 #include "Game/Field/Robots/RobotBuilds/Bigboy.h"
 #include "Game/Field/Robots/Commands/CommandUtil/CommandTarget.h"
 //#include "Game/Field/Robots/Commands/DriveCommands/LinearCommands/DriveForward.h"
 #include "Game/Field/Robots/Commands/CommandUtil/Dance.h"
 #include "Game/Field/Robots/Commands/CommandUtil/Raise.h"
 #include "Game/Field/Robots/Robot.h"

 void opcontrol() {
 	//create controller
 	pros::Controller master (CONTROLLER_MASTER);

	Robot * Bigboy = new class Bigboy();
	CommandList * routine = new Dance(Bigboy);
	CommandList * set = new Raise(Bigboy);
 	Bigboy->obey(master);

 	//create the instance of the new robot
 	//Robot * Ellie = new Ellie19();
 	//create the command target that all commands in the dance will command
 	//CommandTarget Ellie;
 	//set the command target to the newly created robot
 	//Ellie.target = newBot;
 	//create the tree that all commands will be place
 	//CommandList * routine = new Dance(Ellie);
	//CommandList * set = new Raise(Ellie);

 	//add a move to the end of the routine
 	//routine->driveForward(10);

 	//execute the routine
 	//routine->startDance();

 	//after routine has finished, command the robot to obey the controller
 	//Ellie->obey(master);
}
