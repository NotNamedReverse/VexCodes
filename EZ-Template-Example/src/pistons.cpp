#include "main.h"

ez::Piston backClamp (3, false);

void setClamp(bool state){
    backClamp.set(state);
}