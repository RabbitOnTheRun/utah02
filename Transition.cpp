/* 
 * File:   Transition.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/28, 20:56
 */

#include "Transition.h"
#include "Message.h"

namespace utah {

    Transition::Transition(const std::string from_, const std::string to_) :
    //const MessageReception& messageReception_) :
    from(Symbol::create(from_)), to(Symbol::create(to_)) {
        //messageReception(messageReception_) {
    }

    Transition::Transition(const Symbol* from_, const Symbol* to_) : from(from_), to(to_) {
    }


    //Transition::Transition(const Transition& orig) {
    //}

    Transition::~Transition() {
    }

    void Transition::setMessageReception(MessageReception messageReception_) {
        messageReception = messageReception_;
    }

    void Transition::setGuard(Guard guard_) {
        guard = guard_;
    }

    void Transition::setMethodInvocation(MethodInvocation methodInvocation_) {
        methodInvocation = methodInvocation_;
    }

    void Transition::addExternalEffect(ExternalEffect externalEffect) {
        resultHandling.addExternalEffect(externalEffect);
    }

    bool Transition::ifMatch(Message& message_, ComponentIF* component_) {
        if (messageReception.ifMatch(message_) && guard.ifMatch(message_, component_)) {
            return true;
        } else {
            return false;
        }
    }
    Result Transition::execute(Message& message_, ComponentIF* component_){
        methodInvocation.execute(message_, component_);
    }
    void Transition::generateEmission(Result result_, Symbol* threadName_, Symbol* stateMachineName_, std::vector<MessageWithOutPort>& resultMessage ){
        resultHandling.generateEmission(result_, threadName_, stateMachineName_, resultMessage);
    }
}