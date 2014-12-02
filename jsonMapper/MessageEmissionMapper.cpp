/* 
 * File:   MessageEmissionMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 22:00
 */

#include "MessageEmissionMapper.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    MessageEmissionMapper::MessageEmissionMapper() {
    }

    //MessageEmissionMapper::MessageEmissionMapper(const MessageEmissionMapper& orig) {
    //}

    MessageEmissionMapper::~MessageEmissionMapper() {
    }

    utah::MessageEmission MessageEmissionMapper::create(const picojson::value& obj) {
        std::string port = PicoJsonIF::getString(obj, "port");
        std::string messageName = PicoJsonIF::getString(obj, "messageName");
        std::string argType = PicoJsonIF::getString(obj, "argType");
        std::string givenArgument = PicoJsonIF::getString(obj, "givenArgument");
        utah::MessageEmission result(port, messageName,argType ,givenArgument );
        return result;
    }
}