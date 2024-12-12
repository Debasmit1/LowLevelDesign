#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H

#include "Strategy.h"

class ConcreteStrategyB : public Strategy{
    public:
        std::string doAlgorithm(std::string_view data) const override;
};

#endif