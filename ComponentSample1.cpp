/* 
 * File:   ComponentSample1.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/13, 23:57
 */

#include <iostream>
#include "ComponentSample1.h"
#include "Log.h"
#include "ValuePair.h"

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
        this->addAction("success", &ComponentSample1::success);
        this->addAction("getSpeedFunction", &ComponentSample1::success);
        this->addAction("setThrottle", &ComponentSample1::success);

        this->addAction("createValue", &ComponentSample1::createValue);
        this->addAction("receiveValue", &ComponentSample1::receiveValue);
    }

    Result ComponentSample1::success(Message& message_, std::string argument_) {
        LOGFUNC;
        return Result::success;
    }

    Result ComponentSample1::createValue(Message& message_, std::string argument_) {
        LOGFUNC;
        Result retResult = Result::success;
        retResult.value = std::shared_ptr<ValuePair>(new ValuePair("xyz", "lmn"));
        return retResult;
    }

    Result ComponentSample1::receiveValue(Message& message_, std::string argument_) {
        LOGVALUE("message ", message_.getMessageName()->getName());
        std::shared_ptr<ValuePair> vp = std::dynamic_pointer_cast<ValuePair>(message_.getValue());
        LOGVALUE("value first ", vp->value.first);
        LOGVALUE("value second ", vp->value.second);
        return Result::success;
    }

    Result ComponentSample1::execute(const Symbol* nameOfAction, Message& message_, const std::string& argument_) {
        ActionFunction func = actionMap[nameOfAction];
        return func(*this, message_, argument_);
    }

    void ComponentSample1::addAction(const std::string& name_, ActionFunction func_) {
        actionMap[Symbol::create(name_)] = func_;
    }
}