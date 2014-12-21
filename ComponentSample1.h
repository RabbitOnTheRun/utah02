/* 
 * File:   ComponentSample1.h
 * Author: ntanaka
 *
 * Created on 2014/12/13, 23:57
 */

#ifndef COMPONENTSAMPLE1_H
#define	COMPONENTSAMPLE1_H

#include <map>
#include <string>
#include "ComponentIF.h"
#include "Result.h"

namespace utah {
    class ComponentSample1;
    typedef std::function<Result(ComponentSample1&, Message&, const std::string&) > ActionFunction2;

    class ComponentSample1 : public ComponentIF {
    public:
        ComponentSample1();
        //ComponentSample1(const ComponentSample1& orig);
        virtual ~ComponentSample1();
        Result execute2(const Symbol* nameOfAction, Message& message_, const std::string& argument_);

    private:
        void setupGuard();
        void setupAction();
        Result success(Message& message_, std::string argument_);
        Result createValue(Message& message_, std::string argument_);
        Result receiveValue(Message& message_, std::string argument_);
        void addAction2(const std::string& name_, ActionFunction2 func_);
        std::map<const Symbol*, ActionFunction2> actionMap2;
    };

    typedef std::function<Result(ComponentSample1&, Message&, const std::string&) > ActionFunction2;
}
#endif	/* COMPONENTSAMPLE1_H */

