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
            if (transition->ifMatch(message_)) {
                matched.push_back(transition);
            }
        }
        assert(1 == matched.size());
        // execute
        // resultHandling
        
    }

    void StateMachine::setCurrent(State* current_) {
        current = current_;
    }
}
