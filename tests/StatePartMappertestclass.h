/*
 * File:   StatePartMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/11/30, 0:19:52
 */

#ifndef STATEPARTMAPPERTESTCLASS_H
#define	STATEPARTMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class StatePartMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(StatePartMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    StatePartMappertestclass();
    virtual ~StatePartMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* STATEPARTMAPPERTESTCLASS_H */

