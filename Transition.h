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
#include "tests/Transitiontestclass.h"
#include "tests/TransitionMappertestclass.h"
#include "tests/Statetestclass.h"

namespace utah {

    class Transition {
        friend Transitiontestclass;
        friend TransitionMappertestclass;
        friend Statetestclass;
    public:
        Transition(const std::string from_, const std::string to_);
        Transition(const Symbol* from_, const Symbol* to_);
        //const MessageReception& messageReception_);
        //Transition(const Transition& orig);
        virtual ~Transition();
        void setMessageReception(MessageReception messageReception_);
        void setGuard(Guard guard_);
        void setMethodInvocation(MethodInvocation methodInvocation_);
        void addExternalEffect(ExternalEffect externalEffect);
        bool ifMatch(Message& message_, ComponentIF* component_);
        Result execute(Message& message_, ComponentIF* component_);
        void generateEmission(Result result_, Symbol* threadName_, Symbol* stateMachineName_, std::vector<MessageWithOutPort>& resultMessage ) ;
    private:
        //const Symbol& name;
        const Symbol* from;
        const Symbol* to;
        MessageReception messageReception;
        Guard guard;
        MethodInvocation methodInvocation;
        ResultHandling resultHandling;
        //message
    };
}
#endif	/* TRANSITION_H */

