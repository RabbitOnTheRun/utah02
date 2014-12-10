/*
 * File:   MessageEmissiontestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/02, 22:10:46
 */

#include "MessageEmissiontestclass.h"
#include "../jsonMapper/MessageEmissionMapper.h"
#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(MessageEmissiontestclass);

MessageEmissiontestclass::MessageEmissiontestclass() {
}

MessageEmissiontestclass::~MessageEmissiontestclass() {
}

void MessageEmissiontestclass::setUp() {
}

void MessageEmissiontestclass::tearDown() {
}

void MessageEmissiontestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/MessageEmission.txt");
    //jsonMapper::MessageEmissionMapper messageEmissionMapper;
    utah::MessageEmission result = jsonMapper::MessageEmissionMapper::create(obj);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("w" == result.port->getName());
        CPPUNIT_ASSERT("joy" == result.messageName->getName());
        CPPUNIT_ASSERT("NULL" == result.valueType->getName());
        CPPUNIT_ASSERT("NULL" == result.givenArgument);
    }
}

