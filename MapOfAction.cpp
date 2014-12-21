/* 
 * File:   MapOfAction.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/09, 0:35
 */
#include <assert.h>
#include "Sym.h"
#include "MapOfAction.h"

namespace utah {

    MapOfAction::MapOfAction() {
    }

    //MapOfAction::MapOfAction(const MapOfAction& orig) {
    //}

    MapOfAction::~MapOfAction() {
    }

    Result MapOfAction::execute(const Symbol* nameOfAction, Message& message_, const std::string& argument_) {
        assert(nameOfAction != Sym::Null);
        return (mapOfAction[nameOfAction].execute(message_, argument_));
    }

    void MapOfAction::addAction(ActionFunction function_, std::string name) {
        ActionIF actionIF(name, function_);
        //actionIF.setActionFunction(function_);
        mapOfAction[Symbol::create(name)] = actionIF;
    }

    /*void MapOfAction::addAction(ActionFunction2 function2_, std::string name) {
        ActionIF actionIF(name, function2_);
        //actionIF.setActionFunction(function_);
        mapOfAction[Symbol::create(name)] = actionIF;
    }*/

}
