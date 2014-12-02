/*
 * File:   GuardMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/02, 20:16:05
 */

#include "GuardMappertestclass.h"
#include "../jsonMapper/GuardMapper.h"
#include "../jsonMapper/PicoJsonIF.h"
CPPUNIT_TEST_SUITE_REGISTRATION(GuardMappertestclass);

GuardMappertestclass::GuardMappertestclass() {
}

GuardMappertestclass::~GuardMappertestclass() {
}

void GuardMappertestclass::setUp() {
}

void GuardMappertestclass::tearDown() {
}

void GuardMappertestclass::testCreate() {
    //const picojson::value& obj;
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/Guard.txt");
    //jsonMapper::GuardMapper guardMapper;
    utah::Guard result = jsonMapper::GuardMapper::create(obj);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("L" == result.name->getName());
        CPPUNIT_ASSERT("NULL" == result.arg);
    }
}

