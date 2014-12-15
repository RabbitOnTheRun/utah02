/* 
 * File:   OutPort.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 1:47
 */

#include "OutPort.h"

namespace utah {

    //    OutPort::OutPort() {
    //  }

    OutPort::OutPort(std::string portName_, std::string stateMachine, std::string thread_) :
    Port(portName_, stateMachine, thread_) {
    }

    OutPort::OutPort(const Symbol* portName_, const Symbol* stateMachine_, const Symbol* thread_) :
    Port(portName_, stateMachine, thread_) {
    }

    //OutPort::OutPort(const OutPort& orig) {
    //}

    OutPort::~OutPort() {
    }
}
