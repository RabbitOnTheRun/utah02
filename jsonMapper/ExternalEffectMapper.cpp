/* 
 * File:   ExternalEffectMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 22:27
 */

#include "ExternalEffectMapper.h"
#include "MessageEmissionMapper.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    ExternalEffectMapper::ExternalEffectMapper() {
    }

    //ExternalEffectMapper::ExternalEffectMapper(const ExternalEffectMapper& orig) {
    //}

    ExternalEffectMapper::~ExternalEffectMapper() {
    }

    utah::ExternalEffect ExternalEffectMapper::create(const picojson::value& obj) {
        std::string resultCode = PicoJsonIF::getString(obj, "resultCode");
        utah::ExternalEffect result(resultCode);
        //utah::MessageEmission result(resultCode, messageName, argType ,givenArgument );
        
        result.setMessageEmission(MessageEmissionMapper::create(
                PicoJsonIF::getObject(obj, "messageEmission")
                ));
        
        return result;
    }
}