/* 
 * File:   ValuePair.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/21, 0:50
 */

#include "ValuePair.h"

namespace utah {

    ValuePair::ValuePair(std::string first_, std::string second_) :
    value(std::make_pair(first_, second_)) {
    }

    //ValuePair::ValuePair(const ValuePair& orig) {
    //}

    ValuePair::~ValuePair() {
    }
}
