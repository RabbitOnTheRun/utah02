/* 
 * File:   MessageWithOutPort.h
 * Author: ntanaka
 *
 * Created on 2014/12/08, 22:37
 */

#ifndef MESSAGEWITHOUTPORT_H
#define	MESSAGEWITHOUTPORT_H

#include "Message.h"
#include "OutPort.h"
namespace utah {

    class MessageWithOutPort {
    public:
        MessageWithOutPort();
        MessageWithOutPort(Message message_, OutPort outPort_);
        //MessageWithOutPort(const MessageWithOutPort& orig);
        virtual ~MessageWithOutPort();
        Message getMessage();
        OutPort getOutPort();
    private:
        Message message;
        OutPort outPort;
    };
}
#endif	/* MESSAGEWITHOUTPORT_H */

