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
        void setCurrent(std::string current_);
        void setComponent(ComponentIF* component_);
        void setStateMap(std::map<const Symbol*, State*> stateMap_);
        void setTransitions(std::vector<Transition*> transitions_);
        void setInPorts(std::vector<const Symbol*> inPorts_);
        void setOutPorts(std::vector<const Symbol*> outPorts_);
        void setAcceptableMessage(std::vector<const Symbol*> acceptableMessage_);
        Symbol* getName();
    private:
        //std::map<Symbol*, OutPort*> outPortMap;
        Symbol* name;
        Symbol* threadName;
        State* current;
        std::map<const Symbol*, State*> stateMap;
        std::vector<Transition*> transitions;
        std::vector<const Symbol*> acceptableMessage;
        ComponentIF* component;
        std::vector<const Symbol*> inPorts;
        std::vector<const Symbol*> outPorts;
    };
}
#endif	/* STATEMACHINE_H */

