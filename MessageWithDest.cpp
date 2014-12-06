/* 
 * File:   MessageWithDest.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 0:33
 */

#include "MessageWithDest.h"

namespace utah {

    MessageWithDest::MessageWithDest() {
    }

    MessageWithDest::MessageWithDest(Message message_, Destination destination_) :
    message(message_), destination(destination_) {
    }

    //MessageWithDest::MessageWithDest(const MessageWithDest& orig) {
    //}

    MessageWithDest::~MessageWithDest() {
    }

    Message MessageWithDest::getMessage() {
        return message;
    }

    Destination MessageWithDest::getDestination() {
        return destination;
    }
}
