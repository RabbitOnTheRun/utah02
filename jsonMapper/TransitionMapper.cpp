/* 
 * File:   TransitionMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/29, 21:16
 */
#include "PicoJsonIF.h"
#include "TransitionMapper.h"

namespace jsonMapper {

    TransitionMapper::TransitionMapper() {
    }

    //TransitionMapper::TransitionMapper(const TransitionMapper& orig) {
    //}

    TransitionMapper::~TransitionMapper() {
    }

    utah::Transition* TransitionMapper::create(const picojson::value& obj) {
        std::string strFrom = PicoJsonIF::getString(obj, "from");
        std::string strTo = PicoJsonIF::getString(obj, "to");

        utah::Transition* result = new utah::Transition(strFrom, strTo);
        return result;
    }
}