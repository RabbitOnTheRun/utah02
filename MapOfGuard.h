/* 
 * File:   MapOfGuard.h
 * Author: ntanaka
 *
 * Created on 2014/12/09, 0:05
 */

#ifndef MAPOFGUARD_H
#define	MAPOFGUARD_H

#include <map>
#include "Symbol.h"
#include "GuardIF.h"
namespace utah {

    class MapOfGuard {
    public:
        MapOfGuard();
        //MapOfGuard(const MapOfGuard& orig);
        virtual ~MapOfGuard();
        bool judge(const Symbol* guardName, Message& message_, const std::string& argument_);
        void addGuard(GuardFunction function_, std::string argument_);
    private:
        std::map<const Symbol*, GuardIF> mapOfGuard;
    };
}
#endif	/* MAPOFGUARD_H */

