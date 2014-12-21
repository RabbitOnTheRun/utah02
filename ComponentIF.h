/* 
 * File:   ComponentIF.h
 * Author: ntanaka
 *
 * Created on 2014/12/09, 0:44
 */

#ifndef COMPONENTIF_H
#define	COMPONENTIF_H
#include "MapOfGuard.h"
#include "Result.h"
//#include "MapOfAction.h"
namespace utah {

    class ComponentIF : public MapOfGuard {
    public:
        ComponentIF();
        //ComponentIF(const ComponentIF& orig);
        virtual ~ComponentIF();
        virtual Result execute(const Symbol* nameOfAction, Message& message_, const std::string& argument_) = 0;
    private:

    };
}
#endif	/* COMPONENTIF_H */

