/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <iostream>
#include "subsystems/DriveTrain.h"
#include "commands/TankDrive.h"


DriveTrain::DriveTrain() : Subsystem("ExampleSubsystem"), 
left(new TalonSRX(2)), 
right(new TalonSRX(3)) {}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  SetDefaultCommand(new TankDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::tankDrive(double leftInput, double rightInput){
  double leftPower = leftInput;
  double rightPower = rightInput;
  //left->Set(ControlMode::PercentOutput, -leftPower);
  //right->Set(ControlMode::PercentOutput, rightPower);
  left->Set(ControlMode::PercentOutput, -leftInput);
  right->Set(ControlMode::PercentOutput, rightInput);

// std.endl<<leftPower<<
// std.endl<<rightPower<<
}