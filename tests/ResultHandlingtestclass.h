/*
 * File:   ResultHandlingtestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 23:18:38
 */

#ifndef RESULTHANDLINGTESTCLASS_H
#define	RESULTHANDLINGTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class ResultHandlingtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ResultHandlingtestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    ResultHandlingtestclass();
    virtual ~ResultHandlingtestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* RESULTHANDLINGTESTCLASS_H */

