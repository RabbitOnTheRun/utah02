/* 
 * File:   InPort.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 1:46
 */

#include "InPort.h"

namespace utah {

    InPort::InPort() {
    }

    InPort::InPort(std::string portName_, std::string stateMachine_, std::string thread_) :
    Port(portName_, stateMachine_, thread_) {
    }

    InPort::InPort(Symbol* portName_, Symbol* stateMachine_, Symbol* thread_) :
    Port(portName_, stateMachine_, thread_) {
    }
    //InPort::InPort(const InPort& orig) {
    //}

    InPort::~InPort() {
    }
}