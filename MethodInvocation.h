/* 
 * File:   MethodInvocation.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 20:27
 */

#ifndef METHODINVOCATION_H
#define	METHODINVOCATION_H

#include "Symbol.h"
#include <string>
#include "Message.h"
#include "Result.h"
#include "ComponentIF.h"
#include "tests/MethodInvocationMappertestclass.h"
#include "tests/TransitionMappertestclass.h"
namespace utah {

    class MethodInvocation {
        friend MethodInvocationMappertestclass;
        friend TransitionMappertestclass;
    public:
        MethodInvocation();
        MethodInvocation(std::string methodName_, std::string methodArgument_);
        //MethodInvocation(const MethodInvocation& orig);
        virtual ~MethodInvocation();
        Result execute(Message& message_, ComponentIF* component_);
    private:
        Symbol* methodName;
        std::string methodArgument;
    };
}
#endif	/* METHODINVOCATION_H */

