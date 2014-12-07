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
        virtual ~Thread();
        const std::string name;
        void push(MessageWithDest messageWithDest);
        void start();
        void join();
        void setEventQueue(std::shared_ptr<EventQueue> eventQueue);
        void addStateMachine(Symbol* stateMachineName, StateMachine* stateMachine);
    private:
        Thread();
        std::thread thread_;
        std::shared_ptr<EventQueue> eventQueue;
        bool done_ = false;
        void doDone();
        void run();
        std::map<Symbol* , StateMachine*> stateMachineMap;
        Process* process;
    };
}
#endif	/* THREAD_H */

