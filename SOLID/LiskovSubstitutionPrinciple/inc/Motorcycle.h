#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Bike.h"

class MotorCycle : public Bike{
    private:
        bool isEngineOn;
        int speed;
    public:
        void turnOnEngine();
        void accelerate();
};

#endif