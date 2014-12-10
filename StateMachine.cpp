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

    StateMachine::StateMachine() {
    }

    //StateMachine::StateMachine(const StateMachine& orig) {
    //}

    StateMachine::~StateMachine() {
    }

    void StateMachine::processMessage(Message message_, std::vector<MessageWithOutPort>& result_) {

        std::vector<Transition*> matched;
        for (Transition* transition : current->transitions) {
            if (transition->ifMatch(message_, component)) {
                matched.push_back(transition);
            }
        }
        assert(1 == matched.size());
        // execute action
        Result result = matched[0]->execute(message_, component);
        // resultHandling
        
    }

    void StateMachine::setCurrent(State* current_) {
        current = current_;
    }
    void StateMachine::setComponent(ComponentIF* component_){
        component = component_;
    }
}
