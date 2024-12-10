#ifndef CHEFINTERFACE_H
#define CHEFINTERFACE_H

class ChefInterface
{
public:
    virtual void cookFood() = 0;
    virtual void decideMenu() = 0;
};

#endif