/* 
 * File:   Symbol.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/22, 2:13
 */

#include "Symbol.h"

namespace utah {

    Symbol::Symbol() {
    }

    Symbol::Symbol(const std::string& name_) : name(name_) {
    }

    //Symbol::Symbol(const Symbol& orig) {
    //}

    Symbol::~Symbol() {
    }

    bool Symbol::eq(const Symbol* arg) {
        return (this == arg);
    }
    std::map<std::string, Symbol* > Symbol::symbolTable;

    Symbol* Symbol::create(const std::string &name_) {
        // Should be guarded from Concurrent access
        if (symbolTable.find(name_) == symbolTable.end()) {
            Symbol *sym = new Symbol(name_);
            symbolTable[name_] = sym;
            return sym;
        } else {
            return symbolTable[name_];
        }
    }

     std::string Symbol::getName() {
        return name;
    }
}