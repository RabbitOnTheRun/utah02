/* 
 * File:   GuardIF.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/08, 23:52
 */

#include "GuardIF.h"

namespace utah {

    GuardIF::GuardIF() {
    }

    //GuardIF::GuardIF(const GuardIF& orig) {
    //}

    GuardIF::GuardIF(std::string name_) : name(Symbol::create(name_))  {
    }

    GuardIF::GuardIF(Symbol* name_) : name(name_) {
    }

    GuardIF::~GuardIF() {
    }

    bool GuardIF::judge(Message& message_, std::string& argument_) {
        return guardFunction(message_, argument_);
    }

    void GuardIF::setGuardFunction(GuardFunction function_) {
        guardFunction = function_;
    }
}
