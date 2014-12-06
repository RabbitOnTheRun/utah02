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

namespace utah {

    class OutPort {
    public:
        OutPort();
        //OutPort(const OutPort& orig);
        virtual ~OutPort();
    private:
        Symbol* portName;
    };
}
#endif	/* OUTPORT_H */

