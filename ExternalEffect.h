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
#include "MessageWithOutPort.h"

namespace utah {

    class ExternalEffect {
    public:
        ExternalEffect();
        ExternalEffect(std::string resultCode_);
        //ExternalEffect(const ExternalEffect& orig);
        virtual ~ExternalEffect();
        void setMessageEmission(MessageEmission messageEmission_);
        Symbol* getResultCode();
        MessageEmission getMessageEmission();
        Message generateMessage();
        const Symbol* getPort();
    private:
        Symbol* resultCode;
        MessageEmission messageEmission;
    };
}
#endif	/* EXTERNALEFFECT_H */

