/* 
 * File:   StateMapper.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 22:43
 */

#ifndef STATEMAPPER_H
#define	STATEMAPPER_H

#include "../State.h"
#include "picojson.h"

namespace jsonMapper {

    class StateMapper {
    public:
        StateMapper();
        //StateMapper(const StateMapper& orig);
        virtual ~StateMapper();
        static utah::State* create(const picojson::value& obj, std::map<const utah::Symbol*, utah::State*>& stateMap);
    private:

    };
}
#endif	/* STATEMAPPER_H */

