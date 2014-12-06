/* 
 * File:   Process.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 1:08
 */

#include "Process.h"
#include "Destination.h"

namespace utah {

    Process::Process() {
    }

    //Process::Process(const Process& orig) {
    //}

    Process::~Process() {
    }
    void Process::addThread(Symbol* threadName, Thread* thread_){
        threadMap[threadName] = thread_;
                
    }
    void Process::addThread(std::string threadName, Thread* thread_){
        threadMap[Symbol::create(threadName)] = thread_;        
    }
    void Process::push(MessageWithDest messageWithDest_){
        Destination destination = messageWithDest_.getDestination();
        Symbol* threadName = destination.getThreadName();
        Thread* thread = threadMap[threadName];
        thread->push(messageWithDest_);
    }
}
