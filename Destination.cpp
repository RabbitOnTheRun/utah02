/* 
 * File:   Destination.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 0:24
 */

#include "Destination.h"

namespace utah {

    Destination::Destination() {

    }

    Destination::Destination(std::string threadName_, std::string stateMachineName_) :
    threadName(Symbol::create(threadName_)), stateMachineName(Symbol::create(stateMachineName_)) {
    }

    //Destination::Destination(const Destination& orig) {
    //}

    Destination::~Destination() {
    }

    Symbol* Destination::getThreadName() {
        return threadName;
    }

    Symbol* Destination::getStateMachineName() {
        return stateMachineName;
    }
}