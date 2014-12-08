/* 
 * File:   GuardIF.h
 * Author: ntanaka
 *
 * Created on 2014/12/08, 23:52
 */

#ifndef GUARDIF_H
#define	GUARDIF_H

#include <string>
#include <functional>
#include "Message.h"
namespace utah {

    typedef std::function<bool(Message& message_, std::string argument_) > GuardFunction;

    class GuardIF {
    public:
        GuardIF();
        GuardIF(std ::string name_);
        GuardIF(Symbol* name_);
        //GuardIF(const GuardIF& orig);
        virtual ~GuardIF();
        bool judge(Message& message_, std::string& argument_);
        void setGuardFunction(GuardFunction function_);
    private:
        Symbol* name;
        GuardFunction guardFunction;
    };
}
#endif	/* GUARDIF_H */

