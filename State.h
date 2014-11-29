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
namespace utah {

    class State {
    public:
        State(const std::string &name_);
        State(const std::string &name_,  State *parent_);
        //State(const State& orig);
        void setParent(State *parent_);
        void addTranstion(Transition* transition);
        //std::vector<Transition*> getTransitions();
        virtual ~State();
    private:
        State *parent;
        const Symbol& name;
        std::vector<Transition *> transitions;
    };
}
#endif	/* STATE_H */

