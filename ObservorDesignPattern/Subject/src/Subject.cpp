#include "Subject.h"
#include <iostream>


Subject::~Subject(){
    std::cout<<"Goodbye, I was the subject"<<std::endl;
}

void Subject::Attach(IObservor *observer){
    list_observer_.push_back(observer);
}

void Subject::Detach(IObservor *observer){
    list_observer_.remove(observer);
}

void Subject::Notify(){
    std::list<IObservor*>::iterator iterator = list_observer_.begin();
    HowManyObserver();
    while(iterator != list_observer_.end()){
        (*iterator)->Update(message_);
        ++iterator;
    }
}

void Subject::CreateMessage(std::string message="Empty"){
    this->message_ = message;
    Notify();
}

void Subject::HowManyObserver(){
    std::cout<<"There are "<<list_observer_.size()<<" observors in the list "<<std::endl;
}

void Subject::SomeBusinessLogic(){
    this->message_ = "change message message";
    Notify();
    std::cout<<"I am about to do something important\n";
}