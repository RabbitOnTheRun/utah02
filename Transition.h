/* 
 * File:   Transition.h
 * Author: ntanaka
 *
 * Created on 2014/11/28, 20:56
 */

#ifndef TRANSITION_H
#define	TRANSITION_H

#include "Symbol.h"
#include "tests/Transitiontestclass.h"
#include "tests/TransitionMappertestclass.h"
#include "tests/Statetestclass.h"
namespace utah {

    class Transition {
        friend Transitiontestclass;
                friend TransitionMappertestclass;
                                friend Statetestclass;
    public:
        Transition(const std::string from_, const std::string to_) ;
        //Transition(const Transition& orig);
        virtual ~Transition();
    private:
        //const Symbol& name;
        Symbol& from;
        Symbol& to;
        //guard
        //message
    };
}
#endif	/* TRANSITION_H */

