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
        ActionFunction function_ = [](Message&, const std::string&)-> Result {
            Result retResult;
            retResult.resultCode = Symbol::create("success");
            return retResult;
        };

        this->addAction(function_, "success");
        this->addAction(function_, "getSpeedFunction");
        this->addAction(function_, "setThrottle");
        //ActionFunction func2 = [this](Message& message_, const std::string & argument_) -> Result {
        //  return ComponentSample1::createValue(message_, argument_);
        //};
        ActionFunction func2 = [this](Message& message_, const std::string & argument_)
                -> Result {
                    return createValue(message_, argument_);
                };
        this->addAction(func2, "createValue");

        ActionFunction func3 = [this](Message& message_, const std::string & argument_) -> Result {
            return ComponentSample1::receiveValue(message_, argument_);
        };
        this->addAction(func3, "receiveValue");

        //ActionFunction2 func4 = &ComponentSample1::receiveValue;
        this->addAction2("success", &ComponentSample1::success);
        this->addAction2("createValue", &ComponentSample1::createValue);
        this->addAction2("receiveValue", &ComponentSample1::receiveValue);

    }

    Result ComponentSample1::success(Message& message_, std::string argument_) {
        Result retResult;
        retResult.resultCode = Symbol::create("success");
        return retResult;
    }

    Result ComponentSample1::createValue(Message& message_, std::string argument_) {
        Result retResult;
        retResult.resultCode = Symbol::create("success");
        retResult.value = std::shared_ptr<Value>(new ValuePair("xyz", "lmn"));

        return retResult;
    }

    Result ComponentSample1::receiveValue(Message& message_, std::string argument_) {
        LOGVALUE("message ", message_.getMessageName()->getName());

        Result retResult;
        retResult.resultCode = Symbol::create("success");
        //retResult.value = std::shared_ptr<Value>(new Value());
        std::shared_ptr<ValuePair> vp = std::dynamic_pointer_cast<ValuePair>(message_.getValue());
        LOGVALUE("value first ", vp->value.first);
        LOGVALUE("value second ", vp->value.second);
        return retResult;
    }

    Result ComponentSample1::execute2(const Symbol* nameOfAction, Message& message_, const std::string& argument_) {
        ActionFunction2 func = actionMap2[nameOfAction];
        return func(*this, message_, argument_);
    }

    void ComponentSample1::addAction2(const std::string& name_, ActionFunction2 func_) {
        actionMap2[Symbol::create(name_)] = func_;
    }
}