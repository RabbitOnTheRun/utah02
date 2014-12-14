/*
 * File:   Transition2testclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/14, 0:36:55
 */

#include <memory>
#include "Transition2testclass.h"
#include "../Transition.h"
#include "../ComponentSample1.h"

#include "../jsonMapper/picojson.h"
#include "../jsonMapper/PicoJsonIF.h"
#include "../jsonMapper/ResultHandlingMapper.h"

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

    utah::Symbol* threadName_ = utah::Symbol::create("a");
    
    utah::Symbol* stateMachineName_ = utah::Symbol::create("b");
    std::vector< utah::MessageWithOutPort> resultMessage;
    utah::Transition transition("c", "d");

    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/ResultHandling.txt");
    utah::ResultHandling resultHandling_;
    jsonMapper::ResultHandlingMapper::create(obj, resultHandling_);

    transition.setResultHandling(resultHandling_);

    utah::Result result_;
    result_.resultCode = utah::Symbol::create("success");
    result_.value = std::shared_ptr<utah::Value>(new utah::Value());
    
    transition.generateEmission(result_, threadName_, stateMachineName_, resultMessage);
    if (true /*check result*/) {
        CPPUNIT_ASSERT( "work" == resultMessage[0].getMessage().getMessageName()->getName() );
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

