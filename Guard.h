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
#include "tests/GuardMappertestclass.h"
#include "tests/TransitionMappertestclass.h"
namespace utah {

    class Guard {
        friend GuardMappertestclass;
        friend TransitionMappertestclass;
    public:
        Guard();
        Guard(std::string name_, std::string arg_);
        //Guard(const Guard& orig);
        virtual ~Guard();
    private:
        Symbol* name;
        std::string arg;
    };
}
#endif	/* GUARD_H */
