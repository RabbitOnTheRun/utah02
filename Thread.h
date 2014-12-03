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
#include "Message.h"
#include "EventQueue.h"

namespace utah {

    class Thread {
    public:
        virtual ~Thread();
        const std::string name;
        void push(Message message);
        void start();
        void join();
        void setEventQueue(std::shared_ptr<EventQueue> eventQueue);
    private:
        Thread();
        std::thread thread_;
        std::shared_ptr<EventQueue> eventQueue;
        bool done_ = false;
        void doDone();
        void run();
    };
}
#endif	/* THREAD_H */

