#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "EngineVehicle.h"

class MotorCycle : public EngineVehicle{
    public:
        int getNumberOfWheels();
        int EnginePower();
};
#endif