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
bool suite_MyStackTests_init = false;
#include "MyStack_test.h"

static MyStackTests suite_MyStackTests;

static CxxTest::List Tests_MyStackTests = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyStackTests( "MyStack_test.h", 18, "MyStackTests", suite_MyStackTests, Tests_MyStackTests );

static class TestDescription_suite_MyStackTests_testCopy1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testCopy1() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 23, "testCopy1" ) {}
 void runTest() { suite_MyStackTests.testCopy1(); }
} testDescription_suite_MyStackTests_testCopy1;

static class TestDescription_suite_MyStackTests_testCopy2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testCopy2() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 29, "testCopy2" ) {}
 void runTest() { suite_MyStackTests.testCopy2(); }
} testDescription_suite_MyStackTests_testCopy2;

static class TestDescription_suite_MyStackTests_testCopy3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testCopy3() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 36, "testCopy3" ) {}
 void runTest() { suite_MyStackTests.testCopy3(); }
} testDescription_suite_MyStackTests_testCopy3;

static class TestDescription_suite_MyStackTests_testAssign1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testAssign1() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 44, "testAssign1" ) {}
 void runTest() { suite_MyStackTests.testAssign1(); }
} testDescription_suite_MyStackTests_testAssign1;

static class TestDescription_suite_MyStackTests_testAssign2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testAssign2() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 51, "testAssign2" ) {}
 void runTest() { suite_MyStackTests.testAssign2(); }
} testDescription_suite_MyStackTests_testAssign2;

static class TestDescription_suite_MyStackTests_testAssign3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testAssign3() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 59, "testAssign3" ) {}
 void runTest() { suite_MyStackTests.testAssign3(); }
} testDescription_suite_MyStackTests_testAssign3;

static class TestDescription_suite_MyStackTests_testPush1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testPush1() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 65, "testPush1" ) {}
 void runTest() { suite_MyStackTests.testPush1(); }
} testDescription_suite_MyStackTests_testPush1;

static class TestDescription_suite_MyStackTests_testPush2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testPush2() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 72, "testPush2" ) {}
 void runTest() { suite_MyStackTests.testPush2(); }
} testDescription_suite_MyStackTests_testPush2;

static class TestDescription_suite_MyStackTests_testPush3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testPush3() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 78, "testPush3" ) {}
 void runTest() { suite_MyStackTests.testPush3(); }
} testDescription_suite_MyStackTests_testPush3;

static class TestDescription_suite_MyStackTests_testTop1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testTop1() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 86, "testTop1" ) {}
 void runTest() { suite_MyStackTests.testTop1(); }
} testDescription_suite_MyStackTests_testTop1;

static class TestDescription_suite_MyStackTests_testTop2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testTop2() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 92, "testTop2" ) {}
 void runTest() { suite_MyStackTests.testTop2(); }
} testDescription_suite_MyStackTests_testTop2;

static class TestDescription_suite_MyStackTests_testTop3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testTop3() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 99, "testTop3" ) {}
 void runTest() { suite_MyStackTests.testTop3(); }
} testDescription_suite_MyStackTests_testTop3;

static class TestDescription_suite_MyStackTests_testPop1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testPop1() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 106, "testPop1" ) {}
 void runTest() { suite_MyStackTests.testPop1(); }
} testDescription_suite_MyStackTests_testPop1;

static class TestDescription_suite_MyStackTests_testPop2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testPop2() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 113, "testPop2" ) {}
 void runTest() { suite_MyStackTests.testPop2(); }
} testDescription_suite_MyStackTests_testPop2;

static class TestDescription_suite_MyStackTests_testPop3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testPop3() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 119, "testPop3" ) {}
 void runTest() { suite_MyStackTests.testPop3(); }
} testDescription_suite_MyStackTests_testPop3;

static class TestDescription_suite_MyStackTests_testSize1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testSize1() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 127, "testSize1" ) {}
 void runTest() { suite_MyStackTests.testSize1(); }
} testDescription_suite_MyStackTests_testSize1;

static class TestDescription_suite_MyStackTests_testSize2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testSize2() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 133, "testSize2" ) {}
 void runTest() { suite_MyStackTests.testSize2(); }
} testDescription_suite_MyStackTests_testSize2;

static class TestDescription_suite_MyStackTests_testSize3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testSize3() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 140, "testSize3" ) {}
 void runTest() { suite_MyStackTests.testSize3(); }
} testDescription_suite_MyStackTests_testSize3;

static class TestDescription_suite_MyStackTests_testEmpty1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testEmpty1() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 149, "testEmpty1" ) {}
 void runTest() { suite_MyStackTests.testEmpty1(); }
} testDescription_suite_MyStackTests_testEmpty1;

static class TestDescription_suite_MyStackTests_testEmpty2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testEmpty2() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 156, "testEmpty2" ) {}
 void runTest() { suite_MyStackTests.testEmpty2(); }
} testDescription_suite_MyStackTests_testEmpty2;

static class TestDescription_suite_MyStackTests_testEmpty3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyStackTests_testEmpty3() : CxxTest::RealTestDescription( Tests_MyStackTests, suiteDescription_MyStackTests, 161, "testEmpty3" ) {}
 void runTest() { suite_MyStackTests.testEmpty3(); }
} testDescription_suite_MyStackTests_testEmpty3;

#include "MyQueue_test.h"

static MyQueueTests suite_MyQueueTests;

static CxxTest::List Tests_MyQueueTests = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyQueueTests( "MyQueue_test.h", 18, "MyQueueTests", suite_MyQueueTests, Tests_MyQueueTests );

static class TestDescription_suite_MyQueueTests_testCopy1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testCopy1() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 24, "testCopy1" ) {}
 void runTest() { suite_MyQueueTests.testCopy1(); }
} testDescription_suite_MyQueueTests_testCopy1;

static class TestDescription_suite_MyQueueTests_testCopy2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testCopy2() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 30, "testCopy2" ) {}
 void runTest() { suite_MyQueueTests.testCopy2(); }
} testDescription_suite_MyQueueTests_testCopy2;

static class TestDescription_suite_MyQueueTests_testCopy3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testCopy3() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 37, "testCopy3" ) {}
 void runTest() { suite_MyQueueTests.testCopy3(); }
} testDescription_suite_MyQueueTests_testCopy3;

static class TestDescription_suite_MyQueueTests_testAssign1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testAssign1() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 45, "testAssign1" ) {}
 void runTest() { suite_MyQueueTests.testAssign1(); }
} testDescription_suite_MyQueueTests_testAssign1;

static class TestDescription_suite_MyQueueTests_testAssign2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testAssign2() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 52, "testAssign2" ) {}
 void runTest() { suite_MyQueueTests.testAssign2(); }
} testDescription_suite_MyQueueTests_testAssign2;

static class TestDescription_suite_MyQueueTests_testAssign3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testAssign3() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 60, "testAssign3" ) {}
 void runTest() { suite_MyQueueTests.testAssign3(); }
} testDescription_suite_MyQueueTests_testAssign3;

static class TestDescription_suite_MyQueueTests_testEnqueue1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testEnqueue1() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 66, "testEnqueue1" ) {}
 void runTest() { suite_MyQueueTests.testEnqueue1(); }
} testDescription_suite_MyQueueTests_testEnqueue1;

static class TestDescription_suite_MyQueueTests_testEnqueue2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testEnqueue2() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 73, "testEnqueue2" ) {}
 void runTest() { suite_MyQueueTests.testEnqueue2(); }
} testDescription_suite_MyQueueTests_testEnqueue2;

static class TestDescription_suite_MyQueueTests_testEnqueue3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testEnqueue3() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 79, "testEnqueue3" ) {}
 void runTest() { suite_MyQueueTests.testEnqueue3(); }
} testDescription_suite_MyQueueTests_testEnqueue3;

static class TestDescription_suite_MyQueueTests_testFront1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testFront1() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 87, "testFront1" ) {}
 void runTest() { suite_MyQueueTests.testFront1(); }
} testDescription_suite_MyQueueTests_testFront1;

static class TestDescription_suite_MyQueueTests_testFront2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testFront2() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 93, "testFront2" ) {}
 void runTest() { suite_MyQueueTests.testFront2(); }
} testDescription_suite_MyQueueTests_testFront2;

static class TestDescription_suite_MyQueueTests_testFront3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testFront3() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 100, "testFront3" ) {}
 void runTest() { suite_MyQueueTests.testFront3(); }
} testDescription_suite_MyQueueTests_testFront3;

static class TestDescription_suite_MyQueueTests_testDequeue1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testDequeue1() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 107, "testDequeue1" ) {}
 void runTest() { suite_MyQueueTests.testDequeue1(); }
} testDescription_suite_MyQueueTests_testDequeue1;

static class TestDescription_suite_MyQueueTests_testDequeue2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testDequeue2() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 114, "testDequeue2" ) {}
 void runTest() { suite_MyQueueTests.testDequeue2(); }
} testDescription_suite_MyQueueTests_testDequeue2;

static class TestDescription_suite_MyQueueTests_testDequeue3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testDequeue3() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 120, "testDequeue3" ) {}
 void runTest() { suite_MyQueueTests.testDequeue3(); }
} testDescription_suite_MyQueueTests_testDequeue3;

static class TestDescription_suite_MyQueueTests_testSize1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testSize1() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 128, "testSize1" ) {}
 void runTest() { suite_MyQueueTests.testSize1(); }
} testDescription_suite_MyQueueTests_testSize1;

static class TestDescription_suite_MyQueueTests_testSize2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testSize2() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 134, "testSize2" ) {}
 void runTest() { suite_MyQueueTests.testSize2(); }
} testDescription_suite_MyQueueTests_testSize2;

static class TestDescription_suite_MyQueueTests_testSize3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testSize3() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 141, "testSize3" ) {}
 void runTest() { suite_MyQueueTests.testSize3(); }
} testDescription_suite_MyQueueTests_testSize3;

static class TestDescription_suite_MyQueueTests_testEmpty1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testEmpty1() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 150, "testEmpty1" ) {}
 void runTest() { suite_MyQueueTests.testEmpty1(); }
} testDescription_suite_MyQueueTests_testEmpty1;

static class TestDescription_suite_MyQueueTests_testEmpty2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testEmpty2() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 157, "testEmpty2" ) {}
 void runTest() { suite_MyQueueTests.testEmpty2(); }
} testDescription_suite_MyQueueTests_testEmpty2;

static class TestDescription_suite_MyQueueTests_testEmpty3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyQueueTests_testEmpty3() : CxxTest::RealTestDescription( Tests_MyQueueTests, suiteDescription_MyQueueTests, 162, "testEmpty3" ) {}
 void runTest() { suite_MyQueueTests.testEmpty3(); }
} testDescription_suite_MyQueueTests_testEmpty3;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
