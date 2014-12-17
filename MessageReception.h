/* 
 * File:   MessageReception.h
 * Author: ntanaka
 *
 * Created on 2014/11/30, 0:47
 */

#ifndef MESSAGERECEPTION_H
#define	MESSAGERECEPTION_H

#include <string>
#include "Symbol.h"
#include "Message.h"
namespace utah {

    class MessageReception {
    public:
        //MessageReception();
        MessageReception(std::string name_, std::string type_);
        // MessageReception(const MessageReception& orig);
        virtual ~MessageReception();
        const Symbol* getName();
        const Symbol* getType();
        bool ifMatch(Message& message_) const ;
    private:
        const Symbol* name;
        const Symbol* type;
    };
}
#endif	/* MESSAGERECEPTION_H */

