/* 
 * File:   MethodInvocationMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 20:50
 */

#ifndef METHODINVOCATIONMAPPER_H
#define	METHODINVOCATIONMAPPER_H

#include "../MethodInvocation.h"
#include "picojson.h"

namespace jsonMapper {

    class MethodInvocationMapper {
    public:
        MethodInvocationMapper();
        //MethodInvocationMapper(const MethodInvocationMapper& orig);
        virtual ~MethodInvocationMapper();
        static utah::MethodInvocation create(const picojson::value& obj);
    private:

    };
}
#endif	/* METHODINVOCATIONMAPPER_H */

