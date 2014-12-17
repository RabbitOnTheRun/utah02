/*
 * File:   ProcessMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/12, 3:28:18
 */

#include <string>
#include "ProcessMappertestclass.h"
#include "../jsonMapper/ProcessMapper.h"
#include "../ComponentIF.h"
#include "../ComponentSample1.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ProcessMappertestclass);

ProcessMappertestclass::ProcessMappertestclass() {
}

ProcessMappertestclass::~ProcessMappertestclass() {
}

void ProcessMappertestclass::setUp() {
}

void ProcessMappertestclass::tearDown() {
}

void ProcessMappertestclass::testCreate() {
    std::string fileName_ = "Process.txt";
    //jsonMapper::ProcessMapper processMapper;
    utah::Process* result = jsonMapper::ProcessMapper::create("data", fileName_);
    utah::ComponentIF* component = new utah::ComponentSample1();
    std::string thread = "threadA";
    std::string stateMachine = "StateMachine1";
    result->setComponent(thread, stateMachine, component);
    
    if (true /*check result*/) {
        //CPPUNIT_ASSERT(false);
    }
}

