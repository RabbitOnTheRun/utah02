/* 
 * File:   Transition.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/28, 20:56
 */

#include "Transition.h"

namespace utah {

    Transition::Transition(const std::string from_, const std::string to_) :
        from(Symbol::create(from_)), to(Symbol::create(to_)) {
    }

    //Transition::Transition(const Transition& orig) {
    //}

    Transition::~Transition() {
    }

}