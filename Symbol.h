/* 
 * File:   Symbol.h
 * Author: ntanaka
 *
 * Created on 2014/11/22, 2:13
 */

#ifndef SYMBOL_H
#define	SYMBOL_H

#include <string>
#include <map>

namespace utah {

    class Symbol {
    public:

        static Symbol* create(const std::string &name_);
        //static constexpr Symbol* createConstExpr(const std::string &name_);
        virtual ~Symbol();
        std::string getName() const;
        bool eq(const Symbol*) const ;
    private:
        Symbol();
        Symbol(const std::string &name_);
        //Symbol(const Symbol& orig);
        const std::string name;
        static std::map<std::string, Symbol*> symbolTable;

    };
}
#endif	/* SYMBOL_H */

