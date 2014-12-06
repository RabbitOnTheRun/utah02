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
#include "MessageWithDest.h"

namespace utah {

    class Process {
    public:
        Process();
        //Process(const Process& orig);
        virtual ~Process();
        void addThread(Symbol* threadName, Thread* thread_);
        void addThread(std::string threadName, Thread* thread_);
        void push(MessageWithDest messageWithDest_);
    private:
        std::map<Symbol*, Thread*> threadMap;
       // std::map<Symbol*, std::map<Symbol*, InPort>
    };
}
#endif	/* PROCESS_H */

