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
namespace utah {

    class MethodInvocation {
    public:
        MethodInvocation();
        MethodInvocation(std::string methodName_, std::string methodArgument_);
        //MethodInvocation(const MethodInvocation& orig);
        virtual ~MethodInvocation();
    private:
        Symbol* methodName;
        std::string methodArgument;
    };
}
#endif	/* METHODINVOCATION_H */

