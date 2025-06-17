#pragma once
#include <iostream>

#include "main.h"

// i kinda understand header files

// haha custom namespace because i can
namespace intake {
    pros::Motor intakeFront;
    pros::Motor intakeBack;

    /* 
        i would include the intake motor map but 
        i dont see a need to reference it outside of this file and the cpp file 
    */

    void spinIntake(std::string name, int speed);
    void intakeControl();
} 