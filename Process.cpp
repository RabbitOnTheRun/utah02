/* 
 * File:   Process.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 1:08
 */

#include "Process.h"

namespace utah {

    Process::Process(PortMap portMap_) : portMap(portMap_) {
    }

    //Process::Process(const Process& orig) {
    //}

    Process::~Process() {
    }

    void Process::addThread(Symbol* threadName, Thread* thread_) {
        threadMap[threadName] = thread_;

    }

    void Process::addThread(std::string threadName, Thread* thread_) {
        threadMap[Symbol::create(threadName)] = thread_;
    }

    void Process::push(MessageWithInPort messageWithInPort_) {
        InPort inPort = messageWithInPort_.getInPort();
        const Symbol* threadName = inPort.thread;
        Thread* thread = threadMap[threadName];
        thread->push(messageWithInPort_);
    }

    Thread* Process::getThread(const Symbol* threadName) {
        return threadMap[threadName];
    }

    void Process::setComponent(std::string& threadName_, std::string& stateMachineName_, ComponentIF* component_) {
        const Symbol* name = Symbol::create(threadName_);
        Thread* thread = getThread(name);
        thread->setComponent(stateMachineName_, component_);
    }

    void Process::done() {
        for (std::pair<const Symbol*, Thread*> thread_pair : threadMap) {
            Thread* thread_ = thread_pair.second;
            Message message("done", "NULL");
            InPort inPort("NULL", "NULL", "NULL");
            MessageWithInPort messageWithInPort_(message, inPort);
            thread_->push(messageWithInPort_);
        }
    }

    void Process::join() {
        for (std::pair<const Symbol*, Thread*> thread_pair : threadMap) {
            Thread* thread_ = thread_pair.second;
            thread_->join();
        }

    }
}
