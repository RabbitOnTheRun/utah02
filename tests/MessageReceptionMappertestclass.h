/*
 * File:   MessageReceptionMappertestclass.h
 * Author: ntanaka
 *
 * Created on 2014/12/02, 17:43:10
 */

#ifndef MESSAGERECEPTIONMAPPERTESTCLASS_H
#define	MESSAGERECEPTIONMAPPERTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class MessageReceptionMappertestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MessageReceptionMappertestclass);

    CPPUNIT_TEST(testCreate);
    CPPUNIT_TEST(testIfMatch);

    CPPUNIT_TEST_SUITE_END();

public:
    MessageReceptionMappertestclass();
    virtual ~MessageReceptionMappertestclass();
    void setUp();
    void tearDown();

private:
    void testCreate();
    void testIfMatch();

};

#endif	/* MESSAGERECEPTIONMAPPERTESTCLASS_H */

