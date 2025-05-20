#include "main.h"

int8_t port = 8;

pros::Motor intake(port, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);

void intakeSpin(int speed){
    intake.move(127); // intake = 127
}

void intakeControl()
{
    if (master.get_digital(DIGITAL_R1))
    {
        intake.move(127); // intake = 127
    }
    else if (master.get_digital(DIGITAL_R2))
    {
        intake.move(-127); // intake = -127
    }
    else
    {
        intake.move(0); // intake = 0
    }
}