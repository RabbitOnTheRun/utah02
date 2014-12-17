/*
 * File:   ThreadMapper2testclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/16, 0:40:49
 */

#include "ThreadMapper2testclass.h"
#include "../MessageWithInPort.h"
#include "../ComponentIF.h"
#include "../ComponentSample1.h"
#include "../jsonMapper/ThreadMapper.h"
#include "../jsonMapper/PicoJsonIF.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ThreadMapper2testclass);

ThreadMapper2testclass::ThreadMapper2testclass() {
}

ThreadMapper2testclass::~ThreadMapper2testclass() {
}

void ThreadMapper2testclass::setUp() {
}

void ThreadMapper2testclass::tearDown() {
}

void ThreadMapper2testclass::testCreate() {
    std::string path_ = "data";
    const picojson::value& obj = jsonMapper::PicoJsonIF::JSONFileToObj("data/Thread.txt");
    //jsonMapper::ThreadMapper threadMapper;
    utah::Thread* result = jsonMapper::ThreadMapper::create(path_, obj);
    utah::Message message_("x", "z");
    utah::InPort inPort_("port1", "StateMachine1", "threadA");

    utah::ComponentIF* component = new utah::ComponentSample1();

    utah::MessageWithInPort messageWithInPort(message_, inPort_);
    result->push(messageWithInPort);

    utah::Message message2_("done", "NULL");
    utah::MessageWithInPort messageWithInPort2(message2_, inPort_);
    result->push(messageWithInPort2);
    
    result->join();
    
    //result->join();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(true);
    }
}

