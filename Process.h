/* 
 * File:   Process.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 1:08
 */

#ifndef PROCESS_H
#define	PROCESS_H

#include <map>
#include "Symbol.h"
#include "Thread.h"
#include "MessageWithInPort.h"
#include "PortMap.h"

namespace utah {

    class Process {
    public:
        Process(PortMap portMap_);
        //Process(const Process& orig);
        virtual ~Process();
        void addThread(Symbol* threadName, Thread* thread_);
        void addThread(std::string threadName, Thread* thread_);
        void push(MessageWithInPort messageWithInPort_);
        Thread* getThread(const Symbol* threadName);
        const PortMap portMap;
    private:
        std::map<const Symbol*, Thread*> threadMap;
        //std::map<Symbol*, Thread*> stateMachineMap;
       // std::map<Symbol*, std::map<Symbol*, InPort>
    };
}
#endif	/* PROCESS_H */

