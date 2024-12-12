#include "ConcreteStrategyA.h"
#include <algorithm>

std::string ConcreteStrategyA::doAlgorithm(std::string_view data) const{
    std::string result(data);
    std::sort(data.begin(),data.end());

    return result;
}
