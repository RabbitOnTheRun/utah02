/* 
 * File:   PortConnection.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/07, 2:37
 */

#include "PortConnection.h"

namespace utah {

    PortConnection::PortConnection() {
    }

    //PortConnection::PortConnection(const PortConnection& orig) {
    //}

    PortConnection::~PortConnection() {
    }

    void PortConnection::setConnection(Symbol* a, Symbol* b, Symbol* c, Symbol* d) {
        map[a][b].first = c;
        map[a][b].second = d;
    }
}
