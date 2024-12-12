#include "Context.h"
#include <iostream>

Context::Context(std::unique_ptr<Strategy> &&strategy = {}) : strategy_(std::move(strategy)){}

void Context::set_strategy(std::unique_ptr<Strategy> &&strategy){
    strategy = std::move(strategy_);
}

void Context::doSomeBusinessLogic() const{
    if(strategy_){
        std::cout<<"Context: Sorting data using the strategy \n";
        std::string result = strategy_->doAlgorithm("aecfsd");
        std::cout<<result<<std::endl;
    }else{
        std::cout<<"Strategy isn't set\n";
    }
}

// Unique_branch
// un_mute
// info