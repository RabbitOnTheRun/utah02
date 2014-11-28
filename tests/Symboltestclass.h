/*
 * File:   Symboltestclass.h
 * Author: ntanaka
 *
 * Created on 2014/11/22, 2:22:42
 */

#ifndef SYMBOLTESTCLASS_H
#define	SYMBOLTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class Symboltestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(Symboltestclass);

    CPPUNIT_TEST(testCreate);
    CPPUNIT_TEST(testEq);
    CPPUNIT_TEST(testGetName);

    CPPUNIT_TEST_SUITE_END();

public:
    Symboltestclass();
    virtual ~Symboltestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();
    void testEq();
    void testGetName();

};

#endif	/* SYMBOLTESTCLASS_H */

