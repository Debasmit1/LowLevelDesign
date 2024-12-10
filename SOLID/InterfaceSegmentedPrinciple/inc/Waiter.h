#ifndef WAITER_H
#define WAITER_H

// #include "RestaurantEmployee.h"
// #include <iostream>

// class Waiter : public RestaurantEmployee{
//     public:
//         void washDishes(){
//             //not related to him
//         }

//         void serveCustomers(){
//             std::cout<<"Serving the customers"<<std::endl;
//         }

//         void cookFood(){
//             //not related to him
//         }
// };

#include "WaiterInterface.h"

class Waiter : public WaiterInterface{
    public:
        void serveCustomers();
        void takeOrder();
};

#endif