#include "main.h"
#define INTAKE_PORT 1
#define OPTICAL_PORT 15

pros::Motor intake(INTAKE_PORT);
pros::Optical optical(OPTICAL_PORT);    

void intakeSpin(int speed){
    intake.move(speed); // intake = 127
}

void intakeControl() {
    if (pros::Controller(pros::E_CONTROLLER_MASTER).get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
        intakeSpin(127); // Spin intake forward
    } else if (pros::Controller(pros::E_CONTROLLER_MASTER).get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
        intakeSpin(-127); // Spin intake backward
    } else {
        intakeSpin(0); // Stop intake
    }
    // >130 is red, <250 is blue
    if (optical.get_hue() > 330 || optical.get_hue() < 25) {
        intakeSpin(127);
        pros::delay(50);
        intakeSpin(-127); // Stop intake if a specific color is detected
    }
}
