/* 
 * File:   Port.h
 * Author: ntanaka
 *
 * Created on 2014/12/08, 1:55
 */

#ifndef PORT_H
#define	PORT_H

#include <string>
#include "Symbol.h"

namespace utah {

    class Port {
    public:
        Port(std::string portName_, std::string stateMachine, std::string thread_);
        Port(Symbol* portName_, Symbol* stateMachine, Symbol* thread_);
        //Port(const Port& orig);
        virtual ~Port();
        const Symbol* portName;
        const Symbol* stateMachine;
        const Symbol* thread;
        bool eq(const Port& port_);
    private:

    };
}
#endif	/* PORT_H */

