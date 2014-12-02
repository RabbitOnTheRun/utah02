/* 
 * File:   MessageEmissionMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 22:00
 */

#ifndef MESSAGEEMISSIONMAPPER_H
#define	MESSAGEEMISSIONMAPPER_H

#include "../MessageEmission.h"
#include "picojson.h"

namespace jsonMapper {

    class MessageEmissionMapper {
    public:
        MessageEmissionMapper();
        //MessageEmissionMapper(const MessageEmissionMapper& orig);
        virtual ~MessageEmissionMapper();
        static utah::MessageEmission create(const picojson::value& obj);
    private:

    };
}
#endif	/* MESSAGEEMISSIONMAPPER_H */

