/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
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
bool suite_SmartArrayAT_init = false;
#include "SmartArray_hw_test.h"

static SmartArrayAT suite_SmartArrayAT;

static CxxTest::List Tests_SmartArrayAT = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmartArrayAT( "SmartArray_hw_test.h", 16, "SmartArrayAT", suite_SmartArrayAT, Tests_SmartArrayAT );

static class TestDescription_suite_SmartArrayAT_testAt1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAT_testAt1() : CxxTest::RealTestDescription( Tests_SmartArrayAT, suiteDescription_SmartArrayAT, 20, "testAt1" ) {}
 void runTest() { suite_SmartArrayAT.testAt1(); }
} testDescription_suite_SmartArrayAT_testAt1;

static class TestDescription_suite_SmartArrayAT_testAt2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAT_testAt2() : CxxTest::RealTestDescription( Tests_SmartArrayAT, suiteDescription_SmartArrayAT, 29, "testAt2" ) {}
 void runTest() { suite_SmartArrayAT.testAt2(); }
} testDescription_suite_SmartArrayAT_testAt2;

static class TestDescription_suite_SmartArrayAT_testAt3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAT_testAt3() : CxxTest::RealTestDescription( Tests_SmartArrayAT, suiteDescription_SmartArrayAT, 38, "testAt3" ) {}
 void runTest() { suite_SmartArrayAT.testAt3(); }
} testDescription_suite_SmartArrayAT_testAt3;

static class TestDescription_suite_SmartArrayAT_testBracket1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAT_testBracket1() : CxxTest::RealTestDescription( Tests_SmartArrayAT, suiteDescription_SmartArrayAT, 47, "testBracket1" ) {}
 void runTest() { suite_SmartArrayAT.testBracket1(); }
} testDescription_suite_SmartArrayAT_testBracket1;

static class TestDescription_suite_SmartArrayAT_testBracket2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAT_testBracket2() : CxxTest::RealTestDescription( Tests_SmartArrayAT, suiteDescription_SmartArrayAT, 55, "testBracket2" ) {}
 void runTest() { suite_SmartArrayAT.testBracket2(); }
} testDescription_suite_SmartArrayAT_testBracket2;

static class TestDescription_suite_SmartArrayAT_testBracket3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAT_testBracket3() : CxxTest::RealTestDescription( Tests_SmartArrayAT, suiteDescription_SmartArrayAT, 61, "testBracket3" ) {}
 void runTest() { suite_SmartArrayAT.testBracket3(); }
} testDescription_suite_SmartArrayAT_testBracket3;

static SmartArrayClear suite_SmartArrayClear;

static CxxTest::List Tests_SmartArrayClear = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmartArrayClear( "SmartArray_hw_test.h", 73, "SmartArrayClear", suite_SmartArrayClear, Tests_SmartArrayClear );

static class TestDescription_suite_SmartArrayClear_testClear1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayClear_testClear1() : CxxTest::RealTestDescription( Tests_SmartArrayClear, suiteDescription_SmartArrayClear, 77, "testClear1" ) {}
 void runTest() { suite_SmartArrayClear.testClear1(); }
} testDescription_suite_SmartArrayClear_testClear1;

static class TestDescription_suite_SmartArrayClear_testClear2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayClear_testClear2() : CxxTest::RealTestDescription( Tests_SmartArrayClear, suiteDescription_SmartArrayClear, 85, "testClear2" ) {}
 void runTest() { suite_SmartArrayClear.testClear2(); }
} testDescription_suite_SmartArrayClear_testClear2;

static class TestDescription_suite_SmartArrayClear_testClear3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayClear_testClear3() : CxxTest::RealTestDescription( Tests_SmartArrayClear, suiteDescription_SmartArrayClear, 97, "testClear3" ) {}
 void runTest() { suite_SmartArrayClear.testClear3(); }
} testDescription_suite_SmartArrayClear_testClear3;

static SmartArrayAdd suite_SmartArrayAdd;

static CxxTest::List Tests_SmartArrayAdd = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmartArrayAdd( "SmartArray_hw_test.h", 112, "SmartArrayAdd", suite_SmartArrayAdd, Tests_SmartArrayAdd );

static class TestDescription_suite_SmartArrayAdd_testAdd1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAdd_testAdd1() : CxxTest::RealTestDescription( Tests_SmartArrayAdd, suiteDescription_SmartArrayAdd, 116, "testAdd1" ) {}
 void runTest() { suite_SmartArrayAdd.testAdd1(); }
} testDescription_suite_SmartArrayAdd_testAdd1;

static class TestDescription_suite_SmartArrayAdd_testAdd2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAdd_testAdd2() : CxxTest::RealTestDescription( Tests_SmartArrayAdd, suiteDescription_SmartArrayAdd, 128, "testAdd2" ) {}
 void runTest() { suite_SmartArrayAdd.testAdd2(); }
} testDescription_suite_SmartArrayAdd_testAdd2;

static class TestDescription_suite_SmartArrayAdd_testAdd3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAdd_testAdd3() : CxxTest::RealTestDescription( Tests_SmartArrayAdd, suiteDescription_SmartArrayAdd, 140, "testAdd3" ) {}
 void runTest() { suite_SmartArrayAdd.testAdd3(); }
} testDescription_suite_SmartArrayAdd_testAdd3;

static class TestDescription_suite_SmartArrayAdd_testAdd4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAdd_testAdd4() : CxxTest::RealTestDescription( Tests_SmartArrayAdd, suiteDescription_SmartArrayAdd, 154, "testAdd4" ) {}
 void runTest() { suite_SmartArrayAdd.testAdd4(); }
} testDescription_suite_SmartArrayAdd_testAdd4;

static class TestDescription_suite_SmartArrayAdd_testAdd5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAdd_testAdd5() : CxxTest::RealTestDescription( Tests_SmartArrayAdd, suiteDescription_SmartArrayAdd, 165, "testAdd5" ) {}
 void runTest() { suite_SmartArrayAdd.testAdd5(); }
} testDescription_suite_SmartArrayAdd_testAdd5;

static class TestDescription_suite_SmartArrayAdd_testAdd6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayAdd_testAdd6() : CxxTest::RealTestDescription( Tests_SmartArrayAdd, suiteDescription_SmartArrayAdd, 175, "testAdd6" ) {}
 void runTest() { suite_SmartArrayAdd.testAdd6(); }
} testDescription_suite_SmartArrayAdd_testAdd6;

static SmartArrayReverse suite_SmartArrayReverse;

static CxxTest::List Tests_SmartArrayReverse = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmartArrayReverse( "SmartArray_hw_test.h", 187, "SmartArrayReverse", suite_SmartArrayReverse, Tests_SmartArrayReverse );

static class TestDescription_suite_SmartArrayReverse_testRev1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayReverse_testRev1() : CxxTest::RealTestDescription( Tests_SmartArrayReverse, suiteDescription_SmartArrayReverse, 191, "testRev1" ) {}
 void runTest() { suite_SmartArrayReverse.testRev1(); }
} testDescription_suite_SmartArrayReverse_testRev1;

static class TestDescription_suite_SmartArrayReverse_testRev2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayReverse_testRev2() : CxxTest::RealTestDescription( Tests_SmartArrayReverse, suiteDescription_SmartArrayReverse, 202, "testRev2" ) {}
 void runTest() { suite_SmartArrayReverse.testRev2(); }
} testDescription_suite_SmartArrayReverse_testRev2;

static class TestDescription_suite_SmartArrayReverse_testRev3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayReverse_testRev3() : CxxTest::RealTestDescription( Tests_SmartArrayReverse, suiteDescription_SmartArrayReverse, 213, "testRev3" ) {}
 void runTest() { suite_SmartArrayReverse.testRev3(); }
} testDescription_suite_SmartArrayReverse_testRev3;

static class TestDescription_suite_SmartArrayReverse_testRev4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayReverse_testRev4() : CxxTest::RealTestDescription( Tests_SmartArrayReverse, suiteDescription_SmartArrayReverse, 222, "testRev4" ) {}
 void runTest() { suite_SmartArrayReverse.testRev4(); }
} testDescription_suite_SmartArrayReverse_testRev4;

static class TestDescription_suite_SmartArrayReverse_testRev5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayReverse_testRev5() : CxxTest::RealTestDescription( Tests_SmartArrayReverse, suiteDescription_SmartArrayReverse, 230, "testRev5" ) {}
 void runTest() { suite_SmartArrayReverse.testRev5(); }
} testDescription_suite_SmartArrayReverse_testRev5;

static class TestDescription_suite_SmartArrayReverse_testRev6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayReverse_testRev6() : CxxTest::RealTestDescription( Tests_SmartArrayReverse, suiteDescription_SmartArrayReverse, 242, "testRev6" ) {}
 void runTest() { suite_SmartArrayReverse.testRev6(); }
} testDescription_suite_SmartArrayReverse_testRev6;

static SmartArrayEquality suite_SmartArrayEquality;

static CxxTest::List Tests_SmartArrayEquality = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmartArrayEquality( "SmartArray_hw_test.h", 255, "SmartArrayEquality", suite_SmartArrayEquality, Tests_SmartArrayEquality );

static class TestDescription_suite_SmartArrayEquality_testEq1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayEquality_testEq1() : CxxTest::RealTestDescription( Tests_SmartArrayEquality, suiteDescription_SmartArrayEquality, 259, "testEq1" ) {}
 void runTest() { suite_SmartArrayEquality.testEq1(); }
} testDescription_suite_SmartArrayEquality_testEq1;

static class TestDescription_suite_SmartArrayEquality_testEq2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayEquality_testEq2() : CxxTest::RealTestDescription( Tests_SmartArrayEquality, suiteDescription_SmartArrayEquality, 268, "testEq2" ) {}
 void runTest() { suite_SmartArrayEquality.testEq2(); }
} testDescription_suite_SmartArrayEquality_testEq2;

static class TestDescription_suite_SmartArrayEquality_testEq3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayEquality_testEq3() : CxxTest::RealTestDescription( Tests_SmartArrayEquality, suiteDescription_SmartArrayEquality, 279, "testEq3" ) {}
 void runTest() { suite_SmartArrayEquality.testEq3(); }
} testDescription_suite_SmartArrayEquality_testEq3;

static class TestDescription_suite_SmartArrayEquality_testNeq2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayEquality_testNeq2() : CxxTest::RealTestDescription( Tests_SmartArrayEquality, suiteDescription_SmartArrayEquality, 299, "testNeq2" ) {}
 void runTest() { suite_SmartArrayEquality.testNeq2(); }
} testDescription_suite_SmartArrayEquality_testNeq2;

static SmartArrayCopyAssignment suite_SmartArrayCopyAssignment;

static CxxTest::List Tests_SmartArrayCopyAssignment = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmartArrayCopyAssignment( "SmartArray_hw_test.h", 324, "SmartArrayCopyAssignment", suite_SmartArrayCopyAssignment, Tests_SmartArrayCopyAssignment );

static class TestDescription_suite_SmartArrayCopyAssignment_testCopy1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayCopyAssignment_testCopy1() : CxxTest::RealTestDescription( Tests_SmartArrayCopyAssignment, suiteDescription_SmartArrayCopyAssignment, 328, "testCopy1" ) {}
 void runTest() { suite_SmartArrayCopyAssignment.testCopy1(); }
} testDescription_suite_SmartArrayCopyAssignment_testCopy1;

static class TestDescription_suite_SmartArrayCopyAssignment_testCopy2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayCopyAssignment_testCopy2() : CxxTest::RealTestDescription( Tests_SmartArrayCopyAssignment, suiteDescription_SmartArrayCopyAssignment, 338, "testCopy2" ) {}
 void runTest() { suite_SmartArrayCopyAssignment.testCopy2(); }
} testDescription_suite_SmartArrayCopyAssignment_testCopy2;

static class TestDescription_suite_SmartArrayCopyAssignment_testCopy3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayCopyAssignment_testCopy3() : CxxTest::RealTestDescription( Tests_SmartArrayCopyAssignment, suiteDescription_SmartArrayCopyAssignment, 348, "testCopy3" ) {}
 void runTest() { suite_SmartArrayCopyAssignment.testCopy3(); }
} testDescription_suite_SmartArrayCopyAssignment_testCopy3;

static class TestDescription_suite_SmartArrayCopyAssignment_testCopy4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayCopyAssignment_testCopy4() : CxxTest::RealTestDescription( Tests_SmartArrayCopyAssignment, suiteDescription_SmartArrayCopyAssignment, 361, "testCopy4" ) {}
 void runTest() { suite_SmartArrayCopyAssignment.testCopy4(); }
} testDescription_suite_SmartArrayCopyAssignment_testCopy4;

static class TestDescription_suite_SmartArrayCopyAssignment_testCopy5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayCopyAssignment_testCopy5() : CxxTest::RealTestDescription( Tests_SmartArrayCopyAssignment, suiteDescription_SmartArrayCopyAssignment, 369, "testCopy5" ) {}
 void runTest() { suite_SmartArrayCopyAssignment.testCopy5(); }
} testDescription_suite_SmartArrayCopyAssignment_testCopy5;

static class TestDescription_suite_SmartArrayCopyAssignment_testCopy6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayCopyAssignment_testCopy6() : CxxTest::RealTestDescription( Tests_SmartArrayCopyAssignment, suiteDescription_SmartArrayCopyAssignment, 380, "testCopy6" ) {}
 void runTest() { suite_SmartArrayCopyAssignment.testCopy6(); }
} testDescription_suite_SmartArrayCopyAssignment_testCopy6;

static SmartArrayStream suite_SmartArrayStream;

static CxxTest::List Tests_SmartArrayStream = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SmartArrayStream( "SmartArray_hw_test.h", 394, "SmartArrayStream", suite_SmartArrayStream, Tests_SmartArrayStream );

static class TestDescription_suite_SmartArrayStream_testStream1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayStream_testStream1() : CxxTest::RealTestDescription( Tests_SmartArrayStream, suiteDescription_SmartArrayStream, 397, "testStream1" ) {}
 void runTest() { suite_SmartArrayStream.testStream1(); }
} testDescription_suite_SmartArrayStream_testStream1;

static class TestDescription_suite_SmartArrayStream_testStream2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayStream_testStream2() : CxxTest::RealTestDescription( Tests_SmartArrayStream, suiteDescription_SmartArrayStream, 410, "testStream2" ) {}
 void runTest() { suite_SmartArrayStream.testStream2(); }
} testDescription_suite_SmartArrayStream_testStream2;

static class TestDescription_suite_SmartArrayStream_testStream3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayStream_testStream3() : CxxTest::RealTestDescription( Tests_SmartArrayStream, suiteDescription_SmartArrayStream, 422, "testStream3" ) {}
 void runTest() { suite_SmartArrayStream.testStream3(); }
} testDescription_suite_SmartArrayStream_testStream3;

static class TestDescription_suite_SmartArrayStream_testStream4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayStream_testStream4() : CxxTest::RealTestDescription( Tests_SmartArrayStream, suiteDescription_SmartArrayStream, 434, "testStream4" ) {}
 void runTest() { suite_SmartArrayStream.testStream4(); }
} testDescription_suite_SmartArrayStream_testStream4;

static class TestDescription_suite_SmartArrayStream_testStream5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayStream_testStream5() : CxxTest::RealTestDescription( Tests_SmartArrayStream, suiteDescription_SmartArrayStream, 446, "testStream5" ) {}
 void runTest() { suite_SmartArrayStream.testStream5(); }
} testDescription_suite_SmartArrayStream_testStream5;

static class TestDescription_suite_SmartArrayStream_testStream6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SmartArrayStream_testStream6() : CxxTest::RealTestDescription( Tests_SmartArrayStream, suiteDescription_SmartArrayStream, 459, "testStream6" ) {}
 void runTest() { suite_SmartArrayStream.testStream6(); }
} testDescription_suite_SmartArrayStream_testStream6;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
