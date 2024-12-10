#ifndef WAITERINTERFACE_H
#define WAITERINTERFACE_H

class WaiterInterface{
    public:
        virtual void serveCustomers() = 0;
        virtual void takeOrder() = 0;
};

#endif