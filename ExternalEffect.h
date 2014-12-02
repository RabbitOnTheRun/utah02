/* 
 * File:   ExternalEffect.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 22:19
 */

#ifndef EXTERNALEFFECT_H
#define	EXTERNALEFFECT_H

#include <string>
#include "Symbol.h"
#include "MessageEmission.h"
#include "tests/ExternalEffectMappertestclass.h"

namespace utah {

    class ExternalEffect {
        friend ExternalEffectMappertestclass;
    public:
        ExternalEffect();
        ExternalEffect(std::string resultCode_);
        //ExternalEffect(const ExternalEffect& orig);
        virtual ~ExternalEffect();
        void setMessageEmission(MessageEmission messageEmission_);
    private:
        Symbol* resultCode;
        MessageEmission messageEmission;
    };
}
#endif	/* EXTERNALEFFECT_H */

