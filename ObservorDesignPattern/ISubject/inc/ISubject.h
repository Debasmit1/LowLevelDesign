#ifndef ISUBJECT_H
#define ISUBJECT_H

#include "IObservor.h"

class ISubject{
    public:
        virtual ~ISubject() = default;
        virtual void Attach(IObservor *observor) = 0;
        virtual void Detach(IObservor *observor) = 0;
        virtual void Notify() = 0;
};

#endif