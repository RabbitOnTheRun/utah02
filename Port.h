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
        Port();
        Port(const std::string portName_, const std::string stateMachine, const std::string thread_);
        Port(const Symbol* portName_, const Symbol* stateMachine, const Symbol* thread_);
        //Port(const Port& orig);
        virtual ~Port();
        const Symbol*  portName;
        const Symbol*  stateMachine;
        const Symbol*  thread;
        bool eq(const Port& port_) const ;
    private:

    };
}
#endif	/* PORT_H */

