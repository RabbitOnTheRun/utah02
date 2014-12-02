/* 
 * File:   ResultHandling.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 23:00
 */

#ifndef RESULTHANDLING_H
#define	RESULTHANDLING_H

#include <vector>
#include "ExternalEffect.h"
#include "tests/ResultHandlingtestclass.h"
namespace utah {

    class ResultHandling {
        friend ResultHandlingtestclass;
    public:
        ResultHandling();
        //ResultHandling(const ResultHandling& orig);
        virtual ~ResultHandling();
        void addExternalEffect(ExternalEffect externalEffect);
    private:
        std::vector<ExternalEffect> externalEffects;
    };
}
#endif	/* RESULTHANDLING_H */

