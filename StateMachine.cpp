/* 
 * File:   StateMachine.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 0:56
 */
#include <assert.h>
#include <vector>
#include "StateMachine.h"
namespace utah {

    StateMachine::StateMachine(std::string name_, std::string threadName_) :
    name(Symbol::create(name_)), threadName(Symbol::create(threadName_)) {

    }

    //StateMachine::StateMachine(const StateMachine& orig) {
    //}

    StateMachine::~StateMachine() {
    }

    void StateMachine::processMessage(Message message_, std::vector<MessageWithOutPort>& result_) {

        std::vector<Transition*> matched;
        State* state = current;
        do {
            for (Transition* transition : state->transitions) {
                if (transition->ifMatch(message_, component)) {
                    matched.push_back(transition);
                }
            }
            state = state->getParent();
        } while ((0 == matched.size()) && (NULL != state));

        assert(1 == matched.size());
        // execute action
        Result result = matched[0]->execute(message_, component);
        // resultHandling
        matched[0]->generateEmission(result, threadName, name, result_);
        const Symbol* nextState = matched[0]->getNextState();
        current = stateMap[nextState];
    }

    void StateMachine::setCurrent(State* current_) {
        current = current_;
    }

    void StateMachine::setComponent(ComponentIF* component_) {
        component = component_;
    }

    void StateMachine::setStateMap(std::map<const Symbol*, State*> stateMap_) {
        stateMap = stateMap_;
    }

    void StateMachine::setTransitions(std::vector<Transition*> transitions_) {
        transitions = transitions_;
    }

    void StateMachine::setInPorts(std::vector<Symbol*> inPorts_) {
        inPorts = inPorts_;
    }

    void StateMachine::setOutPorts(std::vector<Symbol*> outPorts_) {
        outPorts = outPorts_;
    }
}
