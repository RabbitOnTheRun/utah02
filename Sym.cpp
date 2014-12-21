/* 
 * File:   Sym.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/08, 1:19
 */

#include "Sym.h"

namespace utah {

    Sym::Sym() {
        //Null(Symbol::create("NULL")),
        //done(Symbol::create("done")){
    }

    //Sym::Sym(const Sym& orig) {
    //}

    Sym::~Sym() {
    }

    Symbol* Sym::null(Symbol::create("NULL"));
    Symbol* Sym::done(Symbol::create("done"));
    Symbol* Sym::start(Symbol::create("start"));
}
