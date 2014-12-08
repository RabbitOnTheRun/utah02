/* 
 * File:   StateMachine.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 0:56
 */

#ifndef STATEMACHINE_H
#define	STATEMACHINE_H

#include <map>
#include <vector>
#include "Symbol.h"
#include "State.h"
#include "Transition.h"
#include "OutPort.h"
#include "Message.h"
namespace utah {

    class StateMachine {
    public:
        StateMachine();
        //StateMachine(const StateMachine& orig);
        virtual ~StateMachine();
        void processMessage(Message message_, std::vector<MessageWithOutPort>& result);
        void setCurrent(State* current_);
    private:
        //std::map<Symbol*, OutPort*> outPortMap;
        State* current;
        std::map<Symbol*, State*> stateMap;
        std::vector<Transition*> transitions;
    };
}
#endif	/* STATEMACHINE_H */

