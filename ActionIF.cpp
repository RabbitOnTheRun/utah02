/* 
 * File:   ActionIF.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/09, 0:27
 */

#include "ActionIF.h"
#include "Log.h"

namespace utah {

    ActionIF::ActionIF() {
    }

    ActionIF::ActionIF(std::string name_, ActionFunction actionFunction_) :
    name(Symbol::create(name_)), actionFunction(actionFunction_) {
    }

   /* ActionIF::ActionIF(std::string name_, ActionFunction2 actionFunction2_) :
    name(Symbol::create(name_)), actionFunction2(actionFunction2_) {
    }*/
    //ActionIF::ActionIF(const ActionIF& orig) : name(orig.name), actionFunction(orig.actionFunction){
    //}

    ActionIF::~ActionIF() {
    }

    Result ActionIF::execute(Message& message_, const std::string& argument_) {
        return ( actionFunction(message_, argument_));
    }

    //void ActionIF::setActionFunction(ActionFunction function_) {
    //    actionFunction = function_;
    //}
}
