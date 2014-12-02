/* 
 * File:   Guard.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 19:51
 */

#include "Guard.h"

namespace utah {

    Guard::Guard() {
    }

    Guard::Guard(std::string name_, std::string arg_) : name(Symbol::create(name_)), arg(arg_){

    }
    //Guard::Guard(const Guard& orig) {
    //}

    Guard::~Guard() {
    }
}
