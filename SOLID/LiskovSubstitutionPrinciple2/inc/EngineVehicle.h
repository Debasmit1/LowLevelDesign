#ifndef ENGINEVEHICLE_H
#define ENGINEVEHICLE_H

#include "Vehicle.h"

class EngineVehicle : public Vehicle{
    public:
        virtual int EnginePower() = 0;
};

#endif