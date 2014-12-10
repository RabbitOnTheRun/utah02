/* 
 * File:   MessageEmission.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 21:49
 */

#ifndef MESSAGEEMISSION_H
#define	MESSAGEEMISSION_H

#include <string>
#include "Symbol.h"
#include "Message.h"
#include "tests/MessageEmissiontestclass.h"
#include "tests/ExternalEffectMappertestclass.h"
namespace utah {

    class MessageEmission {
        friend MessageEmissiontestclass;
        friend ExternalEffectMappertestclass;
    public:
        MessageEmission();
        MessageEmission(std::string port_, std::string messageName_, std::string valueType_, std::string givenArgument_);
        //MessageEmission(const MessageEmission& orig);
        virtual ~MessageEmission();
        Message makeMessage();
        const Symbol* getPortSymbol();
    private:
        const Symbol* port;
        const Symbol* messageName;
        const Symbol* valueType;
        std::string givenArgument;
    };
}
#endif	/* MESSAGEEMISSION_H */

