/*
 * File:   ProcessMappertestclass.cpp
 * Author: ntanaka
 *
 * Created on 2014/12/12, 3:28:18
 */

#include "ProcessMappertestclass.h"
#include "../jsonMapper/ProcessMapper.h"


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
    if (true /*check result*/) {
        //CPPUNIT_ASSERT(false);
    }
}

