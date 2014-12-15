/*
 * File:   PortMapMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/16, 2:29:38
 */

#include "PortMapMappertestclass.h"
#include "../jsonMapper/PortMapMapper.h"

#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(PortMapMappertestclass);

PortMapMappertestclass::PortMapMappertestclass() {
}

PortMapMappertestclass::~PortMapMappertestclass() {
}

void PortMapMappertestclass::setUp() {
}

void PortMapMappertestclass::tearDown() {
}

void PortMapMappertestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/PortMap.txt");
    //jsonMapper::PortMapMapper portMapMapper;
    utah::PortMap result = jsonMapper::PortMapMapper::create(obj);
    
    utah::OutPort outPort("z" , "StateMachine1" , "threadA");
    
    utah::InPort inPort = result.getConnectedPort(outPort);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("w" == inPort.portName->getName());
    }
}

