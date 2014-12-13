/*
 * File:   Transition2testclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/14, 0:36:55
 */

#include "Transition2testclass.h"
#include "../Transition.h"
#include "../ComponentSample1.h"


CPPUNIT_TEST_SUITE_REGISTRATION(Transition2testclass);

Transition2testclass::Transition2testclass() {
}

Transition2testclass::~Transition2testclass() {
}

void Transition2testclass::setUp() {
}

void Transition2testclass::tearDown() {
}

void Transition2testclass::testExecute() {
    utah::Message message_("invoke", "b");
    utah::ComponentIF* component_ = new utah::ComponentSample1();
    utah::Transition transition("c", "d");
    
    utah::MethodInvocation methodInvocation("success", "argNULL");
    transition.setMethodInvocation(methodInvocation);
    
    utah::Result result = transition.execute(message_, component_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result.resultCode == utah::Symbol::create("success"));
    }
}

void Transition2testclass::testGenerateEmission() {
    utah::Result result_;
    utah::Symbol* threadName_;
    utah::Symbol* stateMachineName_;
    std::vector< utah::MessageWithOutPort> resultMessage;
    utah::Transition transition("c", "d");
    transition.generateEmission(result_, threadName_, stateMachineName_, resultMessage);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void Transition2testclass::testIfMatch() {
    utah::Message message_("a", "b");
    utah::ComponentIF* component_ = new utah::ComponentSample1();
    utah::Transition transition("c", "d");

    utah::MessageReception messageReception_("a", "misc");
    transition.setMessageReception(messageReception_);

    utah::Guard guard_("yes", "x");
    transition.setGuard(guard_);

    bool result = transition.ifMatch(message_, component_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(true == result);
    }
}

