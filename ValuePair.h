/* 
 * File:   ValuePair.h
 * Author: ntanaka
 *
 * Created on 2014/12/21, 0:50
 */

#ifndef VALUEPAIR_H
#define	VALUEPAIR_H

#include <utility>
#include <string>

#include "Value.h"
namespace utah {

    class ValuePair : public Value{
    public:
        ValuePair(std::string first_, std::string second_);
        //ValuePair(const ValuePair& orig);
        virtual ~ValuePair();
        std::pair<std::string, std::string> value;
    private:

    };
}
#endif	/* VALUEPAIR_H */

