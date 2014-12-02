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
#include "tests/MessageReceptionMappertestclass.h"
#include "tests/TransitionMappertestclass.h"
namespace utah {

    class MessageReception {
        friend MessageReceptionMappertestclass;
        friend TransitionMappertestclass;
    public:
       MessageReception();
        MessageReception(std::string name_, std::string type_);
       // MessageReception(const MessageReception& orig);
        virtual ~MessageReception();
    private:
        Symbol* name;
        Symbol* type;
    };
}
#endif	/* MESSAGERECEPTION_H */

