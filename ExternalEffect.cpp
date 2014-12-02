/* 
 * File:   ExternalEffect.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 22:19
 */

#include "Symbol.h"
#include "ExternalEffect.h"

namespace utah {

    ExternalEffect::ExternalEffect() {
    }

    ExternalEffect::ExternalEffect(std::string resultCode_) : resultCode(Symbol::create(resultCode_))
    {

    }
    //ExternalEffect::ExternalEffect(const ExternalEffect& orig) {
    //}

    ExternalEffect::~ExternalEffect() {
    }

    void ExternalEffect::setMessageEmission(MessageEmission messageEmission_) {
        messageEmission = messageEmission_;
    }
}