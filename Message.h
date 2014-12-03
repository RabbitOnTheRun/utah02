/* 
 * File:   Message.h
 * Author: ntanaka
 *
 * Created on 2014/12/03, 0:43
 */

#ifndef MESSAGE_H
#define	MESSAGE_H

#include <memory>
#include "Symbol.h"
#include "Argument.h"
namespace utah {

    class Message {
    public:
        Message();
        //Message(const Message& orig);
        virtual ~Message();
    private:
        Symbol* messageName;
        Symbol* argType;
        std::shared_ptr<Argument> argument;
    };
}
#endif	/* MESSAGE_H */

