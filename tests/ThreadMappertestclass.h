/*
 * File:   ThreadMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/12, 1:33:51
 */

#ifndef THREADMAPPERTESTCLASS_H
#define	THREADMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class ThreadMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ThreadMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    ThreadMappertestclass();
    virtual ~ThreadMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* THREADMAPPERTESTCLASS_H */

