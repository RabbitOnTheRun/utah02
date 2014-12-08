/* 
 * File:   Guard.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 19:51
 */

#include "Guard.h"
#include "MapOfAction.h"
#include "MapOfGuard.h"

namespace utah {

    Guard::Guard() {
    }

    Guard::Guard(std::string name_, std::string arg_) : name(Symbol::create(name_)), arg(arg_) {

    }
    //Guard::Guard(const Guard& orig) {
    //}

    Guard::~Guard() {
    }

    bool Guard::ifMatch(Message message_, ComponentIF* component_) {
        if (component_->judge(name, message_, arg)) {
            return true;
        }
    }
}
