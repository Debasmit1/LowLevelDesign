#include "Observor.h"
#include <iostream>

 Observor::Observor(Subject &subject): subject_(subject){
    this->subject_.Attach(this);
    std::cout<<"Hi, I am the Observor \""<<++Observor::static_number_<<"\".\n";
    this->number_ = Observor::static_number_;
 }

 Observor::~Observor(){
    std::cout<<"Goodbye, I was the observor \""<<this->number_<<"\".";
 }

 void Observor::Update(const std::string &message_from_subject){
    this->message_from_subject = message_from_subject;
    PrintInfo();
 }

 void Observor::RemoveFromTheList(){
    subject_.Detach(this);
    std::cout<<"Observor \""<<number_<<"\" removed from the list.\n";
 }

 void Observor::PrintInfo(){
    std::cout<<"Observor \""<<this->number_<<"\": a new message is available\n";
 }

 int Observor::static_number_ = 0;