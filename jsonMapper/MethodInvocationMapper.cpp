/* 
 * File:   MethodInvocationMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 20:50
 */

#include "MethodInvocationMapper.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    MethodInvocationMapper::MethodInvocationMapper() {
    }

    //MethodInvocationMapper::MethodInvocationMapper(const MethodInvocationMapper& orig) {
    //}

    MethodInvocationMapper::~MethodInvocationMapper() {
    }

    utah::MethodInvocation MethodInvocationMapper::create(const picojson::value& obj) {
        std::string methodName = PicoJsonIF::getString(obj, "methodName");
        std::string methodArgument = PicoJsonIF::getString(obj, "methodArgument");
        utah::MethodInvocation result(methodName, methodArgument);
        return result;
    }

}