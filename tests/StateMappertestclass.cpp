/*
 * File:   StateMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/11/29, 23:28:13
 */

#include "StateMappertestclass.h"
#include "../jsonMapper/StateMapper.h"
#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(StateMappertestclass);

StateMappertestclass::StateMappertestclass() {
}

StateMappertestclass::~StateMappertestclass() {
}

void StateMappertestclass::setUp() {
}

void StateMappertestclass::tearDown() {
}

void StateMappertestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/State.txt");
    std::map<const utah::Symbol*, utah::State*> stateMap;
    //jsonMapper::StateMapper stateMapper;
    utah::State* result = jsonMapper::StateMapper::create(obj, stateMap);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result->getName()->getName() == "c");
        CPPUNIT_ASSERT(result->getChild(0)->getName()->getName() == "g");
    }
}

