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
namespace utah {

    class InPort {
    public:
        InPort();
        //InPort(const InPort& orig);
        virtual ~InPort();
    private:
        Symbol* portName;
    };
}
#endif	/* INPORT_H */

