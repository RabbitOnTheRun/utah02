/* 
 * File:   Message.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/03, 0:43
 */

#include "Message.h"

namespace utah {

    Message::Message() :
    messageName(Symbol::create("NULL")), valueType(Symbol::create("NULL")) {
    }

    Message::Message(const Symbol* messageName_, const Symbol* argType_) :
    messageName(messageName_), valueType(argType_) {
    }

    Message::Message(const Symbol* messageName_, const Symbol* valueType_, std::string givenArgument_) :
    messageName(messageName_), valueType(valueType_), argument(givenArgument_) {
    }

    Message::Message(std::string messageName_, std::string valueType_) :
    messageName(Symbol::create(messageName_)), valueType(Symbol::create(valueType_)) {

    }
    //Message::Message(const Message& orig) {
    //}

    Message::~Message() {
    }

    void Message::setValue(std::shared_ptr<Value> value_) {
        value = value_;
    }

    const Symbol* Message::getMessageName() {
        return messageName;
    }

    const Symbol* Message::getValueType() {
        return valueType;
    }

    std::shared_ptr<Value> Message::getValue() {
        return value;
    }
}