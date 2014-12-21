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

    //typedef std::function<Result(ComponentSample1&, Message&, const std::string&) > ActionFunction2;

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
        //ActionFunction2 func4 = &ComponentSample1::receiveValue;
        this->addAction("success", &ComponentSample1::success);
        this->addAction("getSpeedFunction", &ComponentSample1::success);
        this->addAction("setThrottle", &ComponentSample1::success);

        this->addAction("createValue", &ComponentSample1::createValue);
        this->addAction("receiveValue", &ComponentSample1::receiveValue);
    }

    Result ComponentSample1::success(Message& message_, std::string argument_) {
        LOGFUNC;
        Result retResult;
        retResult.resultCode = Symbol::create("success");
        return retResult;
    }

    Result ComponentSample1::createValue(Message& message_, std::string argument_) {
        LOGFUNC;
        Result retResult;
        retResult.resultCode = Symbol::create("success");
        retResult.value = std::shared_ptr<Value>(new ValuePair("xyz", "lmn"));

        return retResult;
    }

    Result ComponentSample1::receiveValue(Message& message_, std::string argument_) {
        LOGVALUE("message ", message_.getMessageName()->getName());

        Result retResult;
        retResult.resultCode = Symbol::create("success");
        std::shared_ptr<ValuePair> vp = std::dynamic_pointer_cast<ValuePair>(message_.getValue());
        LOGVALUE("value first ", vp->value.first);
        LOGVALUE("value second ", vp->value.second);
        return retResult;
    }

    Result ComponentSample1::execute(const Symbol* nameOfAction, Message& message_, const std::string& argument_) {
        ActionFunction2 func = actionMap[nameOfAction];
        return func(*this, message_, argument_);
    }

    void ComponentSample1::addAction(const std::string& name_, ActionFunction2 func_) {
        actionMap[Symbol::create(name_)] = func_;
    }
}