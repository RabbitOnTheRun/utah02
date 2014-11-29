/* 
 * File:   StateMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/29, 22:43
 */

#include "StateMapper.h"
#include "PicoJsonIF.h"
namespace jsonMapper {

    StateMapper::StateMapper() {
    }

    //StateMapper::StateMapper(const StateMapper& orig) {
    //}

    StateMapper::~StateMapper() {
    }

    utah::State* StateMapper::create(const picojson::value& obj) {
        picojson::array arrayObj = PicoJsonIF::toArray(obj);
        picojson::value& name = arrayObj[0];
        utah::State* thisState = new utah::State(name.get<std::string>());

        picojson::value& childrenArray = arrayObj[1];
        for (picojson::value obj2 : PicoJsonIF::toArray(childrenArray)) {
            utah::State* childState = StateMapper::create(obj2);
            thisState->addChild(childState);
            childState->setParent(thisState);
        }
        return thisState;
    }
}