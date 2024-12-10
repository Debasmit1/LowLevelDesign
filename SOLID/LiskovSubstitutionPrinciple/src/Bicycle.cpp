#include "Bicycle.h"
#include <stdexcept>

void Bicycle::turnOnEngine(){
    throw runtime_error("No engine in bicycle");
}

void accelerate(){
    // do something
}

// turnOnEngine is breaking the behavior of the interface