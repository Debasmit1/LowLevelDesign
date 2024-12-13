#include "Subject.h"
#include "Observor.h"

void ClientCode(){
    Subject *subject = new Subject;
    Observor *observor1 = new Observor(*subject);
    Observor *observor2 = new Observor(*subject);
    Observor *observor3 = new Observor(*subject);
    Observor *observor4;
    Observor *observor5;

    subject->CreateMessage("Hello World :D");
    observor3->RemoveFromTheList();

    subject->CreateMessage("The weather is hot today! :p");
    observor4 = new Observor(*subject);

    observor2->RemoveFromTheList();
    observor5 = new Observor(*subject);

    subject->CreateMessage("My new car is great! ;)");
    observor5->RemoveFromTheList();

    observor4->RemoveFromTheList();
    observor1->RemoveFromTheList();

    delete observor1;
    delete observor2;
    delete observor3;
    delete observor4;
    delete observor5;

    delete subject;
}

int main(){
    ClientCode();
    return 0;
}