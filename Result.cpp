/* 
 * File:   Result.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/09, 0:29
 */

#include "Result.h"

namespace utah {

    //Result::Result() {
    //}

    Result Result::success = Result("success");
    Result Result::error = Result("error");
    Result Result::null = Result("null");

    Result::Result(const Symbol* resultCode_) : resultCode(resultCode_) {

    }

    Result::Result(const std::string resultCode_) :
    resultCode(Symbol::create(resultCode_)) {

    }
    //Result::Result(const Result& orig) {
    //}

    Result::~Result() {
    }
}
