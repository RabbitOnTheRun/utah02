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
#include "Log.h"

#include <iostream>
namespace utah {

    Thread::Thread() {
    }

    Thread::Thread(std::string name_, std::shared_ptr<EventQueue> eventQueue_) :
    name(Symbol::create(name_)), eventQueue(eventQueue_) {
    }
    //Thread::Thread(const Thread& orig) {
    //}

    Thread::~Thread() {
    }

    void Thread::push(MessageWithInPort messageWithInPort) {
        LOGFUNC;
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
            const Symbol* stateMachineName = inPort.stateMachine;

            std::vector<MessageWithOutPort> result;
            stateMachineMap[stateMachineName]->processMessage(messageWithInPort.getMessage(), result); // sendMessage
            LOGFUNC;
            if (result.size() == 1) {
                LOGVALUE("result = ", result[0].getMessage().getMessageName()->getName());
            }
            for (MessageWithOutPort messageWithOutPort : result) {
                Message message = messageWithOutPort.getMessage();
                OutPort outPort = messageWithOutPort.getOutPort();

                InPort inPort = this->process->portMap.getConnectedPort(outPort); // accessing process without concurrency control
                LOGFUNC;
                LOGVALUE("outSM", outPort.stateMachine->getName());
                LOGVALUE("inSM", inPort.stateMachine->getName());
                LOGVALUE("messageName", message.getMessageName()->getName());

                Thread* peerThread = this->process->getThread(inPort.thread);
                MessageWithInPort messageWithInPort(message, inPort);

                // sequence chart log comes from here
                Log::sequence.message(outPort.stateMachine, inPort.stateMachine, message.getMessageName());

                peerThread->push(messageWithInPort);
            }

        }
    }

    void Thread::setEventQueue(std::shared_ptr<EventQueue> eventQueue_) {
        eventQueue = eventQueue_;
    }
    // wait_and_pop();

    void Thread::addStateMachine(std::string& stateMachineName_, StateMachine* stateMachine_) {
        stateMachineMap[Symbol::create(stateMachineName_)] = stateMachine_;
    }

    void Thread::setComponent(std::string& stateMachineName_, ComponentIF* component_) {
        const Symbol* name = Symbol::create(stateMachineName_);
        StateMachine* stateMachine = stateMachineMap[name];
        stateMachine->setComponent(component_);
    }
    void Thread::setProcess(Process* process_){
        process = process_;
    }
}
