/*
 * File:   GuardMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 20:16:04
 */

#ifndef GUARDMAPPERTESTCLASS_H
#define	GUARDMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class GuardMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(GuardMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    GuardMappertestclass();
    virtual ~GuardMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* GUARDMAPPERTESTCLASS_H */

