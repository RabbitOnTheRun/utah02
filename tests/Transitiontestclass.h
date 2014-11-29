/*
 * File:   Transitiontestclass.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 21:44:02
 */

#ifndef TRANSITIONTESTCLASS_H
#define	TRANSITIONTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class Transitiontestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(Transitiontestclass);

    CPPUNIT_TEST(testTransition);

    CPPUNIT_TEST_SUITE_END();

public:
    Transitiontestclass();
    virtual ~Transitiontestclass();
    void setUp();
    void tearDown();

private:
    void testTransition();

};

#endif	/* TRANSITIONTESTCLASS_H */

