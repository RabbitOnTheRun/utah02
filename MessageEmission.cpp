/* 
 * File:   MessageEmission.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 21:49
 */

#include "MessageEmission.h"

namespace utah {

    MessageEmission::MessageEmission() {
    }

    MessageEmission::MessageEmission(
            std::string port_, std::string messageName_,
            std::string argType_, std::string givenArgument_) :
    port(Symbol::create(port_)), messageName(Symbol::create(messageName_)), 
            argType(Symbol::create(argType_)), givenArgument(givenArgument_) {

    }
    //MessageEmission::MessageEmission(const MessageEmission& orig) {
    //}

    MessageEmission::~MessageEmission() {
    }

}