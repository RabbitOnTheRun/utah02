/*
 * File:   ProcessMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/12, 3:28:17
 */

#ifndef PROCESSMAPPERTESTCLASS_H
#define	PROCESSMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class ProcessMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ProcessMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    ProcessMappertestclass();
    virtual ~ProcessMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* PROCESSMAPPERTESTCLASS_H */

