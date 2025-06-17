#include <map>
#include "main.h"

// init intake half motors

pros::Motor intakeFront (1);
pros::Motor intakeBack (2);

std::map<std::string, pros::Motor*> intakeMotors = { // gives motor instances names for easy access
    {"front", &intakeFront},
    {"back", &intakeBack}
};

void spinIntake(std::string name, int speed) // gets "name" from the motor map then spins at given speed
{
    if (intakeMotors.find(name) != intakeMotors.end()) { // attempt to find the motor by name
        intakeMotors[name] -> move(speed); // call motor class move function from the returned pointer from the map

    } else {
        std::cout << "Intake motor " << name << " not found!" << std::endl; // motor cannot be found by name within the map

    }
}

void intakeControl() { // awaiting controls from luke

}