/*
 * File:   ExternalEffectMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/02, 22:44:16
 */

#include "ExternalEffectMappertestclass.h"
#include "../jsonMapper/ExternalEffectMapper.h"

#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ExternalEffectMappertestclass);

ExternalEffectMappertestclass::ExternalEffectMappertestclass() {
}

ExternalEffectMappertestclass::~ExternalEffectMappertestclass() {
}

void ExternalEffectMappertestclass::setUp() {
}

void ExternalEffectMappertestclass::tearDown() {
}

void ExternalEffectMappertestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/ExternalEffect.txt");
    //jsonMapper::ExternalEffectMapper externalEffectMapper;
    utah::ExternalEffect result = jsonMapper::ExternalEffectMapper::create(obj);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("success" == result.resultCode->getName());
        CPPUNIT_ASSERT("z" == result.messageEmission.port->getName());
    }
}

