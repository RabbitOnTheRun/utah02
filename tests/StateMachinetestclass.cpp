/*
 * File:   StateMachinetestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/15, 0:58:26
 */

#include "StateMachinetestclass.h"
#include "../StateMachine.h"

#include "../jsonMapper/StateMachineMapper.h"


CPPUNIT_TEST_SUITE_REGISTRATION(StateMachinetestclass);

StateMachinetestclass::StateMachinetestclass() {
}

StateMachinetestclass::~StateMachinetestclass() {
}

void StateMachinetestclass::setUp() {
}

void StateMachinetestclass::tearDown() {
}

void StateMachinetestclass::testProcessMessage() {
    utah::Message message_("a", "b");
    std::vector<utah::MessageWithOutPort> result;
    //utah::StateMachine stateMachine;
    utah::StateMachine* stateMachine = jsonMapper::StateMachineMapper::create("StateMachine2", "Thread", "data");
    stateMachine->setCurrent("a");

    stateMachine->processMessage(message_, result);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

