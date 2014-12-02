/* 
 * File:   State.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/28, 20:55
 */

#include <vector>
#include <assert.h>
#include "State.h"
#include "Symbol.h"

namespace utah {

    State::State(const std::string &name_) : parent(NULL), name(Symbol::create(name_)) {

    }

    State::State(const std::string &name_, State *parent_) : parent(parent_), name(Symbol::create(name_)) {

    }

    //State::State(const State& orig) {
    //}

    State::~State() {
    }

    void State::setParent(State *parent_) {
        assert(this->parent == NULL);
        assert(parent_ != NULL);
        parent = parent_;
    }

    void State::addTranstion(Transition* transition) {
        assert(transition != NULL);
        transitions.push_back(transition);
    }
     void State::addChild(State *child_) {
         children.push_back(child_);
     }
      Symbol* State::getNameSymbol(){
          return name;
      }
}