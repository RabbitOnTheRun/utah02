/*
 * File:   MapOfGuardtestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/13, 23:28:16
 */

#include "MapOfGuardtestclass.h"
#include "../MapOfGuard.h"


CPPUNIT_TEST_SUITE_REGISTRATION(MapOfGuardtestclass);

MapOfGuardtestclass::MapOfGuardtestclass() {
}

MapOfGuardtestclass::~MapOfGuardtestclass() {
}

void MapOfGuardtestclass::setUp() {
}

void MapOfGuardtestclass::tearDown() {
}

void MapOfGuardtestclass::testAddGuard() {
    utah::GuardFunction function_ = [](utah::Message& message_, std::string argument_)->bool {
        return true;
    };
    std::string argument_ = "def";
    utah::MapOfGuard mapOfGuard;
    mapOfGuard.addGuard(function_, argument_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(true);
    }
}

void MapOfGuardtestclass::testJudge() {
    const utah::Symbol* guardName = utah::Symbol::create("def");
    const utah::Symbol* guardName2 = utah::Symbol::create("ghi");
    utah::GuardFunction function_ = [](utah::Message& message_, std::string argument_)->bool {
        return true;
    };
    utah::GuardFunction function2_ = [](utah::Message& message_, std::string argument_)->bool {
        return false;
    };
    utah::Message message_("a", "b");
    std::string argument_ = "wxyz";
    utah::MapOfGuard mapOfGuard;
    mapOfGuard.addGuard(function_, "def");
    mapOfGuard.addGuard(function2_, "ghi");
    bool result1 = mapOfGuard.judge(guardName, message_, argument_);
    bool result2 = mapOfGuard.judge(guardName2, message_, argument_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(true == result1);
        CPPUNIT_ASSERT(false == result2);
    }
}

