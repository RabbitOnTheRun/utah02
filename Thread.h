/* 
 * File:   Thread.h
 * Author: ntanaka
 *
 * Created on 2014/12/03, 13:22
 */

#ifndef THREAD_H
#define	THREAD_H

#include <string>
#include <memory>
#include <map>
#include <thread>
#include "Symbol.h"
#include "Message.h"
#include "EventQueue.h"
#include "StateMachine.h"

namespace utah {

    class Process;
    
    class Thread {
    public:
        Thread(std::string name_, std::shared_ptr<EventQueue> eventQueue_);
        virtual ~Thread();
        const Symbol* name;
        void push(MessageWithInPort messageWithInPort);
        void start();
        void join();
        void setEventQueue(std::shared_ptr<EventQueue> eventQueue);
        void addStateMachine(std::string& stateMachineName_, StateMachine* stateMachine_);
        void setComponent(std::string& stateMachineName_, ComponentIF* component_);
        void setProcess(Process* process_);
    private:
        Thread();
        std::thread thread_;
        std::shared_ptr<EventQueue> eventQueue;
        bool done_ = false;
        void doDone();
        void run();
        std::map<const Symbol* , StateMachine*> stateMachineMap;
        Process* process;
    };
}
#endif	/* THREAD_H */

