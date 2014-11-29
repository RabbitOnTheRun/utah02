/*
 * File:   StateMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 23:28:12
 */

#ifndef STATEMAPPERTESTCLASS_H
#define	STATEMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class StateMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(StateMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    StateMappertestclass();
    virtual ~StateMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* STATEMAPPERTESTCLASS_H */

