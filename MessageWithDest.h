/* 
 * File:   MessageWithDest.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 0:33
 */

#ifndef MESSAGEWITHDEST_H
#define	MESSAGEWITHDEST_H

#include "Message.h"
#include "Destination.h"

namespace utah {

    class MessageWithDest {
    public:
        MessageWithDest();
        MessageWithDest(Message message_, Destination destination_);
        //MessageWithDest(const MessageWithDest& orig);
        virtual ~MessageWithDest();
        Message getMessage();
        Destination getDestination();
    private:
        Message message;
        Destination destination;
    };
}
#endif	/* MESSAGEWITHDEST_H */

