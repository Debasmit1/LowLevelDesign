#ifndef IOBSERVOR_H
#define IOBSERVOR_H

#include <string>

class IObservor{
    public:
        virtual ~IObservor() = default;
        virtual void Update(const std::string &message_from_subject) = 0;
};

#endif