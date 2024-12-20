#include "Decorator.h"

Decorator::Decorator(Component *component): component_(component){}

std::string Decorator::Operation() const {
    return this->component_->Operation();
}