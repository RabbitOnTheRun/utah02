/* 
 * File:   ResultHandlingMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 23:07
 */

#ifndef RESULTHANDLINGMAPPER_H
#define	RESULTHANDLINGMAPPER_H

#include "../Transition.h"
#include "../ResultHandling.h"
#include "picojson.h"
namespace jsonMapper {

    class ResultHandlingMapper {
    public:
        ResultHandlingMapper();
        //ResultHandlingMapper(const ResultHandlingMapper& orig);
        virtual ~ResultHandlingMapper();
        static void create(const picojson::value& obj, utah::ResultHandling& resultHandling_);
        static void create(const picojson::array& obj, utah::Transition& transition_);
    private:

    };
}
#endif	/* RESULTHANDLINGMAPPER_H */

