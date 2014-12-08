/* 
 * File:   StateMachine.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 0:56
 */

#include "StateMachine.h"
namespace utah {

    StateMachine::StateMachine() {
    }

    //StateMachine::StateMachine(const StateMachine& orig) {
    //}

    StateMachine::~StateMachine() {
    }

    void StateMachine::processMessage(Message message_, std::vector<MessageWithOutPort>& result_) {

    }

    void StateMachine::setCurrent(State* current_) {
        current = current_;
    }
}
