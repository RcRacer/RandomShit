// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "CannonSub.h"
#include "../RobotMap.h"
#include "../Robot.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

CannonSub::CannonSub() : Subsystem("CannonSub") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    left = RobotMap::cannonSubLeft;
    middle = RobotMap::cannonSubMiddle;
    right = RobotMap::cannonSubRight;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void CannonSub::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        //SetDefaultCommand(new Shoot());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void FireTheCannons() {
	if(Robot::oi->getLeft_Joystick()->GetRawButton(4))
	{
		RobotMap::cannonSubLeft->Set(true);
	}
	else if(Robot::oi->getLeft_Joystick()->GetRawButton(3))
	{
		RobotMap::cannonSubMiddle->Set(true);
	}
	else if(Robot::oi->getLeft_Joystick()->GetRawButton(5))
	{
		RobotMap::cannonSubRight->Set(true);
	}
	else if(Robot::oi->getLeft_Joystick()->GetRawButton(2))
	{
		RobotMap::cannonSubLeft->Set(false);
		RobotMap::cannonSubMiddle->Set(false);
		RobotMap::cannonSubRight->Set(false);
	}
}
