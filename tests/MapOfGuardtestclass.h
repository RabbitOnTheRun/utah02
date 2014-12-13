/*
 * File:   MapOfGuardtestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/13, 23:28:15
 */

#ifndef MAPOFGUARDTESTCLASS_H
#define	MAPOFGUARDTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class MapOfGuardtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MapOfGuardtestclass);

    CPPUNIT_TEST(testAddGuard);
    CPPUNIT_TEST(testJudge);

    CPPUNIT_TEST_SUITE_END();

public:
    MapOfGuardtestclass();
    virtual ~MapOfGuardtestclass();
    void setUp();
    void tearDown();

private:
    void testAddGuard();
    void testJudge();

};

#endif	/* MAPOFGUARDTESTCLASS_H */

