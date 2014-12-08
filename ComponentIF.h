/* 
 * File:   ComponentIF.h
 * Author: ntanaka
 *
 * Created on 2014/12/09, 0:44
 */

#ifndef COMPONENTIF_H
#define	COMPONENTIF_H
#include "MapOfGuard.h"
#include "MapOfAction.h"
namespace utah {

    class ComponentIF : public MapOfGuard, public MapOfAction {
    public:
        ComponentIF();
        //ComponentIF(const ComponentIF& orig);
        virtual ~ComponentIF();
    private:

    };
}
#endif	/* COMPONENTIF_H */

