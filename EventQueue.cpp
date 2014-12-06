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
    void EventQueue::push(MessageWithDest messageWithDest) {
        eventQueue.push(messageWithDest);
    }

    MessageWithDest EventQueue::wait_and_pop() {
        MessageWithDest messageWithDest;
        eventQueue.wait_and_pop(messageWithDest);
        return messageWithDest;
    }
}