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
#include "InOutPortMapper.h"
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

        setTransitionToState(transitions, stateMap);

        std::vector<const utah::Symbol*> inPorts;
        InOutPortMapper::create(value.get("inPort"), inPorts);

        std::vector<const utah::Symbol*> outPorts;
        InOutPortMapper::create(value.get("outPort"), outPorts);

        stateMachine->setStateMap(stateMap);
        stateMachine->setTransitions(transitions);
        stateMachine->setInPorts(inPorts);
        stateMachine->setOutPorts(outPorts);

        return stateMachine;
    }

    void StateMachineMapper::setTransitionToState(
        std::vector<utah::Transition*>& transitions_, 
        std::map<const utah::Symbol*, utah::State*>& stateMap_) {

        for (utah::Transition* transition : transitions_) {
            const utah::Symbol* from = transition->getFrom();
            utah::State* state = stateMap_[from];
            state->addTranstion(transition);
        }
    }
}
