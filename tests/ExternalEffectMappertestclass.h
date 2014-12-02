/*
 * File:   ExternalEffectMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 22:44:16
 */

#ifndef EXTERNALEFFECTMAPPERTESTCLASS_H
#define	EXTERNALEFFECTMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class ExternalEffectMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ExternalEffectMappertestclass);

    CPPUNIT_TEST(testCreate);

    CPPUNIT_TEST_SUITE_END();

public:
    ExternalEffectMappertestclass();
    virtual ~ExternalEffectMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();

};

#endif	/* EXTERNALEFFECTMAPPERTESTCLASS_H */

