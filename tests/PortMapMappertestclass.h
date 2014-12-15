/*
 * File:   PortMapMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/16, 2:29:37
 */

#ifndef PORTMAPMAPPERTESTCLASS_H
#define	PORTMAPMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class PortMapMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PortMapMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    PortMapMappertestclass();
    virtual ~PortMapMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* PORTMAPMAPPERTESTCLASS_H */

