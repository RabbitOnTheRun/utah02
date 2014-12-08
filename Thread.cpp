/* 
 * File:   Thread.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/03, 13:22
 */

#include "Sym.h"
#include "Thread.h"
#include "MessageWithOutPort.h"
#include "MessageWithInPort.h"
#include "Process.h"

#include <iostream>
namespace utah {

    Thread::Thread() {
    }

    //Thread::Thread(const Thread& orig) {
    //}

    Thread::~Thread() {
    }

    void Thread::push(MessageWithInPort messageWithInPort) {
        //std::cout << "Thread::push " + eventWithDest.event.symbol->getName() + "\n" ;
        eventQueue->push(messageWithInPort);
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

            MessageWithInPort messageWithInPort = eventQueue->wait_and_pop();

            //SymbolicEvent ev = eventHandling->popEvent();

            //if (Symbol::create("done") == NULL) { //message.getName()) {
            if (Sym::done == messageWithInPort.getMessage().getMessageName()) { 
                doDone();
                break;
            }

            InPort inPort = messageWithInPort.getInPort();
            Symbol* stateMachineName = inPort.stateMachine;
            
            std::vector<MessageWithOutPort> result;
            stateMachineMap[stateMachineName]->processMessage(messageWithInPort.getMessage(), result); // sendMessage

            for (MessageWithOutPort messageWithOutPort : result) {
                Message message = messageWithOutPort.getMessage();
                OutPort outPort = messageWithOutPort.getOutPort();
                
                InPort inPort = this->process->portMap[outPort]; // accessing process without concurrency control
                Thread* peerThread = this->process->getThread(inPort.thread);
                MessageWithInPort messageWithInPort(message, inPort);
                peerThread->push(messageWithInPort);
            }
            
        }
    }

    void Thread::setEventQueue(std::shared_ptr<EventQueue> eventQueue_) {
        eventQueue = eventQueue_;
    }
    // wait_and_pop();


}
