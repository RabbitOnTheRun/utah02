/* 
 * File:   EventQueue.h
 * Author: ntanaka
 *
 * Created on 2014/12/03, 1:20
 */

#ifndef EVENTQUEUE_H
#define	EVENTQUEUE_H

#include "shared_queue.h"
#include "Message.h"
namespace utah {

    class EventQueue {
    public:
        EventQueue();
        //EventQueue(const EventQueue& orig);
        virtual ~EventQueue();
        void push(Message message);
        Message wait_and_pop();
    private:
        itc::shared_queue<Message> eventQueue;
    };
}
#endif	/* EVENTQUEUE_H */

