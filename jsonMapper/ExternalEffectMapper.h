/* 
 * File:   ExternalEffectMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 22:27
 */

#ifndef EXTERNALEFFECTMAPPER_H
#define	EXTERNALEFFECTMAPPER_H
#include "../ExternalEffect.h"
#include "picojson.h"

namespace jsonMapper {

    class ExternalEffectMapper {
    public:
        ExternalEffectMapper();
        //ExternalEffectMapper(const ExternalEffectMapper& orig);
        virtual ~ExternalEffectMapper();
        static utah::ExternalEffect create(const picojson::value& obj);
    private:

    };
}
#endif	/* EXTERNALEFFECTMAPPER_H */

