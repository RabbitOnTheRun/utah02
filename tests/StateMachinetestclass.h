/*
 * File:   StateMachinetestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/15, 0:58:25
 */

#ifndef STATEMACHINETESTCLASS_H
#define	STATEMACHINETESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class StateMachinetestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(StateMachinetestclass);

    CPPUNIT_TEST(testProcessMessage);

    CPPUNIT_TEST_SUITE_END();

public:
    StateMachinetestclass();
    virtual ~StateMachinetestclass();
    void setUp();
    void tearDown();

private:
    void testProcessMessage();

};

#endif	/* STATEMACHINETESTCLASS_H */

