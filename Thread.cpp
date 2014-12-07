/* 
 * File:   Thread.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/03, 13:22
 */

#include "Sym.h"
#include "Thread.h"

#include <iostream>
namespace utah {

    Thread::Thread() {
    }

    //Thread::Thread(const Thread& orig) {
    //}

    Thread::~Thread() {
    }

    void Thread::push(MessageWithDest messageWithDest) {
        //std::cout << "Thread::push " + eventWithDest.event.symbol->getName() + "\n" ;
        eventQueue->push(messageWithDest);
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

            MessageWithDest messageWithDest = eventQueue->wait_and_pop();

            //SymbolicEvent ev = eventHandling->popEvent();

            //if (Symbol::create("done") == NULL) { //message.getName()) {
            if (Sym::done == messageWithDest.getMessage().getMessageName()) { 
                doDone();
                break;
            }

            Destination destination = messageWithDest.getDestination();
            Symbol* stateMachineName = destination.getStateMachineName();
            //stateMachineMap[stateMachineName]

        }
    }

    void Thread::setEventQueue(std::shared_ptr<EventQueue> eventQueue_) {
        eventQueue = eventQueue_;
    }
    // wait_and_pop();


}
