/* 
 * File:   PortMapMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/16, 1:48
 */

#include "PortMapMapper.h"

namespace jsonMapper {

    PortMapMapper::PortMapMapper() {
    }

    //PortMapMapper::PortMapMapper(const PortMapMapper& orig) {
    //}

    PortMapMapper::~PortMapMapper() {
    }

    utah::PortMap PortMapMapper::create(const picojson::value& obj) {

        utah::PortMap portMap;
        picojson::array arrayObj = PicoJsonIF::toArray(obj);
        for (picojson::value obj2 : arrayObj) {
            picojson::value outPortJSON = PicoJsonIF::getObject(obj2, "outPort");
            picojson::value inPortJSON = PicoJsonIF::getObject(obj2, "inPort");

            utah::OutPort outPort = createOutPort(outPortJSON);
            utah::InPort inPort = createInPort(inPortJSON);
            portMap.addPortPair(outPort, inPort);
        }
        return portMap;
    }

    utah::InPort PortMapMapper::createInPort(const picojson::value& obj) {
        std::string port = PicoJsonIF::getString(obj, "port");
        std::string stateMachine = PicoJsonIF::getString(obj, "stateMachine");
        std::string thread = PicoJsonIF::getString(obj, "thread");

        utah::InPort inPort(port, stateMachine, thread);
        return inPort;
    }

    utah::OutPort PortMapMapper::createOutPort(const picojson::value& obj) {
        std::string port = PicoJsonIF::getString(obj, "port");
        std::string stateMachine = PicoJsonIF::getString(obj, "stateMachine");
        std::string thread = PicoJsonIF::getString(obj, "thread");

        utah::OutPort outPort(port, stateMachine, thread);
        return outPort;
    }
}
