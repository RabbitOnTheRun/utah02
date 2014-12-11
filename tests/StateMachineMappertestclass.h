/*
 * File:   StateMachineMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/11, 12:09:15
 */

#ifndef STATEMACHINEMAPPERTESTCLASS_H
#define	STATEMACHINEMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class StateMachineMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(StateMachineMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    StateMachineMappertestclass();
    virtual ~StateMachineMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* STATEMACHINEMAPPERTESTCLASS_H */

