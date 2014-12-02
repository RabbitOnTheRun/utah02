/* 
 * File:   GuardMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 20:02
 */

#ifndef GUARDMAPPER_H
#define	GUARDMAPPER_H

#include "../Guard.h"
#include "picojson.h"

namespace jsonMapper {

    class GuardMapper {
    public:
        GuardMapper();
        //GuardMapper(const GuardMapper& orig);
        virtual ~GuardMapper();
        static utah::Guard create(const picojson::value& obj);
    private:

    };
}
#endif	/* GUARDMAPPER_H */

