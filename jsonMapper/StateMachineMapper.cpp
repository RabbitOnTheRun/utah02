/* 
 * File:   StateMachineMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/11, 1:42
 */

#include "StateMachineMapper.h"

#include "PicoJsonIF.h"
#include "StatePartMapper.h"
namespace jsonMapper {

    StateMachineMapper::StateMachineMapper() {
    }

    //StateMachineMapper::StateMachineMapper(const StateMachineMapper& orig) {
    //}

    StateMachineMapper::~StateMachineMapper() {
    }

    utah::StateMachine* StateMachineMapper::create(std::string stateMachineName_) {
        const picojson::value value = PicoJsonIF::JSONFileToObj(stateMachineName_ + ".txt");

        std::map<const utah::Symbol*, utah::State*> stateMap;
        StatePartMapper::create(value.get("state"), stateMap);
        
        
    }
}
