/*
 * File:   MethodInvocationMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/02, 21:11:26
 */

#include "MethodInvocationMappertestclass.h"
#include "../jsonMapper/MethodInvocationMapper.h"
#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(MethodInvocationMappertestclass);

MethodInvocationMappertestclass::MethodInvocationMappertestclass() {
}

MethodInvocationMappertestclass::~MethodInvocationMappertestclass() {
}

void MethodInvocationMappertestclass::setUp() {
}

void MethodInvocationMappertestclass::tearDown() {
}

void MethodInvocationMappertestclass::testCreate() {
   const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/MethodInvocation.txt");
    utah::MethodInvocation result = jsonMapper::MethodInvocationMapper::create(obj);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("jjj" == result.methodName->getName());
        CPPUNIT_ASSERT("yama" == result.methodArgument);
    }
}

