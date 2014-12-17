/*
 * File:   ActionIFtestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/14, 0:09:14
 */

#include "ActionIFtestclass.h"
#include "../ActionIF.h"
#include "../Message.h"
#include "../Result.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ActionIFtestclass);

ActionIFtestclass::ActionIFtestclass() {
}

ActionIFtestclass::~ActionIFtestclass() {
}

void ActionIFtestclass::setUp() {
}

void ActionIFtestclass::tearDown() {
}


void ActionIFtestclass::testExecute() {
    utah::ActionFunction function_ = [](utah::Message&, const std::string&)-> utah::Result {
        utah::Result retResult;
        retResult.resultCode = utah::Symbol::create("success");
        return retResult;
    };
    
    utah::ActionIF actionIF("A", function_);
    //actionIF.setActionFunction(function_);

    utah::Message message_("A", "B");
    const std::string argument_ = "ABC";

    utah::Result result = actionIF.execute(message_, argument_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result.resultCode = utah::Symbol::create("success"));
    }
}




