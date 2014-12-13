/*
 * File:   GuardIFtestclass1.h
 * Author: ntanaka
 *
 * Created on 2014/12/13, 23:08:04
 */

#ifndef GUARDIFTESTCLASS1_H
#define	GUARDIFTESTCLASS1_H

#include <cppunit/extensions/HelperMacros.h>

class GuardIFtestclass1 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(GuardIFtestclass1);

    CPPUNIT_TEST(testJudge);
    CPPUNIT_TEST(testJudgeFalse);
    
    CPPUNIT_TEST_SUITE_END();

public:
    GuardIFtestclass1();
    virtual ~GuardIFtestclass1();
    void setUp();
    void tearDown();

private:
    void testJudge();
    void testJudgeFalse();
};

#endif	/* GUARDIFTESTCLASS1_H */

