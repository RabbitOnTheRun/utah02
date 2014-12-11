/* 
 * File:   StateMachine.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 0:56
 */

#ifndef STATEMACHINE_H
#define	STATEMACHINE_H

#include <string>
#include <map>
#include <vector>
#include "Symbol.h"
#include "State.h"
#include "Transition.h"
#include "OutPort.h"
#include "Message.h"
#include "MessageWithOutPort.h"
#include "ComponentIF.h"
namespace utah {

    class StateMachine {
    public:
        StateMachine(std::string name_, std::string threadName_);
        //StateMachine(const StateMachine& orig);
        virtual ~StateMachine();
        void processMessage(
            Message message_, 
            std::vector<MessageWithOutPort>& result);
        void setCurrent(State* current_);
        void setComponent(ComponentIF* component_);
    private:
        //std::map<Symbol*, OutPort*> outPortMap;
        Symbol* name;
        Symbol* threadName;
        State* current;
        std::map<const Symbol*, State*> stateMap;
        std::vector<Transition*> transitions;
        ComponentIF* component;
    };
}
#endif	/* STATEMACHINE_H */

