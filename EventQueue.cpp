/* 
 * File:   EventQueue.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/03, 1:20
 */

#include "EventQueue.h"

namespace utah {

    EventQueue::EventQueue() {
    }

    //EventQueue::EventQueue(const EventQueue& orig) {
    //}

    EventQueue::~EventQueue() {
    }
    void EventQueue::push(MessageWithInPort messageWithInPort) {
        eventQueue.push(messageWithInPort);
    }

    MessageWithInPort EventQueue::wait_and_pop() {
        MessageWithInPort messageWithInPort;
        eventQueue.wait_and_pop(messageWithInPort);
        return messageWithInPort;
    }
}