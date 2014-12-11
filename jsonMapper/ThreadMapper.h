/* 
 * File:   ThreadMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/11, 1:41
 */

#ifndef THREADMAPPER_H
#define	THREADMAPPER_H

#include <string>
#include "../Thread.h"
#include "picojson.h"

namespace jsonMapper {

    class ThreadMapper {
    public:
        ThreadMapper();
        //ThreadMapper(const ThreadMapper& orig);
        virtual ~ThreadMapper();
        static utah::Thread* create(const picojson::value& obj);
    private:

    };
}
#endif	/* THREADMAPPER_H */

