/* 
 * File:   StateMachineMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/11, 1:42
 */

#include <vector>
#include "StateMachineMapper.h"

#include "PicoJsonIF.h"
#include "StatePartMapper.h"
#include "TransitionPartMapper.h"
namespace jsonMapper {

    StateMachineMapper::StateMachineMapper() {
    }

    //StateMachineMapper::StateMachineMapper(const StateMachineMapper& orig) {
    //}

    StateMachineMapper::~StateMachineMapper() {
    }

    utah::StateMachine* StateMachineMapper::create(std::string stateMachineName_, std::string threadName_) {
        const picojson::value value = PicoJsonIF::JSONFileToObj("data/" + stateMachineName_ + ".txt");

        utah::StateMachine* stateMachine = new utah::StateMachine(stateMachineName_, threadName_);
        
        std::map<const utah::Symbol*, utah::State*> stateMap;
        StatePartMapper::create(value.get("state"), stateMap);
        
        std::vector<utah::Transition*> transitions;
        TransitionPartMapper::create(value.get("transition"), transitions);
        
        stateMachine->setStateMap(stateMap);
        stateMachine->setTransitions(transitions);
        
        return stateMachine;
    }
}
