/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "frc/WPILib.h"

using namespace frc;

#pragma once

class OI {
 public:
  OI();

  Joystick*getLeft(); //instantiating method getLeft() to be an object of the Joystick type
  Joystick*getRight(); //instantiating method getLeft() to be an object of the Joystick type




  private:
  Joystick*leftJoy; //instantiating leftJoy as an object of the Joystick type
  Joystick*rightJoy;//instiantiating rightJoy as an object of the Joystick type
};
