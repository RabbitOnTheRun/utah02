/* 
 * File:   InPort.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 1:46
 */

#ifndef INPORT_H
#define	INPORT_H

#include <string>
#include "Symbol.h"
#include "Port.h"
namespace utah {

    class InPort : public Port {
    public:
        //InPort();
        InPort(std::string portName_, std::string stateMachine, std::string thread_);
        InPort(Symbol* portName_, Symbol* stateMachine, Symbol* thread_);
        //InPort(const InPort& orig);
        virtual ~InPort();
    private:
        // Symbol* portName;
        //Symbol* stateMachine;
        //Symbol* thread;
    };
}
#endif	/* INPORT_H */

