/*
 * File:   ResultHandlingtestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/02, 23:18:38
 */

#include "ResultHandlingtestclass.h"
#include "../jsonMapper/ResultHandlingMapper.h"
#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ResultHandlingtestclass);

ResultHandlingtestclass::ResultHandlingtestclass() {
}

ResultHandlingtestclass::~ResultHandlingtestclass() {
}

void ResultHandlingtestclass::setUp() {
}

void ResultHandlingtestclass::tearDown() {
}

void ResultHandlingtestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/ResultHandling.txt");
    utah::ResultHandling resultHandling_;
    //jsonMapper::ResultHandlingMapper resultHandlingMapper;
    jsonMapper::ResultHandlingMapper::create(obj, resultHandling_);
    if (true /*check result*/) {
        CPPUNIT_ASSERT( "success" ==resultHandling_.externalEffects[0].resultCode->getName());
       
    }
}

