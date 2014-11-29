/* 
 * File:   MessageReceptionMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/30, 0:58
 */

#include "MessageReceptionMapper.h"
#include "PicoJsonIF.h"
namespace jsonMapper {

    MessageReceptionMapper::MessageReceptionMapper() {
    }

    //MessageReceptionMapper::MessageReceptionMapper(const MessageReceptionMapper& orig) {
    //}

    MessageReceptionMapper::~MessageReceptionMapper() {
    }

    utah::MessageReception MessageReceptionMapper::create(const picojson::value& obj) {
        std::string name = PicoJsonIF::getString(obj, "name");
        std::string type = PicoJsonIF::getString(obj, "type");
        utah::MessageReception result(name, type);
        return result;
    }
}