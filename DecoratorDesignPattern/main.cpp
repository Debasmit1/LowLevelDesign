#include "ClientCode.h"
#include "Component.h"
#include "Decorator.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"
#include "ConcreteComponent.h"
#include <iostream>

int main(){
    Component *simple = new ConcreteComponent;
    std::cout<<"Client I have got a simple component: \n";

    ClientCode(simple);
    std::cout<<"\n\n";

    Component *decorator1 = new ConcreteDecoratorA(simple);
    Component *decorator2 = new ConcreteDecoratorB(decorator1);

    std::cout<<"Client, Now I have got a decorated component"<<std::endl;
    ClientCode(decorator2);

    delete decorator2;
    delete decorator1;
    delete simple;


    return 0;
}