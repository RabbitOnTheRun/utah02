/* 
 * File:   Transition.h
 * Author: ntanaka
 *
 * Created on 2014/11/28, 20:56
 */

#ifndef TRANSITION_H
#define	TRANSITION_H

#include "Symbol.h"
#include "MessageReception.h"
#include "Guard.h"
#include "ResultHandling.h"
#include "MethodInvocation.h"
#include "ExternalEffect.h"
#include "ComponentIF.h"
#include "Result.h"
#include "MessageWithOutPort.h"

namespace utah {

    class Transition {
    public:
        Transition(const Symbol* from_, const Symbol* to_, MessageReception messageReception_);
        Transition(const std::string from_, const std::string to_, MessageReception messageReception_);
        Transition(const Symbol* from_, const Symbol* to_, MessageReception messageReception_, Guard guard_, MethodInvocation methodInvocation_);
        Transition(const std::string from_, const std::string to_, MessageReception messageReception_, Guard guard_, MethodInvocation methodInvocation_);

        virtual ~Transition();

        void setResultHandling(ResultHandling resultHandling_);
        void addExternalEffect(ExternalEffect externalEffect);
        bool ifMatch(Message& message_, ComponentIF* component_);
        Result execute(Message& message_, ComponentIF* component_);
        void generateEmission(Result result_, Symbol* threadName_, Symbol* stateMachineName_, std::vector<MessageWithOutPort>& resultMessage);
        const Symbol* getNextState();
        const Symbol* getFrom();
        const Symbol* getTo();
    private:
        //const Symbol& name;
        const Symbol* from;
        const Symbol* to;
        const MessageReception messageReception;
        const Guard guard;
        const MethodInvocation methodInvocation;
        ResultHandling resultHandling;
    };
}
#endif	/* TRANSITION_H */

