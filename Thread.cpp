/* 
 * File:   Thread.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/03, 13:22
 */

#include "Thread.h"
#include <iostream>
namespace utah {

    Thread::Thread() {
    }

    //Thread::Thread(const Thread& orig) {
    //}

    Thread::~Thread() {
    }

    void Thread::push(Message message) {
        //std::cout << "Thread::push " + eventWithDest.event.symbol->getName() + "\n" ;
        eventQueue->push(message);
    }

    void Thread::start() {
        thread_ = std::thread(&Thread::run, this);
    }

    void Thread::doDone() {
        done_ = true;
    }

    void Thread::join() {
        thread_.join();
    }

    void Thread::run() {
        while (!done_) {

            Message message = eventQueue->wait_and_pop();

            //SymbolicEvent ev = eventHandling->popEvent();

            if (Symbol::create("done") == NULL) { //message.getName()) {
                doDone();
                break;
            }

            // dispatch here ;

        }
    }

    void Thread::setEventQueue(std::shared_ptr<EventQueue> eventQueue_) {
        eventQueue = eventQueue_;
    }
    // wait_and_pop();

 
}
