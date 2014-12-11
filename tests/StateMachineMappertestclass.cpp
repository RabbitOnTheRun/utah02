/*
 * File:   StateMachineMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/11, 12:09:16
 */

#include "StateMachineMappertestclass.h"
#include "../jsonMapper/StateMachineMapper.h"


CPPUNIT_TEST_SUITE_REGISTRATION(StateMachineMappertestclass);

StateMachineMappertestclass::StateMachineMappertestclass() {
}

StateMachineMappertestclass::~StateMachineMappertestclass() {
}

void StateMachineMappertestclass::setUp() {
}

void StateMachineMappertestclass::tearDown() {
}

void StateMachineMappertestclass::testCreate() {
    std::string name_ = "StateMachine";
    //jsonMapper::StateMachineMapper stateMachineMapper;
    utah::StateMachine* result = jsonMapper::StateMachineMapper::create(name_, "Thread");
    if (true /*check result*/) {
        CPPUNIT_ASSERT("StateMachine" == result->name->getName());
    }
}

