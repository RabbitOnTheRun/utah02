/* 
 * File:   PortMapMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/16, 1:48
 */

#ifndef PORTMAPMAPPER_H
#define	PORTMAPMAPPER_H

#include <string>
#include <utility>
#include "../PortMap.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    class PortMapMapper {
    public:
        PortMapMapper();
        //PortMapMapper(const PortMapMapper& orig);
        virtual ~PortMapMapper();
        utah::PortMap create(const picojson::value& obj);

        utah::InPort createInPort(const picojson::value& obj);
        utah::OutPort createOutPort(const picojson::value& obj);
        //std::pair<utah::OutPort, utah::InPort> createPortMap(const picojson::value& obj);
    private:
    };
}
#endif	/* PORTMAPMAPPER_H */

