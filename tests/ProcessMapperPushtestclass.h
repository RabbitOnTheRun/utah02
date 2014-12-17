/*
 * File:   ProcessMapperPushtestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/17, 22:32:51
 */

#ifndef PROCESSMAPPERPUSHTESTCLASS_H
#define	PROCESSMAPPERPUSHTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class ProcessMapperPushtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ProcessMapperPushtestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    ProcessMapperPushtestclass();
    virtual ~ProcessMapperPushtestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* PROCESSMAPPERPUSHTESTCLASS_H */

