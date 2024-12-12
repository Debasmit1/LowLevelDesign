#ifndef STRATEGY_H
#define STRATEGY_H

#include <string>

class Strategy{
    public:
     virtual ~Strategy() = default;
     virtual std::string doAlgorithm(std::string_view data) const = 0;
};

#endif

// Why do we need default