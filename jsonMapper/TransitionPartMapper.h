/* 
 * File:   TransitionPartMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/11, 11:24
 */

#ifndef TRANSITIONPARTMAPPER_H
#define	TRANSITIONPARTMAPPER_H
#include <vector>
#include "picojson.h"
#include "../Transition.h"
namespace jsonMapper {

    class TransitionPartMapper {
    public:
        TransitionPartMapper();
        //TransitionPartMapper(const TransitionPartMapper& orig);
        virtual ~TransitionPartMapper();
        static void create(const picojson::value& obj, std::vector<utah::Transition*>& transitions);
    private:

    };
}
#endif	/* TRANSITIONPARTMAPPER_H */

