/*
 * File:   TransitionPartMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/11, 21:47:41
 */

#include "TransitionPartMappertestclass.h"
#include "../jsonMapper/TransitionPartMapper.h"
#include "../jsonMapper/PicoJsonIF.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TransitionPartMappertestclass);

TransitionPartMappertestclass::TransitionPartMappertestclass() {
}

TransitionPartMappertestclass::~TransitionPartMappertestclass() {
}

void TransitionPartMappertestclass::setUp() {
}

void TransitionPartMappertestclass::tearDown() {
}

void TransitionPartMappertestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/TransitionPart.txt");
    std::vector<utah::Transition*> transitions;
    //jsonMapper::TransitionPartMapper transitionPartMapper;
    jsonMapper::TransitionPartMapper::create(obj, transitions);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(true);
    }
}
