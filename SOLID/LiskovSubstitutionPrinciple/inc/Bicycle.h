#ifndef BICYCLE_H
#define BICYCLE_H

#include "Bike.h"

class Bike
{
public:
    virtual void turnOnEngine() = 0;
    virtual void accelerate() = 0;
};

class Bicycle : public Bike{
    public:
        void turnOnEngine(){
            
        }
        void accelerate(){

        }
};

#endif