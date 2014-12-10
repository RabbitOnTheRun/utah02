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
        Message(const Symbol* messageName_, const Symbol* valueType_);
        Message(const Symbol* messageName_, const Symbol* valueType_, std::string givenArgument_);

        Message(std::string messageName_, std::string valueType_);
        //Message(const Message& orig);
        virtual ~Message();
        void setValue(std::shared_ptr<Value> value_);
        const Symbol* getMessageName();
        const Symbol* getValueType();
        std::shared_ptr<Value> getValue();
        std::string argument;
    private:
        const Symbol* messageName;
        const Symbol* valueType;
        std::shared_ptr<Value> value;

    };
}
#endif	/* MESSAGE_H */

