/* 
 * File:   StateMachineMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/11, 1:42
 */

#ifndef STATEMACHINEMAPPER_H
#define	STATEMACHINEMAPPER_H

#include "../StateMachine.h"

namespace jsonMapper {

    class StateMachineMapper {
    public:
        StateMachineMapper();
        //StateMachineMapper(const StateMachineMapper& orig);
        virtual ~StateMachineMapper();
        static utah::StateMachine* create(std::string name_, std::string threadName_);
    private:

        static void setTransitionToState(
                std::vector<utah::Transition*>& transitions_,
                std::map<const utah::Symbol*, utah::State*>& stateMap_);
    };
}
#endif	/* STATEMACHINEMAPPER_H */

