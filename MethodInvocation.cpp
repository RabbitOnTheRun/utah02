/* 
 * File:   MethodInvocation.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/02, 20:27
 */

#include <assert.h>
#include "Sym.h"
#include "MethodInvocation.h"
#include "MapOfAction.h"
#include "Result.h"
namespace utah {

    MethodInvocation::MethodInvocation() {
    }

    MethodInvocation::MethodInvocation(std::string methodName_, std::string methodArgument_)
    : methodName(Symbol::create(methodName_)), methodArgument(methodArgument_) {
    }
    //MethodInvocation::MethodInvocation(const MethodInvocation& orig) {
    //}

    MethodInvocation::~MethodInvocation() {
    }

    Result MethodInvocation::execute(Message& message_, ComponentIF* component_) {
        if (methodName == Sym::Null) {
            Result result;
            result.resultCode = Symbol::create("NULL");
            return result;
        } else {
            return component_->execute(methodName, message_, methodArgument);
        }
    }

    Symbol* MethodInvocation::getMethodName() {
        return methodName;
    }

    std::string MethodInvocation::getMethodArgument() {
        return methodArgument;
    }
}