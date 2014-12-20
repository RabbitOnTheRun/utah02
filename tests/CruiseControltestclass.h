/*
 * File:   CruiseControltestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/20, 19:44:34
 */

#ifndef CRUISECONTROLTESTCLASS_H
#define	CRUISECONTROLTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class CruiseControltestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(CruiseControltestclass);

    CPPUNIT_TEST(testMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    CruiseControltestclass();
    virtual ~CruiseControltestclass();
    void setUp();
    void tearDown();

private:
    void testMethod();
};

#endif	/* CRUISECONTROLTESTCLASS_H */

