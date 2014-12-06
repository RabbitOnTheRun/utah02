/* 
 * File:   Message.h
 * Author: ntanaka
 *
 * Created on 2014/12/03, 0:43
 */

#ifndef MESSAGE_H
#define	MESSAGE_H

#include <memory>
#include <string>
#include "Symbol.h"
#include "Argument.h"
namespace utah {

    class Message {
    public:
        Message();
        Message(Symbol* messageName_, Symbol* argType_);
        Message(std::string messageName_, std::string argType_);
        //Message(const Message& orig);
        virtual ~Message();
        void setArgument(std::shared_ptr<Argument> argument_);
        Symbol* getMessageName();
        Symbol* getArgType();
        std::shared_ptr<Argument> getArgument();
    private:
        Symbol* messageName;
        Symbol* argType;
        std::shared_ptr<Argument> argument;
    };
}
#endif	/* MESSAGE_H */

