/* 
 * File:   MessageWithInPort.h
 * Author: ntanaka
 *
 * Created on 2014/12/08, 21:53
 */

#ifndef MESSAGEWITHINPORT_H
#define	MESSAGEWITHINPORT_H
#include "Message.h"
#include "InPort.h"
namespace utah {

    class MessageWithInPort {
    public:
        MessageWithInPort();
        MessageWithInPort(Message message_, InPort inPort_);
        //MessageWithInPort(const MessageWithInPort& orig);
        virtual ~MessageWithInPort();
        Message getMessage();
        InPort getInPort();
    private:
        Message message;
        InPort inPort;
    };
}
#endif	/* MESSAGEWITHINPORT_H */

