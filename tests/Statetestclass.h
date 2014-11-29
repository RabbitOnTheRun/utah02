/*
 * File:   Statetestclass.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 22:21:47
 */

#ifndef STATETESTCLASS_H
#define	STATETESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class Statetestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(Statetestclass);

    CPPUNIT_TEST(testState);
    CPPUNIT_TEST(testState2);
    CPPUNIT_TEST(testAddTranstion);
    CPPUNIT_TEST(testSetParent);

    CPPUNIT_TEST_SUITE_END();

public:
    Statetestclass();
    virtual ~Statetestclass();
    void setUp();
    void tearDown();

private:
    void testState();
    void testState2();
    void testAddTranstion();
    void testSetParent();

};

#endif	/* STATETESTCLASS_H */

