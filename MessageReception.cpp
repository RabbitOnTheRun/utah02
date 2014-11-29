/* 
 * File:   MessageReception.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/30, 0:47
 */

#include "MessageReception.h"
namespace utah {
MessageReception::MessageReception(std::string name_, std::string type_) :
    name(Symbol::create(name_)), type(Symbol::create(type_)) {
}

//MessageReception::MessageReception(const MessageReception& orig) {
//}

MessageReception::~MessageReception() {
}
}
