/*
 * File:   GuardIFtestclass1.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/13, 23:08:05
 */

#include "GuardIFtestclass1.h"
#include "../GuardIF.h"
#include "../Message.h"


CPPUNIT_TEST_SUITE_REGISTRATION(GuardIFtestclass1);

GuardIFtestclass1::GuardIFtestclass1() {
}

GuardIFtestclass1::~GuardIFtestclass1() {
}

void GuardIFtestclass1::setUp() {
}

void GuardIFtestclass1::tearDown() {
}

void GuardIFtestclass1::testJudge() {
    utah::Message message_("a", "b");
    std::string argument_ = "def";
    utah::GuardIF guardIF("z");
    utah::GuardFunction function_ = [](utah::Message& message_, std::string argument_)->bool {
        return true;
    };
    guardIF.setGuardFunction(function_);
    bool result = guardIF.judge(message_, argument_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(true == result);
    }
}

void GuardIFtestclass1::testJudgeFalse() {
    utah::Message message_("a", "b");
    std::string argument_ = "def";
    utah::GuardIF guardIF("z");
    utah::GuardFunction function_ = [](utah::Message& message_, std::string argument_)->bool {
        return false;
    };
    guardIF.setGuardFunction(function_);
    bool result = guardIF.judge(message_, argument_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false == result);
    }
}

