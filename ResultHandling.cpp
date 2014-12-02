/* 
 * File:   ResultHandling.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 23:00
 */

#include "ResultHandling.h"

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
}