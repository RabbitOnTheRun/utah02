/*
 * File:   TransitionPartMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/11, 21:47:40
 */

#ifndef TRANSITIONPARTMAPPERTESTCLASS_H
#define	TRANSITIONPARTMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class TransitionPartMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TransitionPartMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    TransitionPartMappertestclass();
    virtual ~TransitionPartMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* TRANSITIONPARTMAPPERTESTCLASS_H */

