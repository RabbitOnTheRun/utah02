/* 
 * File:   MessageWithOutPort.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/08, 22:37
 */

#include "MessageWithOutPort.h"

namespace utah {

    //MessageWithOutPort::MessageWithOutPort() {
    //}

    MessageWithOutPort::MessageWithOutPort(Message message_, OutPort outPort_) :
    message(message_), outPort(outPort_) {
    }
    //MessageWithOutPort::MessageWithOutPort(const MessageWithOutPort& orig) {
    //}

    MessageWithOutPort::~MessageWithOutPort() {
    }

    Message MessageWithOutPort::getMessage() {
        return message;
    }

    OutPort MessageWithOutPort::getOutPort() {
        return outPort;
    }
}
