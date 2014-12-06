/* 
 * File:   Destination.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 0:24
 */

#ifndef DESTINATION_H
#define	DESTINATION_H

#include <string>
#include "Symbol.h"
namespace utah {

    class Destination {
    public:
        Destination();
        Destination(std::string threadName_, std::string stateMachineName_);
        //Destination(const Destination& orig);
        virtual ~Destination();
        Symbol* getThreadName();
        Symbol* getStateMachineName();
    private:
        Symbol* threadName;
        Symbol* stateMachineName;

    };
}
#endif	/* DESTINATION_H */

