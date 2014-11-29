/* 
 * File:   TransitionMapper.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 21:16
 */

#ifndef TRANSITIONMAPPER_H
#define	TRANSITIONMAPPER_H

#include "../Transition.h"
#include "picojson.h"

namespace jsonMapper {

    class TransitionMapper {
    public:
        TransitionMapper();
        //TransitionMapper(const TransitionMapper& orig);
        virtual ~TransitionMapper();
        static utah::Transition* create(const picojson::value& obj);
    private:

    };
}
#endif	/* TRANSITIONMAPPER_H */

