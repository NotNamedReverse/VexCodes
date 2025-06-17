#include "main.h"
#define INTAKE_PORT 4

pros::Motor intake(INTAKE_PORT);

void intakeSpin(int speed){
    intake.move(speed); // intake = 127
}
