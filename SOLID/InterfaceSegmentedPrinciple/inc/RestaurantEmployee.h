#ifndef RESTAURANTEMPLOYEE_H
#define RESTAURANTEMPLOYEE_H

class RestaurantEmployee{
    public:
        virtual void washDishes() = 0;
        virtual void serveCustomers() = 0;
        virtual void cookFood() = 0;
};

#endif