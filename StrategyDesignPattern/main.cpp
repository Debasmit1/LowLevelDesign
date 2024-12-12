#include <iostream>
#include "Context.h"
#include "Strategy.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

void clientCode(){
    Context context(std::make_unique<ConcreteStrategyA>());
    std::cout<<"Client: Strategy is set to normal sorting.\n";
    context.doSomeBusinessLogic();
    std::cout << "Client: Strategy is set to reverse sorting.\n";
    context.set_strategy(std::make_unique<ConcreteStrategyB>());
    context.doSomeBusinessLogic();
}

int main(){
    clientCode();
    return 0;
}

