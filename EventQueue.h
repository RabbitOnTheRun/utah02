/* 
 * File:   EventQueue.h
 * Author: ntanaka
 *
 * Created on 2014/12/03, 1:20
 */

#ifndef EVENTQUEUE_H
#define	EVENTQUEUE_H

#include "shared_queue.h"
#include "MessageWithDest.h"
namespace utah {

    class EventQueue {
    public:
        EventQueue();
        //EventQueue(const EventQueue& orig);
        virtual ~EventQueue();
        void push(MessageWithDest messageWithDest);
        MessageWithDest wait_and_pop();
    private:
        itc::shared_queue<MessageWithDest> eventQueue;
    };
}
#endif	/* EVENTQUEUE_H */

