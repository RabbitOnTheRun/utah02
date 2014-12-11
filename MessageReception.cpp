/* 
 * File:   MessageReception.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/30, 0:47
 */

#include "MessageReception.h"
namespace utah {

    MessageReception::MessageReception() {
    }

    MessageReception::MessageReception(std::string name_, std::string type_) :
    name(Symbol::create(name_)), type(Symbol::create(type_)) {
    }

    //MessageReception::MessageReception(const MessageReception& orig) { 
    //   name(orig.name), type(orig.name) {
    //name = orig.name;
    // type = orig.name;
    //}

    MessageReception::~MessageReception() {
    }

    const Symbol* MessageReception::getName() {
        return name;
    }

    const Symbol* MessageReception::getType() {
        return type;
    }

    bool MessageReception::ifMatch(Message& message_) {
        if (message_.getMessageName() == name) {
            return true;
        } else {
            return false;
        }
    }
}
