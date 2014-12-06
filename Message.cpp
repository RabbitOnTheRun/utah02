/* 
 * File:   Message.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/03, 0:43
 */

#include "Message.h"

namespace utah {

    Message::Message() {
    }

    Message::Message(Symbol* messageName_, Symbol* argType_) :
    messageName(messageName_), argType(argType_) {
    }

    Message::Message(std::string messageName_, std::string argType_) :
    messageName(Symbol::create(messageName_)), argType(Symbol::create(argType_)) {

    }
    //Message::Message(const Message& orig) {
    //}

    Message::~Message() {
    }

    void Message::setArgument(std::shared_ptr<Argument> argument_) {
    }

    Symbol* Message::getMessageName() {
        return messageName;
    }

    Symbol* Message::getArgType() {
        return argType;
    }

    std::shared_ptr<Argument> Message::getArgument() {
        return argument;
    }
}