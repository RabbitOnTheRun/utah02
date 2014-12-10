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
    messageName(messageName_), valueType(argType_) {
    }

    Message::Message(std::string messageName_, std::string valueType_) :
    messageName(Symbol::create(messageName_)), valueType(Symbol::create(valueType_)) {

    }
    //Message::Message(const Message& orig) {
    //}

    Message::~Message() {
    }

    void Message::setValue(std::shared_ptr<Value> argument_) {
    }

    Symbol* Message::getMessageName() {
        return messageName;
    }

    Symbol* Message::getValueType() {
        return valueType;
    }

    std::shared_ptr<Value> Message::getValue() {
        return value;
    }
}