/* 
 * File:   PortConnection.h
 * Author: ntanaka
 *
 * Created on 2014/12/07, 2:37
 */

#ifndef PORTCONNECTION_H
#define	PORTCONNECTION_H

#include <map>
#include <utility>
#include "Symbol.h"
namespace utah {

    class PortConnection {
    public:
        PortConnection();
        //PortConnection(const PortConnection& orig);
        virtual ~PortConnection();
        void setConnection(Symbol* stateMachineFrom, Symbol* portFrom,
                Symbol* stateMachineTo, Symbol* portTo);
    private:
        std::map<Symbol*, std::map<Symbol*, std::pair<Symbol*, Symbol*>>> map;
    };
}
#endif	/* PORTCONNECTION_H */

