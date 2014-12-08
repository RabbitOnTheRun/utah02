/* 
 * File:   MessageWithInPort.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/08, 21:53
 */

#include "MessageWithInPort.h"

namespace utah {

    MessageWithInPort::MessageWithInPort() {
    }

    MessageWithInPort::MessageWithInPort(Message message_, InPort inPort_) :
    message(message_), inPort(inPort_) {
    }

    //MessageWithInPort::MessageWithInPort(const MessageWithInPort& orig) {
    //}

    MessageWithInPort::~MessageWithInPort() {
    }

    Message MessageWithInPort::getMessage() {
        return message;
    }

    InPort MessageWithInPort::getInPort() {
        return inPort;
    }
}
