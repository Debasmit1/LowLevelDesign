#include "ClientCode.h"
#include <iostream>


void ClientCode(Component *component){
    std::cout<<component->Operation()<<std::endl;
}