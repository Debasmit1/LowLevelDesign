#ifndef MACBOOK_H
#define MACBOOK_H

#include "Keyboard.h"
#include "Mouse.h"

class MacBook{
    private:
        Keyboard *keyboard;
        Mouse *mouse;
    public:
        MacBook(Keyboard *keyboard,Mouse *mouse);
};

#endif