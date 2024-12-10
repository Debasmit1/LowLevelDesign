#include "Motorcycle.h"
#include "iostream"

void MotorCycle::turnOnEngine(){
    isEngineOn = true;
}

void MotorCycle::accelerate(){
    speed = speed * 10;
}