/*
 * File:   MessageEmissiontestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 22:10:45
 */

#ifndef MESSAGEEMISSIONTESTCLASS_H
#define	MESSAGEEMISSIONTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class MessageEmissiontestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MessageEmissiontestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    MessageEmissiontestclass();
    virtual ~MessageEmissiontestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* MESSAGEEMISSIONTESTCLASS_H */

