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
//#include "jsonMapper/StateMachineMapper.h"
#include "tests/StateMachineMappertestclass.h"

namespace utah {

    class StateMachine {
        friend StateMachineMappertestclass;
        //friend StateMachineMapper;
    public:
        StateMachine(std::string name_, std::string threadName_);
        //StateMachine(const StateMachine& orig);
        virtual ~StateMachine();
        void processMessage(
                Message message_,
                std::vector<MessageWithOutPort>& result);
        void setCurrent(State* current_);
        void setComponent(ComponentIF* component_);
        void setStateMap(std::map<const Symbol*, State*> stateMap_);
        void setTransitions(std::vector<Transition*> transitions_);
        void setInPorts(std::vector<Symbol*> inPorts_);
        void setOutPorts(std::vector<Symbol*> outPorts_);
    private:
        //std::map<Symbol*, OutPort*> outPortMap;
        Symbol* name;
        Symbol* threadName;
        State* current;
        std::map<const Symbol*, State*> stateMap;
        std::vector<Transition*> transitions;
        ComponentIF* component;
        std::vector<Symbol*> inPorts;
        std::vector<Symbol*> outPorts;
    };
}
#endif	/* STATEMACHINE_H */

