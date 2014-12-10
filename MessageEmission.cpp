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
            std::string valueType_, std::string givenArgument_) :
    port(Symbol::create(port_)), messageName(Symbol::create(messageName_)),
    valueType(Symbol::create(valueType_)), givenArgument(givenArgument_) {

    }
    //MessageEmission::MessageEmission(const MessageEmission& orig) {
    //}

    MessageEmission::~MessageEmission() {
    }

    Message MessageEmission::makeMessage() {
        Message message(messageName, valueType, givenArgument);
        return message;
    }

    const Symbol* MessageEmission::getPortSymbol() {
        return port;
    }
}