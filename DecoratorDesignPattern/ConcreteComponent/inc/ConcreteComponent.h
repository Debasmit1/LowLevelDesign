#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component{
    public:
        std::string Operation() const override;
};

#endif