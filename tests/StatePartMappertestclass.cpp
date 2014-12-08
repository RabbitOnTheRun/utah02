/*
 * File:   StatePartMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/11/30, 0:19:52
 */

#include "StatePartMappertestclass.h"
#include "../jsonMapper/StatePartMapper.h"
#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(StatePartMappertestclass);

StatePartMappertestclass::StatePartMappertestclass() {
}

StatePartMappertestclass::~StatePartMappertestclass() {
}

void StatePartMappertestclass::setUp() {
}

void StatePartMappertestclass::tearDown() {
}

void StatePartMappertestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/StatePart.txt");
    std::map<std::string, utah::State*> stateMap;
    //jsonMapper::StatePartMapper statePartMapper;
     jsonMapper::StatePartMapper::create2(obj, stateMap);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(stateMap["b"]->getNameSymbol()->getName() == "b");
    }
}

