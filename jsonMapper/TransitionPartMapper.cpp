/* 
 * File:   TransitionPartMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/11, 11:24
 */

#include "TransitionMapper.h"
#include "TransitionPartMapper.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    TransitionPartMapper::TransitionPartMapper() {
    }

    //TransitionPartMapper::TransitionPartMapper(const TransitionPartMapper& orig) {
    //}

    TransitionPartMapper::~TransitionPartMapper() {
    }

    void TransitionPartMapper::create(const picojson::value& obj, std::vector<utah::Transition*>& transitions) {
        picojson::array arrayObj = PicoJsonIF::toArray(obj);
        for (picojson::value obj2 : arrayObj) {
            utah::Transition* newTransition = TransitionMapper::create(obj2);
            transitions.push_back(newTransition);
        }
    }
}