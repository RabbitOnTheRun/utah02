/* 
 * File:   MapOfGuard.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/09, 0:05
 */

#include "MapOfGuard.h"

namespace utah {

    MapOfGuard::MapOfGuard() {
    }

    //MapOfGuard::MapOfGuard(const MapOfGuard& orig) {
    //}

    MapOfGuard::~MapOfGuard() {
    }

    bool MapOfGuard::judge(Symbol* guardName, Message& message_, std::string& argument_) {
        return ( mapOfGuard[guardName].judge(message_, argument_));
    }

    void MapOfGuard::addGuard(GuardFunction guardFunction, std::string name) {
        GuardIF guardIF(name);
        guardIF.setGuardFunction(guardFunction);
        mapOfGuard[Symbol::create(name)] = guardIF;
    }
}