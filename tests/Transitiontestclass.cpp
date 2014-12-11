/*
 * File:   Transitiontestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/11/29, 21:44:04
 */

#include "Transitiontestclass.h"
#include "../Transition.h"


CPPUNIT_TEST_SUITE_REGISTRATION(Transitiontestclass);

Transitiontestclass::Transitiontestclass() {
}

Transitiontestclass::~Transitiontestclass() {
}

void Transitiontestclass::setUp() {
}

void Transitiontestclass::tearDown() {
}

void Transitiontestclass::testTransition() {
    const std::string from_ = "a";
    const std::string to_ = "b";
    utah::Transition transition(from_, to_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("a" == transition.getFrom()->getName());
        CPPUNIT_ASSERT("b" == transition.getTo()->getName());
    }
}

