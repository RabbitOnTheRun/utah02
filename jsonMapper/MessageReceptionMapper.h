/* 
 * File:   MessageReceptionMapper.h
 * Author: ntanaka
 *
 * Created on 2014/11/30, 0:58
 */

#ifndef MESSAGERECEPTIONMAPPER_H
#define	MESSAGERECEPTIONMAPPER_H

#include "../MessageReception.h"
#include "picojson.h"

namespace jsonMapper {

    class MessageReceptionMapper {
    public:
        MessageReceptionMapper();
        //MessageReceptionMapper(const MessageReceptionMapper& orig);
        virtual ~MessageReceptionMapper();
        static utah::MessageReception create(const picojson::value& obj);
    private:

    };
}

#endif	/* MESSAGERECEPTIONMAPPER_H */

