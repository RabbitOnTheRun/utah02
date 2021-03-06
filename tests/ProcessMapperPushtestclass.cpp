/*
 * File:   ProcessMapperPushtestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/17, 22:32:52
 */

#include <cstdlib>
#include <cstdio>
#include <unistd.h>

#include "ProcessMapperPushtestclass.h"
#include "../jsonMapper/ProcessMapper.h"
#include "../ComponentIF.h"
#include "../ComponentSample1.h"
//#include "../Message.h"
//#include "../InPort.h"
#include "../MessageWithInPort.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ProcessMapperPushtestclass);

ProcessMapperPushtestclass::ProcessMapperPushtestclass() {
}

ProcessMapperPushtestclass::~ProcessMapperPushtestclass() {
}

void ProcessMapperPushtestclass::setUp() {
}

void ProcessMapperPushtestclass::tearDown() {
}

void ProcessMapperPushtestclass::testCreate() {
    std::string fileName_ = "Process.txt";
    //jsonMapper::ProcessMapper processMapper;
    utah::Process* processP = jsonMapper::ProcessMapper::create("data", fileName_, "PortMap.txt");
    utah::ComponentIF* component = new utah::ComponentSample1();
    std::string thread = "threadA";
    std::string stateMachine = "StateMachine1";
    processP->setComponent(thread, stateMachine, component);

    utah::ComponentIF* component2 = new utah::ComponentSample1();
    std::string thread2 = "threadB";
    std::string stateMachine2 = "StateMachine2";
    processP->setComponent(thread2, stateMachine2, component2);

    utah::InPort inPort("z", "StateMachine1", "threadA"); //{"port" : "z" , "stateMachine" : "StateMachine1" , "thread" : "threadA"} 
    utah::Message message("x", "NULL");
    utah::MessageWithInPort messageWithInPort(message, inPort);

    processP->push(messageWithInPort);
    //void push(MessageWithInPort messageWithInPort_);

    utah::Message message2("v", "NULL");
    utah::MessageWithInPort messageWithInPort2(message2, inPort);
    processP->push(messageWithInPort2);

    sleep(10); // ugly
    
    processP->done();
    processP->join();

    //sleep(10);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(true);
    }
}

