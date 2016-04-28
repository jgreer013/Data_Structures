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
bool suite_MaxHeapTest_init = false;
#include "MaxHeap_test.h"

static MaxHeapTest suite_MaxHeapTest;

static CxxTest::List Tests_MaxHeapTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MaxHeapTest( "MaxHeap_test.h", 17, "MaxHeapTest", suite_MaxHeapTest, Tests_MaxHeapTest );

static class TestDescription_suite_MaxHeapTest_testCon0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testCon0() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 20, "testCon0" ) {}
 void runTest() { suite_MaxHeapTest.testCon0(); }
} testDescription_suite_MaxHeapTest_testCon0;

static class TestDescription_suite_MaxHeapTest_testCon1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testCon1() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 25, "testCon1" ) {}
 void runTest() { suite_MaxHeapTest.testCon1(); }
} testDescription_suite_MaxHeapTest_testCon1;

static class TestDescription_suite_MaxHeapTest_testCop0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testCop0() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 32, "testCop0" ) {}
 void runTest() { suite_MaxHeapTest.testCop0(); }
} testDescription_suite_MaxHeapTest_testCop0;

static class TestDescription_suite_MaxHeapTest_testCop1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testCop1() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 39, "testCop1" ) {}
 void runTest() { suite_MaxHeapTest.testCop1(); }
} testDescription_suite_MaxHeapTest_testCop1;

static class TestDescription_suite_MaxHeapTest_testCop2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testCop2() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 47, "testCop2" ) {}
 void runTest() { suite_MaxHeapTest.testCop2(); }
} testDescription_suite_MaxHeapTest_testCop2;

static class TestDescription_suite_MaxHeapTest_testAssign0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testAssign0() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 56, "testAssign0" ) {}
 void runTest() { suite_MaxHeapTest.testAssign0(); }
} testDescription_suite_MaxHeapTest_testAssign0;

static class TestDescription_suite_MaxHeapTest_testAssign1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testAssign1() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 63, "testAssign1" ) {}
 void runTest() { suite_MaxHeapTest.testAssign1(); }
} testDescription_suite_MaxHeapTest_testAssign1;

static class TestDescription_suite_MaxHeapTest_testAssign2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testAssign2() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 72, "testAssign2" ) {}
 void runTest() { suite_MaxHeapTest.testAssign2(); }
} testDescription_suite_MaxHeapTest_testAssign2;

static class TestDescription_suite_MaxHeapTest_testSize0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testSize0() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 82, "testSize0" ) {}
 void runTest() { suite_MaxHeapTest.testSize0(); }
} testDescription_suite_MaxHeapTest_testSize0;

static class TestDescription_suite_MaxHeapTest_testSize1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testSize1() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 89, "testSize1" ) {}
 void runTest() { suite_MaxHeapTest.testSize1(); }
} testDescription_suite_MaxHeapTest_testSize1;

static class TestDescription_suite_MaxHeapTest_testSize2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testSize2() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 99, "testSize2" ) {}
 void runTest() { suite_MaxHeapTest.testSize2(); }
} testDescription_suite_MaxHeapTest_testSize2;

static class TestDescription_suite_MaxHeapTest_testPush0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testPush0() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 107, "testPush0" ) {}
 void runTest() { suite_MaxHeapTest.testPush0(); }
} testDescription_suite_MaxHeapTest_testPush0;

static class TestDescription_suite_MaxHeapTest_testPush1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testPush1() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 113, "testPush1" ) {}
 void runTest() { suite_MaxHeapTest.testPush1(); }
} testDescription_suite_MaxHeapTest_testPush1;

static class TestDescription_suite_MaxHeapTest_testPush2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testPush2() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 121, "testPush2" ) {}
 void runTest() { suite_MaxHeapTest.testPush2(); }
} testDescription_suite_MaxHeapTest_testPush2;

static class TestDescription_suite_MaxHeapTest_testPop0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testPop0() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 131, "testPop0" ) {}
 void runTest() { suite_MaxHeapTest.testPop0(); }
} testDescription_suite_MaxHeapTest_testPop0;

static class TestDescription_suite_MaxHeapTest_testPop1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testPop1() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 137, "testPop1" ) {}
 void runTest() { suite_MaxHeapTest.testPop1(); }
} testDescription_suite_MaxHeapTest_testPop1;

static class TestDescription_suite_MaxHeapTest_testPop2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testPop2() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 144, "testPop2" ) {}
 void runTest() { suite_MaxHeapTest.testPop2(); }
} testDescription_suite_MaxHeapTest_testPop2;

static class TestDescription_suite_MaxHeapTest_testTop0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testTop0() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 157, "testTop0" ) {}
 void runTest() { suite_MaxHeapTest.testTop0(); }
} testDescription_suite_MaxHeapTest_testTop0;

static class TestDescription_suite_MaxHeapTest_testTop1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testTop1() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 162, "testTop1" ) {}
 void runTest() { suite_MaxHeapTest.testTop1(); }
} testDescription_suite_MaxHeapTest_testTop1;

static class TestDescription_suite_MaxHeapTest_testTop2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testTop2() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 168, "testTop2" ) {}
 void runTest() { suite_MaxHeapTest.testTop2(); }
} testDescription_suite_MaxHeapTest_testTop2;

static class TestDescription_suite_MaxHeapTest_testTalaga : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MaxHeapTest_testTalaga() : CxxTest::RealTestDescription( Tests_MaxHeapTest, suiteDescription_MaxHeapTest, 176, "testTalaga" ) {}
 void runTest() { suite_MaxHeapTest.testTalaga(); }
} testDescription_suite_MaxHeapTest_testTalaga;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
