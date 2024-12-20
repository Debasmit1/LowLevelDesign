#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H

#include "Decorator.h"
#include <string>

class ConcreteDecoratorA : public Decorator{
    public:
        ConcreteDecoratorA(Component *component);
        std::string Operation() const override;
};

#endif