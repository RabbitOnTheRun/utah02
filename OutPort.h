/* 
 * File:   OutPort.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 1:47
 */

#ifndef OUTPORT_H
#define	OUTPORT_H

#include <string>
#include "Symbol.h"
#include "Port.h"

#include "Symbol.h"
namespace utah {

    class OutPort : public Port {
    public:
        // OutPort();
        OutPort(std::string portName_, std::string stateMachine_, std::string thread_);
        OutPort(const Symbol* portName_, const Symbol* stateMachine_, const Symbol* thread_);
        //OutPort(const OutPort& orig);
        virtual ~OutPort();
    private:
        //Symbol* portName;
    };
}
#endif	/* OUTPORT_H */

