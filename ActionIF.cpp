/* 
 * File:   ActionIF.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/09, 0:27
 */

#include "ActionIF.h"

namespace utah {

    ActionIF::ActionIF() {
    }
    ActionIF:: ActionIF(std::string name_) : name(Symbol::create(name_)){
    }
    //ActionIF::ActionIF(const ActionIF& orig) {
    //}

    ActionIF::~ActionIF() {
    }

    Result ActionIF::execute(Message& message_, std::string& argument_) {
        return( actionFunction(message_, argument_));
    }

    void ActionIF::setActionFunction(ActionFunction function_) {
        actionFunction = function_;
    }
}
