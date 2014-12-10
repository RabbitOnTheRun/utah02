/* 
 * File:   StatePartMapper.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 23:56
 */

#ifndef STATEPARTMAPPER_H
#define	STATEPARTMAPPER_H
#include <map>
#include "../State.h"
#include "picojson.h"

namespace jsonMapper {

    class StatePartMapper {
    public:
        StatePartMapper();
        //StatePartMapper(const StatePartMapper& orig);
        virtual ~StatePartMapper();
        static void create2(const picojson::value& obj, std::map<std::string, utah::State*>& stateMap);
        static void create(const picojson::value& obj, std::map<const utah::Symbol*, utah::State*>& stateMap);
    private:

    };
}
#endif	/* STATEPARTMAPPER_H */

