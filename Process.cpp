/* 
 * File:   Process.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 1:08
 */

#include "Process.h"

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
    void Process::push(MessageWithInPort messageWithInPort_){
        InPort inPort = messageWithInPort_.getInPort();
        const Symbol* threadName = inPort.thread;
        Thread* thread = threadMap[threadName];
        thread->push(messageWithInPort_);
    }
    Thread* Process::getThread(const Symbol* threadName){
        return threadMap[threadName];
    }
}
