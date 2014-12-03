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
    void EventQueue::push(Message message) {
        eventQueue.push(message);
    }

    Message EventQueue::wait_and_pop() {
        Message message;
        eventQueue.wait_and_pop(message);
        return message;
    }
}