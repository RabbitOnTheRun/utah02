/* 
 * File:   ActionIF.h
 * Author: ntanaka
 *
 * Created on 2014/12/09, 0:27
 */

#ifndef ACTIONIF_H
#define	ACTIONIF_H

#include <string>
#include <functional>

#include "Message.h"
#include "Result.h"

namespace utah {
    typedef std::function<Result(Message&, const std::string&) > ActionFunction;

    class ActionIF {
    public:
        ActionIF();
        ActionIF(std::string name_,  ActionFunction actionFunction_);
        //ActionIF(const ActionIF& orig);
        virtual ~ActionIF();
        Result execute(Message& message_, const std::string& argument_);
        void setActionFunction(ActionFunction function_);
    private:
        Symbol* name;
        ActionFunction actionFunction;
    };
}
#endif	/* ACTIONIF_H */

