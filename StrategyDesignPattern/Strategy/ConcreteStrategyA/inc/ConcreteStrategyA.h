#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H

#include "Strategy.h"

class ConcreteStrategyA : public Strategy{
    public:
        std::string doAlgorithm(std::string_view data) const override;
};

#endif