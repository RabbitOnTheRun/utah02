/* 
 * File:   AcceptableMessageMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/20, 1:57
 */

#include "AcceptableMessageMapper.h"

namespace jsonMapper {

    AcceptableMessageMapper::AcceptableMessageMapper() {
    }

    //AcceptableMessageMapper::AcceptableMessageMapper(const AcceptableMessageMapper& orig) {
    //}

    AcceptableMessageMapper::~AcceptableMessageMapper() {
    }

    void AcceptableMessageMapper::create(const picojson::value& obj, std::vector<const utah::Symbol*>& acceptableMessage_) {
        picojson::array arrayObj = PicoJsonIF::toArray(obj);
        for (picojson::value obj2 : arrayObj) {
            acceptableMessage_.push_back(utah::Symbol::create(obj2.to_str()));
        }
    }

}