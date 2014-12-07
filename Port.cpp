/* 
 * File:   Port.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/08, 1:55
 */

#include "Port.h"

namespace utah {

    Port::Port(std::string portName_, std::string stateMachine_, std::string thread_) :
    portName(Symbol::create(portName_)), stateMachine(Symbol::create(stateMachine_)), thread(Symbol::create(thread_)) {
    }

    Port::Port(Symbol* portName_, Symbol* stateMachine_, Symbol* thread_) :
    portName(portName_), stateMachine(stateMachine_), thread(thread_) {
    }

    //Port::Port() {
    //}

    //Port::Port(const Port& orig) {
    //}

    Port::~Port() {
    }

    bool Port::eq(const Port& port_) {
        if (    (this->portName == port_.portName) &&
                (this->stateMachine == port_.stateMachine) &&
                (this->thread == port_.thread)) {
            return true;
        } else {
            return false;
        }
    }
}
