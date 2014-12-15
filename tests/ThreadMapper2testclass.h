/*
 * File:   ThreadMapper2testclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/16, 0:40:48
 */

#ifndef THREADMAPPER2TESTCLASS_H
#define	THREADMAPPER2TESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class ThreadMapper2testclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ThreadMapper2testclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    ThreadMapper2testclass();
    virtual ~ThreadMapper2testclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* THREADMAPPER2TESTCLASS_H */

