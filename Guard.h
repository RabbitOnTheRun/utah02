/* 
 * File:   Guard.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 19:51
 */

#ifndef GUARD_H
#define	GUARD_H

#include <string>
#include "Symbol.h"
#include "Message.h"
#include "ComponentIF.h"
namespace utah {

    class Guard {
    public:
        Guard(std::string name_, std::string arg_);
        //Guard(const Guard& orig);
        virtual ~Guard();
        bool ifMatch(Message message_, ComponentIF* component_) const;
        const Symbol* getName();
        const std::string getArg();
    private:
        const Symbol* name;
        const std::string arg;
    };
}
#endif	/* GUARD_H */

