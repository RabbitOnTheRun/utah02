/* 
 * File:   InOutPortMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/11, 23:45
 */

#include <vector>

#include "../Symbol.h"
#include "InOutPortMapper.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    InOutPortMapper::InOutPortMapper() {
    }

    //InPortMapper::InPortMapper(const InPortMapper& orig) {
    //}

    InOutPortMapper::~InOutPortMapper() {
    }

    void InOutPortMapper::create(const picojson::value& obj, std::vector<const utah::Symbol*>& ports) {
        picojson::array arrayObj = PicoJsonIF::toArray(obj);
        for (picojson::value obj2 : arrayObj) {
            ports.push_back(utah::Symbol::create(obj2.to_str()));
        }
    }
}
