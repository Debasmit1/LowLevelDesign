#ifndef OBSERVOR_H
#define OBSERVOR_H

#include "IObservor.h"
#include <Subject.h>
#include <string>

class Observor : public IObservor{
    private:
        std::string message_from_subject;
        Subject &subject_;
        static int static_number_;
        int number_;
    public:
        Observor(Subject &subject);
        virtual ~Observor();
        void Update(const std::string &message_from_subject)override;
        void RemoveFromTheList();
        void PrintInfo();
};

#endif