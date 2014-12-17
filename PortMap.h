/* 
 * File:   PortMap.h
 * Author: ntanaka
 *
 * Created on 2014/12/08, 2:12
 */

#ifndef PORTMAP_H
#define	PORTMAP_H

#include <vector>
#include <utility>
#include "InPort.h"
#include "OutPort.h"
namespace utah {

    class PortMap {
    public:
        PortMap();
        //PortMap(const PortMap& orig);
        virtual ~PortMap();

        void addPortPair(OutPort outPort, InPort inPort);
        InPort getConnectedPort(OutPort) const ;
        
    private:
        std::vector<std::pair<OutPort, InPort>> portMap;
    };
}
#endif	/* PORTMAP_H */

