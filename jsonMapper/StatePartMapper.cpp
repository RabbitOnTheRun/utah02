/* 
 * File:   StatePartMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/29, 23:56
 */

#include "StatePartMapper.h"
#include "PicoJsonIF.h"
#include "StateMapper.h"

namespace jsonMapper {

    StatePartMapper::StatePartMapper() {
    }

    //StatePartMapper::StatePartMapper(const StatePartMapper& orig) {
    //}

    StatePartMapper::~StatePartMapper() {
    }

    void StatePartMapper::create2(const picojson::value& obj, std::map<std::string, utah::State*>& stateMap) {
        picojson::array arrayObj = PicoJsonIF::toArray(obj);
        for (picojson::value obj2 : arrayObj) {
            utah::State* newState = StateMapper::create(obj2);
            stateMap[newState->getNameSymbol()->getName()] = newState;
        }
    }

    void StatePartMapper::create(const picojson::value& obj, std::map<const utah::Symbol*, utah::State*>& stateMap) {
        picojson::array arrayObj = PicoJsonIF::toArray(obj);
        for (picojson::value obj2 : arrayObj) {
            utah::State* newState = StateMapper::create(obj2);
            stateMap[newState->getNameSymbol()] = newState;
        }
    }
}