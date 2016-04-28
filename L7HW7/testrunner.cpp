/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_DListCount_init = false;
#include "DListHW_test.h"

static DListCount suite_DListCount;

static CxxTest::List Tests_DListCount = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListCount( "DListHW_test.h", 23, "DListCount", suite_DListCount, Tests_DListCount );

static class TestDescription_suite_DListCount_testCount2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListCount_testCount2() : CxxTest::RealTestDescription( Tests_DListCount, suiteDescription_DListCount, 26, "testCount2" ) {}
 void runTest() { suite_DListCount.testCount2(); }
} testDescription_suite_DListCount_testCount2;

static class TestDescription_suite_DListCount_testCount3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListCount_testCount3() : CxxTest::RealTestDescription( Tests_DListCount, suiteDescription_DListCount, 32, "testCount3" ) {}
 void runTest() { suite_DListCount.testCount3(); }
} testDescription_suite_DListCount_testCount3;

static class TestDescription_suite_DListCount_testCount4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListCount_testCount4() : CxxTest::RealTestDescription( Tests_DListCount, suiteDescription_DListCount, 40, "testCount4" ) {}
 void runTest() { suite_DListCount.testCount4(); }
} testDescription_suite_DListCount_testCount4;

static class TestDescription_suite_DListCount_testCount1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListCount_testCount1() : CxxTest::RealTestDescription( Tests_DListCount, suiteDescription_DListCount, 45, "testCount1" ) {}
 void runTest() { suite_DListCount.testCount1(); }
} testDescription_suite_DListCount_testCount1;

static DListSplitHalf suite_DListSplitHalf;

static CxxTest::List Tests_DListSplitHalf = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListSplitHalf( "DListHW_test.h", 52, "DListSplitHalf", suite_DListSplitHalf, Tests_DListSplitHalf );

static class TestDescription_suite_DListSplitHalf_testSplit1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitHalf_testSplit1() : CxxTest::RealTestDescription( Tests_DListSplitHalf, suiteDescription_DListSplitHalf, 55, "testSplit1" ) {}
 void runTest() { suite_DListSplitHalf.testSplit1(); }
} testDescription_suite_DListSplitHalf_testSplit1;

static class TestDescription_suite_DListSplitHalf_testSplit2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitHalf_testSplit2() : CxxTest::RealTestDescription( Tests_DListSplitHalf, suiteDescription_DListSplitHalf, 69, "testSplit2" ) {}
 void runTest() { suite_DListSplitHalf.testSplit2(); }
} testDescription_suite_DListSplitHalf_testSplit2;

static class TestDescription_suite_DListSplitHalf_testSplit3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitHalf_testSplit3() : CxxTest::RealTestDescription( Tests_DListSplitHalf, suiteDescription_DListSplitHalf, 84, "testSplit3" ) {}
 void runTest() { suite_DListSplitHalf.testSplit3(); }
} testDescription_suite_DListSplitHalf_testSplit3;

static class TestDescription_suite_DListSplitHalf_testSplit4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitHalf_testSplit4() : CxxTest::RealTestDescription( Tests_DListSplitHalf, suiteDescription_DListSplitHalf, 96, "testSplit4" ) {}
 void runTest() { suite_DListSplitHalf.testSplit4(); }
} testDescription_suite_DListSplitHalf_testSplit4;

static DListSplitHalfSpeed suite_DListSplitHalfSpeed;

static CxxTest::List Tests_DListSplitHalfSpeed = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListSplitHalfSpeed( "DListHW_test.h", 110, "DListSplitHalfSpeed", suite_DListSplitHalfSpeed, Tests_DListSplitHalfSpeed );

static class TestDescription_suite_DListSplitHalfSpeed_testSplitSpeed1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitHalfSpeed_testSplitSpeed1() : CxxTest::RealTestDescription( Tests_DListSplitHalfSpeed, suiteDescription_DListSplitHalfSpeed, 112, "testSplitSpeed1" ) {}
 void runTest() { suite_DListSplitHalfSpeed.testSplitSpeed1(); }
} testDescription_suite_DListSplitHalfSpeed_testSplitSpeed1;

static DListSplitEveryOther suite_DListSplitEveryOther;

static CxxTest::List Tests_DListSplitEveryOther = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListSplitEveryOther( "DListHW_test.h", 131, "DListSplitEveryOther", suite_DListSplitEveryOther, Tests_DListSplitEveryOther );

static class TestDescription_suite_DListSplitEveryOther_testSplitEO1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitEveryOther_testSplitEO1() : CxxTest::RealTestDescription( Tests_DListSplitEveryOther, suiteDescription_DListSplitEveryOther, 134, "testSplitEO1" ) {}
 void runTest() { suite_DListSplitEveryOther.testSplitEO1(); }
} testDescription_suite_DListSplitEveryOther_testSplitEO1;

static class TestDescription_suite_DListSplitEveryOther_testSplitEO2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitEveryOther_testSplitEO2() : CxxTest::RealTestDescription( Tests_DListSplitEveryOther, suiteDescription_DListSplitEveryOther, 148, "testSplitEO2" ) {}
 void runTest() { suite_DListSplitEveryOther.testSplitEO2(); }
} testDescription_suite_DListSplitEveryOther_testSplitEO2;

static class TestDescription_suite_DListSplitEveryOther_testSplitEO3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitEveryOther_testSplitEO3() : CxxTest::RealTestDescription( Tests_DListSplitEveryOther, suiteDescription_DListSplitEveryOther, 163, "testSplitEO3" ) {}
 void runTest() { suite_DListSplitEveryOther.testSplitEO3(); }
} testDescription_suite_DListSplitEveryOther_testSplitEO3;

static class TestDescription_suite_DListSplitEveryOther_testSplitEO4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSplitEveryOther_testSplitEO4() : CxxTest::RealTestDescription( Tests_DListSplitEveryOther, suiteDescription_DListSplitEveryOther, 178, "testSplitEO4" ) {}
 void runTest() { suite_DListSplitEveryOther.testSplitEO4(); }
} testDescription_suite_DListSplitEveryOther_testSplitEO4;

static DListReverseThis suite_DListReverseThis;

static CxxTest::List Tests_DListReverseThis = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListReverseThis( "DListHW_test.h", 187, "DListReverseThis", suite_DListReverseThis, Tests_DListReverseThis );

static class TestDescription_suite_DListReverseThis_testReverseThis1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverseThis_testReverseThis1() : CxxTest::RealTestDescription( Tests_DListReverseThis, suiteDescription_DListReverseThis, 190, "testReverseThis1" ) {}
 void runTest() { suite_DListReverseThis.testReverseThis1(); }
} testDescription_suite_DListReverseThis_testReverseThis1;

static class TestDescription_suite_DListReverseThis_testReverseThis2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverseThis_testReverseThis2() : CxxTest::RealTestDescription( Tests_DListReverseThis, suiteDescription_DListReverseThis, 200, "testReverseThis2" ) {}
 void runTest() { suite_DListReverseThis.testReverseThis2(); }
} testDescription_suite_DListReverseThis_testReverseThis2;

static class TestDescription_suite_DListReverseThis_testReverseThis3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverseThis_testReverseThis3() : CxxTest::RealTestDescription( Tests_DListReverseThis, suiteDescription_DListReverseThis, 211, "testReverseThis3" ) {}
 void runTest() { suite_DListReverseThis.testReverseThis3(); }
} testDescription_suite_DListReverseThis_testReverseThis3;

static class TestDescription_suite_DListReverseThis_testReverseThis4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverseThis_testReverseThis4() : CxxTest::RealTestDescription( Tests_DListReverseThis, suiteDescription_DListReverseThis, 217, "testReverseThis4" ) {}
 void runTest() { suite_DListReverseThis.testReverseThis4(); }
} testDescription_suite_DListReverseThis_testReverseThis4;

static DListReverseSpeed suite_DListReverseSpeed;

static CxxTest::List Tests_DListReverseSpeed = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListReverseSpeed( "DListHW_test.h", 225, "DListReverseSpeed", suite_DListReverseSpeed, Tests_DListReverseSpeed );

static class TestDescription_suite_DListReverseSpeed_testReverseSpeed1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverseSpeed_testReverseSpeed1() : CxxTest::RealTestDescription( Tests_DListReverseSpeed, suiteDescription_DListReverseSpeed, 227, "testReverseSpeed1" ) {}
 void runTest() { suite_DListReverseSpeed.testReverseSpeed1(); }
} testDescription_suite_DListReverseSpeed_testReverseSpeed1;

static DListDoubleThis suite_DListDoubleThis;

static CxxTest::List Tests_DListDoubleThis = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListDoubleThis( "DListHW_test.h", 244, "DListDoubleThis", suite_DListDoubleThis, Tests_DListDoubleThis );

static class TestDescription_suite_DListDoubleThis_testDoubleThis2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListDoubleThis_testDoubleThis2() : CxxTest::RealTestDescription( Tests_DListDoubleThis, suiteDescription_DListDoubleThis, 247, "testDoubleThis2" ) {}
 void runTest() { suite_DListDoubleThis.testDoubleThis2(); }
} testDescription_suite_DListDoubleThis_testDoubleThis2;

static class TestDescription_suite_DListDoubleThis_testDoubleThis3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListDoubleThis_testDoubleThis3() : CxxTest::RealTestDescription( Tests_DListDoubleThis, suiteDescription_DListDoubleThis, 254, "testDoubleThis3" ) {}
 void runTest() { suite_DListDoubleThis.testDoubleThis3(); }
} testDescription_suite_DListDoubleThis_testDoubleThis3;

static class TestDescription_suite_DListDoubleThis_testDoubleThis4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListDoubleThis_testDoubleThis4() : CxxTest::RealTestDescription( Tests_DListDoubleThis, suiteDescription_DListDoubleThis, 260, "testDoubleThis4" ) {}
 void runTest() { suite_DListDoubleThis.testDoubleThis4(); }
} testDescription_suite_DListDoubleThis_testDoubleThis4;

static DListSetEq suite_DListSetEq;

static CxxTest::List Tests_DListSetEq = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListSetEq( "DListHW_test.h", 273, "DListSetEq", suite_DListSetEq, Tests_DListSetEq );

static class TestDescription_suite_DListSetEq_testSetEQ2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetEq_testSetEQ2() : CxxTest::RealTestDescription( Tests_DListSetEq, suiteDescription_DListSetEq, 277, "testSetEQ2" ) {}
 void runTest() { suite_DListSetEq.testSetEQ2(); }
} testDescription_suite_DListSetEq_testSetEQ2;

static class TestDescription_suite_DListSetEq_testSetEQ3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetEq_testSetEQ3() : CxxTest::RealTestDescription( Tests_DListSetEq, suiteDescription_DListSetEq, 285, "testSetEQ3" ) {}
 void runTest() { suite_DListSetEq.testSetEQ3(); }
} testDescription_suite_DListSetEq_testSetEQ3;

static class TestDescription_suite_DListSetEq_testSetEQ4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetEq_testSetEQ4() : CxxTest::RealTestDescription( Tests_DListSetEq, suiteDescription_DListSetEq, 293, "testSetEQ4" ) {}
 void runTest() { suite_DListSetEq.testSetEQ4(); }
} testDescription_suite_DListSetEq_testSetEQ4;

static class TestDescription_suite_DListSetEq_testSetEQSpeed2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetEq_testSetEQSpeed2() : CxxTest::RealTestDescription( Tests_DListSetEq, suiteDescription_DListSetEq, 302, "testSetEQSpeed2" ) {}
 void runTest() { suite_DListSetEq.testSetEQSpeed2(); }
} testDescription_suite_DListSetEq_testSetEQSpeed2;

static DListSetEqSpeed suite_DListSetEqSpeed;

static CxxTest::List Tests_DListSetEqSpeed = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListSetEqSpeed( "DListHW_test.h", 322, "DListSetEqSpeed", suite_DListSetEqSpeed, Tests_DListSetEqSpeed );

static class TestDescription_suite_DListSetEqSpeed_testSetEQSpeed1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetEqSpeed_testSetEQSpeed1() : CxxTest::RealTestDescription( Tests_DListSetEqSpeed, suiteDescription_DListSetEqSpeed, 324, "testSetEQSpeed1" ) {}
 void runTest() { suite_DListSetEqSpeed.testSetEQSpeed1(); }
} testDescription_suite_DListSetEqSpeed_testSetEQSpeed1;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
