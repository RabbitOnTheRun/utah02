/* 
 * File:   ResultHandlingMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 23:07
 */

#include "ResultHandlingMapper.h"
#include "ExternalEffectMapper.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    ResultHandlingMapper::ResultHandlingMapper() {
    }

    //ResultHandlingMapper::ResultHandlingMapper(const ResultHandlingMapper& orig) {
    //}

    ResultHandlingMapper::~ResultHandlingMapper() {
    }

    void ResultHandlingMapper::create(const picojson::value& obj, utah::ResultHandling& resultHandling_) {
        picojson::array arrayObj = PicoJsonIF::toArray(obj);
        for (picojson::value obj2 : arrayObj) {
            utah::ExternalEffect newExternalEffexct = ExternalEffectMapper::create(obj2);
            resultHandling_.addExternalEffect(newExternalEffexct);
        }
    } //delete

    void ResultHandlingMapper::create(const picojson::array& arrayObj, utah::Transition& transition_) {
        //picojson::array arrayObj = PicoJsonIF::toArray(obj);
        for (picojson::value obj2 : arrayObj) {
            utah::ExternalEffect newExternalEffexct = ExternalEffectMapper::create(obj2);
            transition_.addExternalEffect(newExternalEffexct);
        }
    }
}