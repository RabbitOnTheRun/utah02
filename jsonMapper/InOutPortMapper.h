/* 
 * File:   InOutPortMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/11, 23:45
 */

#ifndef INOUTPORTMAPPER_H
#define	INOUTPORTMAPPER_H

#include <vector>
#include "../Symbol.h"
#include "picojson.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    class InOutPortMapper {
    public:
        InOutPortMapper();
        //InPortMapper(const InPortMapper& orig);
        virtual ~InOutPortMapper();
        static void create(const picojson::value& obj, std::vector<const utah::Symbol*>& ports);
    private:

    };
}
#endif	/* INOUTPORTMAPPER_H */

