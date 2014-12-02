/* 
 * File:   Transition.h
 * Author: ntanaka
 *
 * Created on 2014/11/28, 20:56
 */

#ifndef TRANSITION_H
#define	TRANSITION_H

#include "Symbol.h"
#include "MessageReception.h"
#include "Guard.h"
#include "tests/Transitiontestclass.h"
#include "tests/TransitionMappertestclass.h"
#include "tests/Statetestclass.h"

namespace utah {

    class Transition {
        friend Transitiontestclass;
        friend TransitionMappertestclass;
        friend Statetestclass;
    public:
        Transition(const std::string from_, const std::string to_);
        Transition(Symbol* from_, Symbol* to_);
        //const MessageReception& messageReception_);
        //Transition(const Transition& orig);
        virtual ~Transition();
        void setMessageReception(MessageReception messageReception_);
        void setGuard(Guard guard_);
    private:
        //const Symbol& name;
        Symbol* from;
        Symbol* to;
        MessageReception messageReception;
        Guard guard;
        //message
    };
}
#endif	/* TRANSITION_H */
