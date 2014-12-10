/* 
 * File:   State.h
 * Author: ntanaka
 *
 * Created on 2014/11/28, 20:55
 */

#ifndef STATE_H
#define	STATE_H

#include <string>
#include <map>
#include "Symbol.h"
#include "Transition.h"
#include "tests/Statetestclass.h"
#include "tests/StateMappertestclass.h"

namespace utah {

    class State {
        friend Statetestclass;
        friend StateMappertestclass;
    public:
        State(const std::string &name_);
        State(const std::string &name_, State *parent_);
        //State(const State& orig);
        void setParent(State *parent_);
        void addChild(State *child_);
        void addTranstion(Transition* transition);
        //std::vector<Transition*> getTransitions();
        virtual ~State();
        const Symbol* getNameSymbol();
        State* getParent();
        std::vector<Transition *> transitions;
    private:
        State *parent = NULL;
        const Symbol* name;
        //std::vector<Transition *> transitions;
        std::vector<State *> children;
    };
}
#endif	/* STATE_H */

