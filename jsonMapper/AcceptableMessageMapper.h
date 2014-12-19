/* 
 * File:   AcceptableMessageMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/20, 1:56
 */

#ifndef ACCEPTABLEMESSAGEMAPPER_H
#define	ACCEPTABLEMESSAGEMAPPER_H

#include <vector>

#include "PicoJsonIF.h"
#include "../Symbol.h"

namespace jsonMapper {

    class AcceptableMessageMapper {
    public:
        AcceptableMessageMapper();
        //AcceptableMessageMapper(const AcceptableMessageMapper& orig);
        virtual ~AcceptableMessageMapper();

        static void create(const picojson::value& obj, std::vector<const utah::Symbol*>& acceptableMessage_);
    private:

    };
}
#endif	/* ACCEPTABLEMESSAGEMAPPER_H */

