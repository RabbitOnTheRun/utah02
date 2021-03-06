/*
 * File:   MessageReceptionMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/02, 17:43:12
 */

#include "../Message.h"
#include "MessageReceptionMappertestclass.h"
#include "../jsonMapper/MessageReceptionMapper.h"
#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(MessageReceptionMappertestclass);

MessageReceptionMappertestclass::MessageReceptionMappertestclass() {
}

MessageReceptionMappertestclass::~MessageReceptionMappertestclass() {
}

void MessageReceptionMappertestclass::setUp() {
}

void MessageReceptionMappertestclass::tearDown() {
}

void MessageReceptionMappertestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/MessageReception.txt");
    //jsonMapper::MessageReceptionMapper messageReceptionMapper;
    utah::MessageReception result = jsonMapper::MessageReceptionMapper::create(obj);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("v" == result.getName()->getName());
        CPPUNIT_ASSERT("NULL" == result.getType()->getName());
    }
}

void MessageReceptionMappertestclass::testIfMatch() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/MessageReception.txt");
    //jsonMapper::MessageReceptionMapper messageReceptionMapper;
    utah::Message message("v", "w");
    utah::Message message2("z", "w");
    utah::MessageReception result = jsonMapper::MessageReceptionMapper::create(obj);

    if (true /*check result*/) {
        CPPUNIT_ASSERT(result.ifMatch(message));
        CPPUNIT_ASSERT(!result.ifMatch(message2));
    }
}

