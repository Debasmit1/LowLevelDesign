#include "ISubject.h"
#include "IObservor.h"
#include <string>
#include <list>

class Subject : public ISubject{
    private:
        std::list<IObservor *> list_observer_;
        std::string message_;
    public:
        ~Subject();
        void Attach(IObservor *observer) override;
        void Detach(IObservor *observer) override;
        void Notify() override;
        void CreateMessage(std::string message="Empty");
        void HowManyObserver();
        void SomeBusinessLogic();
};