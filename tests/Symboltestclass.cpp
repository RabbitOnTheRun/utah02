/*
 * File:   Symboltestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/11/22, 2:22:43
 */

#include "Symboltestclass.h"
#include "../Symbol.h"
using namespace utah;

CPPUNIT_TEST_SUITE_REGISTRATION(Symboltestclass);

Symboltestclass::Symboltestclass() {
}

Symboltestclass::~Symboltestclass() {
}

void Symboltestclass::setUp() {
}

void Symboltestclass::tearDown() {
}

void Symboltestclass::testCreate() {
    Symbol& result1 = Symbol::create("kazuko");
    Symbol& result2 = Symbol::create("atsuko");
    Symbol& result3 = Symbol::create("kazuko");
    if (true /*check result*/) {
        CPPUNIT_ASSERT((&result1 != &result2));
        CPPUNIT_ASSERT((&result1 == &result3));
    }
}

void Symboltestclass::testEq() {
    Symbol& result1 = Symbol::create("mizue");
    Symbol& result2 = Symbol::create("kariya");
    Symbol& result3 = Symbol::create("mizue");
    if (true /*check result*/) {
        CPPUNIT_ASSERT(!result1.eq(result2));
        CPPUNIT_ASSERT(result1.eq(result3));
    }
}

void Symboltestclass::testGetName() {
    Symbol& symbol = Symbol::create("saeko");
    std::string result = symbol.getName();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result == "saeko");
    }
}
