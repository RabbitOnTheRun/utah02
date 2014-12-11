/*
 * File:   ThreadMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/12, 1:33:52
 */

#include "ThreadMappertestclass.h"
#include "../jsonMapper/ThreadMapper.h"
#include "../jsonMapper/PicoJsonIF.h"


CPPUNIT_TEST_SUITE_REGISTRATION(ThreadMappertestclass);

ThreadMappertestclass::ThreadMappertestclass() {
}

ThreadMappertestclass::~ThreadMappertestclass() {
}

void ThreadMappertestclass::setUp() {
}

void ThreadMappertestclass::tearDown() {
}

void ThreadMappertestclass::testCreate() {
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/Thread.txt");
    //jsonMapper::ThreadMapper threadMapper;
    utah::Thread* result = jsonMapper::ThreadMapper::create("data" , obj);
    if (true /*check result*/) {
        CPPUNIT_ASSERT("threadA" == result->name->getName());
    }
}

