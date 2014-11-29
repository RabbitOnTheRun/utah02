/* 
 * File:   JsonFormatException.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/29, 20:55
 */

#include "JsonFormatException.h"

namespace jsonMapper {

    JsonFormatException::JsonFormatException() {
    }

    //JsonFormatException::JsonFormatException(const JsonFormatException& orig) {}

    //JsonFormatException::~JsonFormatException() {
   //}

    JsonFormatException::JsonFormatException(std::string message_) : message(message_) {

    }

    std::string JsonFormatException::getString() {
        return message;
    }
}