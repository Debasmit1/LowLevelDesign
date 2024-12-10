#ifndef CAR_H
#define CAR_H

#include "EngineVehicle.h"

class Car : public EngineVehicle{
    public:
        int getNumberOfWheels();
        int EnginePower();
};

#endif