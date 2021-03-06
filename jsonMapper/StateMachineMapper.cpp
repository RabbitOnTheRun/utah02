/* 
 * File:   StateMachineMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/11, 1:42
 */

#include <vector>
#include "StateMachineMapper.h"

#include "../Sym.h"
#include "PicoJsonIF.h"
#include "StatePartMapper.h"
#include "TransitionPartMapper.h"
#include "InOutPortMapper.h"
#include "AcceptableMessageMapper.h"
namespace jsonMapper {

    StateMachineMapper::StateMachineMapper() {
    }

    //StateMachineMapper::StateMachineMapper(const StateMachineMapper& orig) {
    //}

    StateMachineMapper::~StateMachineMapper() {
    }

    utah::StateMachine* StateMachineMapper::create(std::string stateMachineName_, std::string threadName_, std::string path_) {
        const picojson::value value = PicoJsonIF::JSONFileToObj(path_ + "/" + stateMachineName_ + ".txt");

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

        std::vector<const utah::Symbol*> acceptableMessage;
        AcceptableMessageMapper::create(value.get("acceptableMessage"), acceptableMessage);

        stateMachine->setStateMap(stateMap);
        stateMachine->setTransitions(transitions);
        stateMachine->setInPorts(inPorts);
        stateMachine->setOutPorts(outPorts);
        stateMachine->setAcceptableMessage(acceptableMessage);

        stateMachine->setCurrent("start"); // should use symbol

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
