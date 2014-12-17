/* 
 * File:   GuardMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 20:02
 */

#include "GuardMapper.h"
#include "PicoJsonIF.h"
namespace jsonMapper {

    GuardMapper::GuardMapper() {
    }

    //GuardMapper::GuardMapper(const GuardMapper& orig) {
    //}

    GuardMapper::~GuardMapper() {
    }

    utah::Guard GuardMapper::create(const picojson::value& obj) {
        std::string name = PicoJsonIF::getString(obj, "name");
        std::string arg = PicoJsonIF::getString(obj, "arg");
        utah::Guard result(name, arg);
        return result;
    }
}