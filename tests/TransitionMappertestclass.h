/*
 * File:   TransitionMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 22:00:33
 */

#ifndef TRANSITIONMAPPERTESTCLASS_H
#define	TRANSITIONMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class TransitionMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TransitionMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    TransitionMappertestclass();
    virtual ~TransitionMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* TRANSITIONMAPPERTESTCLASS_H */

