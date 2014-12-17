/*
 * File:   Statetestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/11/29, 22:21:48
 */

#include "Statetestclass.h"
#include "../State.h"

using namespace utah;
//using namespace jsonMapper;

CPPUNIT_TEST_SUITE_REGISTRATION(Statetestclass);

Statetestclass::Statetestclass() {
}

Statetestclass::~Statetestclass() {
}

void Statetestclass::setUp() {
}

void Statetestclass::tearDown() {
}

void Statetestclass::testState() {
    const std::string& name_ = "yaho";
    utah::State state(name_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(name_ == state.getName()->getName());
    }
}

void Statetestclass::testState2() {
    const std::string& name_ = "gog";
    const std::string& name2_ = "alt";
    State* parent_ = new State(name2_);
    utah::State state(name_, parent_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(name_ == state.getName()->getName());
        CPPUNIT_ASSERT(name2_ == state.getParent()->getName()->getName());
    }
}

void Statetestclass::testAddTranstion() {
    utah::MessageReception messageReception("a", "b");
    Transition* transition = new Transition("z", "v", messageReception);
    utah::State state("a");
    state.addTranstion(transition);
    if (true /*check result*/) {
         CPPUNIT_ASSERT("a" == state.getName()->getName());
          //CPPUNIT_ASSERT("z" == state.transitions[0]->from->getName());
    }
}

void Statetestclass::testSetParent() {
    State* parent_ = new State("YAMA");
    utah::State state("a");
    state.setParent(parent_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("YAMA" == state.getParent()->getName()->getName());
    }
}

