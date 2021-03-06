/*
 * File:   TransitionMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/11/29, 22:00:34
 */

#include "TransitionMappertestclass.h"
#include "../jsonMapper/TransitionMapper.h"
#include "../jsonMapper/PicoJsonIF.h"
CPPUNIT_TEST_SUITE_REGISTRATION(TransitionMappertestclass);

TransitionMappertestclass::TransitionMappertestclass() {
}

TransitionMappertestclass::~TransitionMappertestclass() {
}

void TransitionMappertestclass::setUp() {
}

void TransitionMappertestclass::tearDown() {
}

void TransitionMappertestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/Transition-4.txt");

    utah::Transition* result = jsonMapper::TransitionMapper::create(obj);
    if (true /*check result*/) {
        CPPUNIT_ASSERT((result->getFrom())->eq(utah::Symbol::create("b")));
        CPPUNIT_ASSERT((result->getTo())->eq(utah::Symbol::create("g")));
        // delete because they are private attributes
        //CPPUNIT_ASSERT("v" == result->messageReception.getName()->getName());
        //CPPUNIT_ASSERT("L" == result->guard.getName()->getName());
        //CPPUNIT_ASSERT("jjj" == result->methodInvocation.getMethodName()->getName());
    }
}

