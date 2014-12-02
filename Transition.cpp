/* 
 * File:   Transition.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/28, 20:56
 */

#include "Transition.h"

namespace utah {

    Transition::Transition(const std::string from_, const std::string to_) :
    //const MessageReception& messageReception_) :
    from(Symbol::create(from_)), to(Symbol::create(to_)) {
        //messageReception(messageReception_) {
    }

    Transition::Transition(Symbol* from_, Symbol* to_) : from(from_), to(to_) {
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
}