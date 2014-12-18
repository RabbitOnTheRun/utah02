/* 
 * File:   ComponentSample1.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/13, 23:57
 */

#include "ComponentSample1.h"

namespace utah {

    ComponentSample1::ComponentSample1() {
        setupGuard();
        setupAction();
    }

    //ComponentSample1::ComponentSample1(const ComponentSample1& orig) {
    //}

    ComponentSample1::~ComponentSample1() {
    }

    void ComponentSample1::setupGuard() {
        GuardFunction function_ = [](Message& message_, std::string argument_)->bool {
            return true;
        };
        GuardFunction function2_ = [](Message& message_, std::string argument_)->bool {
            return false;
        };

        this->addGuard(function_, "yes");
        this->addGuard(function2_, "no");
    }

    void ComponentSample1::setupAction() {
        ActionFunction function_ = [](Message&, const std::string&)-> Result {
            Result retResult;
            retResult.resultCode = Symbol::create("success");
            return retResult;
        };

        this->addAction(function_, "success");
        this->addAction(function_, "getSpeedFunction");
        this->addAction(function_, "setThrottle");
    }
}
