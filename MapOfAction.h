/* 
 * File:   MapOfAction.h
 * Author: ntanaka
 *
 * Created on 2014/12/09, 0:35
 */

#ifndef MAPOFACTION_H
#define	MAPOFACTION_H

#include "Symbol.h"
#include "ActionIF.h"
#include "Result.h"

namespace utah {

    class MapOfAction {
    public:
        MapOfAction();
        //MapOfAction(const MapOfAction& orig);
        virtual ~MapOfAction();
        Result execute(const Symbol* nameOfAction, Message& message_, const std::string& argument_);
        void addAction(ActionFunction function_, std::string name);

    private:
        std::map<const Symbol*, ActionIF> mapOfAction;
    };
}
#endif	/* MAPOFACTION_H */
