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
#include "Value.h"
namespace utah {

    class Message {
    public:
        Message();
        Message(Symbol* messageName_, Symbol* argType_);
        Message(std::string messageName_, std::string argType_);
        //Message(const Message& orig);
        virtual ~Message();
        void setValue(std::shared_ptr<Value> value_);
        Symbol* getMessageName();
        Symbol* getValueType();
        std::shared_ptr<Value> getValue();
    private:
        Symbol* messageName;
        Symbol* valueType;
        std::shared_ptr<Value> value;
    };
}
#endif	/* MESSAGE_H */

