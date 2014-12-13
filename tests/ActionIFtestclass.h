/*
 * File:   ActionIFtestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/14, 0:09:13
 */

#ifndef ACTIONIFTESTCLASS_H
#define	ACTIONIFTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class ActionIFtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ActionIFtestclass);

    CPPUNIT_TEST(testExecute);


    CPPUNIT_TEST_SUITE_END();

public:
    ActionIFtestclass();
    virtual ~ActionIFtestclass();
    void setUp();
    void tearDown();

private:
    void testExecute();

};

#endif	/* ACTIONIFTESTCLASS_H */

