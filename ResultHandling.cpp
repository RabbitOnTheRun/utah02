/* 
 * File:   ResultHandling.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 23:00
 */

#include "ResultHandling.h"
#include "Result.h"
#include "Sym.h"

namespace utah {

    ResultHandling::ResultHandling() {
    }

    //ResultHandling::ResultHandling(const ResultHandling& orig) {
    //}

    ResultHandling::~ResultHandling() {
    }

    void ResultHandling::addExternalEffect(ExternalEffect externalEffect_) {
        externalEffects.push_back(externalEffect_);
    }

    void ResultHandling::generateEmission(Result result_, Symbol* threadName_, Symbol* stateMachineName_, std::vector<MessageWithOutPort>& resultMessage) {
        //std::vector<MessageWithOutPort> out;
        for (ExternalEffect externalEffect : externalEffects) {
            if (result_.resultCode == externalEffect.getResultCode() ||
                    result_.resultCode == Sym::null ||
                    Sym::null == externalEffect.getResultCode()) {

                Message message(externalEffect.generateMessage());
                message.setValue(result_.value);
                OutPort outPort(externalEffect.getPort() , stateMachineName_, threadName_);
                
                //    Port(const Symbol* portName_, const Symbol* stateMachine, const Symbol* thread_);
                MessageWithOutPort messageWithOutPort(message, outPort);
                resultMessage.push_back(messageWithOutPort);
            }
        }
        //return out;
    }

    ExternalEffect ResultHandling::getExternalEffect(int i) {
        return externalEffects[i];
    }
}