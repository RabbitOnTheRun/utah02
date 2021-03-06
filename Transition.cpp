/* 
 * File:   Transition.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/28, 20:56
 */

#include "Transition.h"
#include "Message.h"
#include "Log.h"

namespace utah {

    Transition::Transition(const std::string from_, const std::string to_, MessageReception messageReception_) :
    from(Symbol::create(from_)), to(Symbol::create(to_)), messageReception(messageReception_), guard(Guard("NULL", "NULL")), methodInvocation(MethodInvocation("NULL", "NULL")) {
    }

    Transition::Transition(const Symbol* from_, const Symbol* to_, MessageReception messageReception_) :
    from(from_), to(to_), messageReception(messageReception_), guard(Guard("NULL", "NULL")), methodInvocation(MethodInvocation("NULL", "NULL")) {
    }

    Transition::Transition(const std::string from_, const std::string to_, MessageReception messageReception_ , Guard guard_, MethodInvocation methodInvocation_) :
    from(Symbol::create(from_)), to(Symbol::create(to_)), messageReception(messageReception_), guard(guard_), methodInvocation(methodInvocation_) {
    }

    Transition::Transition(const Symbol* from_, const Symbol* to_, MessageReception messageReception_, Guard guard_, MethodInvocation methodInvocation_) :
    from(from_), to(to_), messageReception(messageReception_), guard(guard_), methodInvocation(methodInvocation_) {
    }

    //Transition::Transition(const Transition& orig) {
    //}

    Transition::~Transition() {
    }

    void Transition::setResultHandling(ResultHandling resultHandling_) {
        resultHandling = resultHandling_;
    }

    void Transition::addExternalEffect(ExternalEffect externalEffect) {
        resultHandling.addExternalEffect(externalEffect);
    }

    bool Transition::ifMatch(Message& message_, ComponentIF* component_) {
        LOGFUNC;
        if (messageReception.ifMatch(message_) && guard.ifMatch(message_, component_)) {
            return true;
        } else {
            return false;
        }
    }

    Result Transition::execute(Message& message_, ComponentIF* component_) {
        LOGFUNC;
        return methodInvocation.execute(message_, component_);
    }

    void Transition::generateEmission(Result result_, Symbol* threadName_, Symbol* stateMachineName_, std::vector<MessageWithOutPort>& resultMessage) {
        LOGFUNC;
        resultHandling.generateEmission(result_, threadName_, stateMachineName_, resultMessage);
    }

    const Symbol* Transition::getNextState() {
        LOGFUNC;
        return to;
    }

    const Symbol* Transition::getFrom() {
        return from;
    }

    const Symbol* Transition::getTo() {
        return to;
    }
}