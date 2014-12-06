/* 
 * File:   StateMachine.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 0:56
 */

#ifndef STATEMACHINE_H
#define	STATEMACHINE_H

#include <map>
#include "Symbol.h"
#include "OutPort.h"
namespace utah {

    class StateMachine {
    public:
        StateMachine();
        //StateMachine(const StateMachine& orig);
        virtual ~StateMachine();
        
    private:
        std::map<Symbol*, OutPort*> outPortMap;
    };
}
#endif	/* STATEMACHINE_H */

