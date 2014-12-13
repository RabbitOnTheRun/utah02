/*
 * File:   Transition2testclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/14, 0:36:54
 */

#ifndef TRANSITION2TESTCLASS_H
#define	TRANSITION2TESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class Transition2testclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(Transition2testclass);

    CPPUNIT_TEST(testExecute);
    CPPUNIT_TEST(testGenerateEmission);
    CPPUNIT_TEST(testIfMatch);

    CPPUNIT_TEST_SUITE_END();

public:
    Transition2testclass();
    virtual ~Transition2testclass();
    void setUp();
    void tearDown();

private:
    void testExecute();
    void testGenerateEmission();
    void testIfMatch();

};

#endif	/* TRANSITION2TESTCLASS_H */

