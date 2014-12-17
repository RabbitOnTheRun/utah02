/* 
 * File:   PortMap.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/08, 2:12
 */

#include "Sym.h"
#include "PortMap.h"
namespace utah {

    PortMap::PortMap() {
    }

    //PortMap::PortMap(const PortMap& orig) {
    //}

    PortMap::~PortMap() {
    }

    void PortMap::addPortPair(OutPort outPort, InPort inPort) {
        portMap.push_back(std::make_pair(outPort, inPort));
    }

    InPort PortMap::getConnectedPort(OutPort outPort_) const {
        for (std::pair<OutPort,InPort> portPair : portMap) {
            if (portPair.first.eq(outPort_)) {
                return portPair.second;
            }
        }
        InPort inPort_(Sym::Null, Sym::Null, Sym::Null);
        // should throw exception
        return inPort_;
    }
}
