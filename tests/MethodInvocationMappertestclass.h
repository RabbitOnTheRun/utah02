/*
 * File:   MethodInvocationMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 21:11:25
 */

#ifndef METHODINVOCATIONMAPPERTESTCLASS_H
#define	METHODINVOCATIONMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class MethodInvocationMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MethodInvocationMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    MethodInvocationMappertestclass();
    virtual ~MethodInvocationMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* METHODINVOCATIONMAPPERTESTCLASS_H */

