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
bool suite_DListConCopyAssign_init = false;
#include "DList_test.h"

static DListConCopyAssign suite_DListConCopyAssign;

static CxxTest::List Tests_DListConCopyAssign = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListConCopyAssign( "DList_test.h", 24, "DListConCopyAssign", suite_DListConCopyAssign, Tests_DListConCopyAssign );

static class TestDescription_suite_DListConCopyAssign_testEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListConCopyAssign_testEmpty() : CxxTest::RealTestDescription( Tests_DListConCopyAssign, suiteDescription_DListConCopyAssign, 29, "testEmpty" ) {}
 void runTest() { suite_DListConCopyAssign.testEmpty(); }
} testDescription_suite_DListConCopyAssign_testEmpty;

static class TestDescription_suite_DListConCopyAssign_testCopy : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListConCopyAssign_testCopy() : CxxTest::RealTestDescription( Tests_DListConCopyAssign, suiteDescription_DListConCopyAssign, 35, "testCopy" ) {}
 void runTest() { suite_DListConCopyAssign.testCopy(); }
} testDescription_suite_DListConCopyAssign_testCopy;

static class TestDescription_suite_DListConCopyAssign_testCopy1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListConCopyAssign_testCopy1() : CxxTest::RealTestDescription( Tests_DListConCopyAssign, suiteDescription_DListConCopyAssign, 43, "testCopy1" ) {}
 void runTest() { suite_DListConCopyAssign.testCopy1(); }
} testDescription_suite_DListConCopyAssign_testCopy1;

static class TestDescription_suite_DListConCopyAssign_testCopy2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListConCopyAssign_testCopy2() : CxxTest::RealTestDescription( Tests_DListConCopyAssign, suiteDescription_DListConCopyAssign, 54, "testCopy2" ) {}
 void runTest() { suite_DListConCopyAssign.testCopy2(); }
} testDescription_suite_DListConCopyAssign_testCopy2;

static class TestDescription_suite_DListConCopyAssign_testAssign : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListConCopyAssign_testAssign() : CxxTest::RealTestDescription( Tests_DListConCopyAssign, suiteDescription_DListConCopyAssign, 69, "testAssign" ) {}
 void runTest() { suite_DListConCopyAssign.testAssign(); }
} testDescription_suite_DListConCopyAssign_testAssign;

static class TestDescription_suite_DListConCopyAssign_testAssign1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListConCopyAssign_testAssign1() : CxxTest::RealTestDescription( Tests_DListConCopyAssign, suiteDescription_DListConCopyAssign, 81, "testAssign1" ) {}
 void runTest() { suite_DListConCopyAssign.testAssign1(); }
} testDescription_suite_DListConCopyAssign_testAssign1;

static DListPushes suite_DListPushes;

static CxxTest::List Tests_DListPushes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListPushes( "DList_test.h", 90, "DListPushes", suite_DListPushes, Tests_DListPushes );

static class TestDescription_suite_DListPushes_testPushBack1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListPushes_testPushBack1() : CxxTest::RealTestDescription( Tests_DListPushes, suiteDescription_DListPushes, 93, "testPushBack1" ) {}
 void runTest() { suite_DListPushes.testPushBack1(); }
} testDescription_suite_DListPushes_testPushBack1;

static class TestDescription_suite_DListPushes_testPushBack2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListPushes_testPushBack2() : CxxTest::RealTestDescription( Tests_DListPushes, suiteDescription_DListPushes, 98, "testPushBack2" ) {}
 void runTest() { suite_DListPushes.testPushBack2(); }
} testDescription_suite_DListPushes_testPushBack2;

static class TestDescription_suite_DListPushes_testPushBack3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListPushes_testPushBack3() : CxxTest::RealTestDescription( Tests_DListPushes, suiteDescription_DListPushes, 106, "testPushBack3" ) {}
 void runTest() { suite_DListPushes.testPushBack3(); }
} testDescription_suite_DListPushes_testPushBack3;

static class TestDescription_suite_DListPushes_testPushFront2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListPushes_testPushFront2() : CxxTest::RealTestDescription( Tests_DListPushes, suiteDescription_DListPushes, 116, "testPushFront2" ) {}
 void runTest() { suite_DListPushes.testPushFront2(); }
} testDescription_suite_DListPushes_testPushFront2;

static class TestDescription_suite_DListPushes_testPushFront3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListPushes_testPushFront3() : CxxTest::RealTestDescription( Tests_DListPushes, suiteDescription_DListPushes, 124, "testPushFront3" ) {}
 void runTest() { suite_DListPushes.testPushFront3(); }
} testDescription_suite_DListPushes_testPushFront3;

static DListSetAt suite_DListSetAt;

static CxxTest::List Tests_DListSetAt = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListSetAt( "DList_test.h", 135, "DListSetAt", suite_DListSetAt, Tests_DListSetAt );

static class TestDescription_suite_DListSetAt_testSet1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testSet1() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 138, "testSet1" ) {}
 void runTest() { suite_DListSetAt.testSet1(); }
} testDescription_suite_DListSetAt_testSet1;

static class TestDescription_suite_DListSetAt_testSet2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testSet2() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 147, "testSet2" ) {}
 void runTest() { suite_DListSetAt.testSet2(); }
} testDescription_suite_DListSetAt_testSet2;

static class TestDescription_suite_DListSetAt_testSet3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testSet3() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 154, "testSet3" ) {}
 void runTest() { suite_DListSetAt.testSet3(); }
} testDescription_suite_DListSetAt_testSet3;

static class TestDescription_suite_DListSetAt_testSet4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testSet4() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 161, "testSet4" ) {}
 void runTest() { suite_DListSetAt.testSet4(); }
} testDescription_suite_DListSetAt_testSet4;

static class TestDescription_suite_DListSetAt_testSet5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testSet5() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 170, "testSet5" ) {}
 void runTest() { suite_DListSetAt.testSet5(); }
} testDescription_suite_DListSetAt_testSet5;

static class TestDescription_suite_DListSetAt_testGetAt1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testGetAt1() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 180, "testGetAt1" ) {}
 void runTest() { suite_DListSetAt.testGetAt1(); }
} testDescription_suite_DListSetAt_testGetAt1;

static class TestDescription_suite_DListSetAt_testGetAt2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testGetAt2() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 185, "testGetAt2" ) {}
 void runTest() { suite_DListSetAt.testGetAt2(); }
} testDescription_suite_DListSetAt_testGetAt2;

static class TestDescription_suite_DListSetAt_testGetAt3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testGetAt3() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 193, "testGetAt3" ) {}
 void runTest() { suite_DListSetAt.testGetAt3(); }
} testDescription_suite_DListSetAt_testGetAt3;

static class TestDescription_suite_DListSetAt_testGetAtSpeed1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testGetAtSpeed1() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 207, "testGetAtSpeed1" ) {}
 void runTest() { suite_DListSetAt.testGetAtSpeed1(); }
} testDescription_suite_DListSetAt_testGetAtSpeed1;

static class TestDescription_suite_DListSetAt_testSetAtSpeed1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListSetAt_testSetAtSpeed1() : CxxTest::RealTestDescription( Tests_DListSetAt, suiteDescription_DListSetAt, 229, "testSetAtSpeed1" ) {}
 void runTest() { suite_DListSetAt.testSetAtSpeed1(); }
} testDescription_suite_DListSetAt_testSetAtSpeed1;

static DListRemove suite_DListRemove;

static CxxTest::List Tests_DListRemove = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListRemove( "DList_test.h", 250, "DListRemove", suite_DListRemove, Tests_DListRemove );

static class TestDescription_suite_DListRemove_testRemove1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemove1() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 253, "testRemove1" ) {}
 void runTest() { suite_DListRemove.testRemove1(); }
} testDescription_suite_DListRemove_testRemove1;

static class TestDescription_suite_DListRemove_testRemove2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemove2() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 259, "testRemove2" ) {}
 void runTest() { suite_DListRemove.testRemove2(); }
} testDescription_suite_DListRemove_testRemove2;

static class TestDescription_suite_DListRemove_testRemove3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemove3() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 267, "testRemove3" ) {}
 void runTest() { suite_DListRemove.testRemove3(); }
} testDescription_suite_DListRemove_testRemove3;

static class TestDescription_suite_DListRemove_testRemove4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemove4() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 275, "testRemove4" ) {}
 void runTest() { suite_DListRemove.testRemove4(); }
} testDescription_suite_DListRemove_testRemove4;

static class TestDescription_suite_DListRemove_testRemove5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemove5() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 288, "testRemove5" ) {}
 void runTest() { suite_DListRemove.testRemove5(); }
} testDescription_suite_DListRemove_testRemove5;

static class TestDescription_suite_DListRemove_testRemove6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemove6() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 300, "testRemove6" ) {}
 void runTest() { suite_DListRemove.testRemove6(); }
} testDescription_suite_DListRemove_testRemove6;

static class TestDescription_suite_DListRemove_testRemove7 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemove7() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 312, "testRemove7" ) {}
 void runTest() { suite_DListRemove.testRemove7(); }
} testDescription_suite_DListRemove_testRemove7;

static class TestDescription_suite_DListRemove_testRemoveSpeed1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemoveSpeed1() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 327, "testRemoveSpeed1" ) {}
 void runTest() { suite_DListRemove.testRemoveSpeed1(); }
} testDescription_suite_DListRemove_testRemoveSpeed1;

static class TestDescription_suite_DListRemove_testRemoveSpeed2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListRemove_testRemoveSpeed2() : CxxTest::RealTestDescription( Tests_DListRemove, suiteDescription_DListRemove, 347, "testRemoveSpeed2" ) {}
 void runTest() { suite_DListRemove.testRemoveSpeed2(); }
} testDescription_suite_DListRemove_testRemoveSpeed2;

static DListReverse suite_DListReverse;

static CxxTest::List Tests_DListReverse = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListReverse( "DList_test.h", 369, "DListReverse", suite_DListReverse, Tests_DListReverse );

static class TestDescription_suite_DListReverse_testRev0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverse_testRev0() : CxxTest::RealTestDescription( Tests_DListReverse, suiteDescription_DListReverse, 371, "testRev0" ) {}
 void runTest() { suite_DListReverse.testRev0(); }
} testDescription_suite_DListReverse_testRev0;

static class TestDescription_suite_DListReverse_testRev1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverse_testRev1() : CxxTest::RealTestDescription( Tests_DListReverse, suiteDescription_DListReverse, 378, "testRev1" ) {}
 void runTest() { suite_DListReverse.testRev1(); }
} testDescription_suite_DListReverse_testRev1;

static class TestDescription_suite_DListReverse_testRev2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverse_testRev2() : CxxTest::RealTestDescription( Tests_DListReverse, suiteDescription_DListReverse, 388, "testRev2" ) {}
 void runTest() { suite_DListReverse.testRev2(); }
} testDescription_suite_DListReverse_testRev2;

static class TestDescription_suite_DListReverse_testRev3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverse_testRev3() : CxxTest::RealTestDescription( Tests_DListReverse, suiteDescription_DListReverse, 401, "testRev3" ) {}
 void runTest() { suite_DListReverse.testRev3(); }
} testDescription_suite_DListReverse_testRev3;

static class TestDescription_suite_DListReverse_testRev4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListReverse_testRev4() : CxxTest::RealTestDescription( Tests_DListReverse, suiteDescription_DListReverse, 417, "testRev4" ) {}
 void runTest() { suite_DListReverse.testRev4(); }
} testDescription_suite_DListReverse_testRev4;

static DListAdd suite_DListAdd;

static CxxTest::List Tests_DListAdd = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListAdd( "DList_test.h", 438, "DListAdd", suite_DListAdd, Tests_DListAdd );

static class TestDescription_suite_DListAdd_testAdd0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListAdd_testAdd0() : CxxTest::RealTestDescription( Tests_DListAdd, suiteDescription_DListAdd, 440, "testAdd0" ) {}
 void runTest() { suite_DListAdd.testAdd0(); }
} testDescription_suite_DListAdd_testAdd0;

static class TestDescription_suite_DListAdd_testAdd1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListAdd_testAdd1() : CxxTest::RealTestDescription( Tests_DListAdd, suiteDescription_DListAdd, 445, "testAdd1" ) {}
 void runTest() { suite_DListAdd.testAdd1(); }
} testDescription_suite_DListAdd_testAdd1;

static class TestDescription_suite_DListAdd_testAdd2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListAdd_testAdd2() : CxxTest::RealTestDescription( Tests_DListAdd, suiteDescription_DListAdd, 458, "testAdd2" ) {}
 void runTest() { suite_DListAdd.testAdd2(); }
} testDescription_suite_DListAdd_testAdd2;

static DListEq suite_DListEq;

static CxxTest::List Tests_DListEq = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListEq( "DList_test.h", 478, "DListEq", suite_DListEq, Tests_DListEq );

static class TestDescription_suite_DListEq_testEq0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListEq_testEq0() : CxxTest::RealTestDescription( Tests_DListEq, suiteDescription_DListEq, 480, "testEq0" ) {}
 void runTest() { suite_DListEq.testEq0(); }
} testDescription_suite_DListEq_testEq0;

static class TestDescription_suite_DListEq_testEq1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListEq_testEq1() : CxxTest::RealTestDescription( Tests_DListEq, suiteDescription_DListEq, 487, "testEq1" ) {}
 void runTest() { suite_DListEq.testEq1(); }
} testDescription_suite_DListEq_testEq1;

static class TestDescription_suite_DListEq_testEq2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListEq_testEq2() : CxxTest::RealTestDescription( Tests_DListEq, suiteDescription_DListEq, 496, "testEq2" ) {}
 void runTest() { suite_DListEq.testEq2(); }
} testDescription_suite_DListEq_testEq2;

static class TestDescription_suite_DListEq_testEq3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListEq_testEq3() : CxxTest::RealTestDescription( Tests_DListEq, suiteDescription_DListEq, 504, "testEq3" ) {}
 void runTest() { suite_DListEq.testEq3(); }
} testDescription_suite_DListEq_testEq3;

static class TestDescription_suite_DListEq_testEq4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListEq_testEq4() : CxxTest::RealTestDescription( Tests_DListEq, suiteDescription_DListEq, 512, "testEq4" ) {}
 void runTest() { suite_DListEq.testEq4(); }
} testDescription_suite_DListEq_testEq4;

static class TestDescription_suite_DListEq_testEq5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListEq_testEq5() : CxxTest::RealTestDescription( Tests_DListEq, suiteDescription_DListEq, 521, "testEq5" ) {}
 void runTest() { suite_DListEq.testEq5(); }
} testDescription_suite_DListEq_testEq5;

static DListClear suite_DListClear;

static CxxTest::List Tests_DListClear = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListClear( "DList_test.h", 533, "DListClear", suite_DListClear, Tests_DListClear );

static class TestDescription_suite_DListClear_testClear0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListClear_testClear0() : CxxTest::RealTestDescription( Tests_DListClear, suiteDescription_DListClear, 535, "testClear0" ) {}
 void runTest() { suite_DListClear.testClear0(); }
} testDescription_suite_DListClear_testClear0;

static class TestDescription_suite_DListClear_testClear1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListClear_testClear1() : CxxTest::RealTestDescription( Tests_DListClear, suiteDescription_DListClear, 541, "testClear1" ) {}
 void runTest() { suite_DListClear.testClear1(); }
} testDescription_suite_DListClear_testClear1;

static class TestDescription_suite_DListClear_testClear2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListClear_testClear2() : CxxTest::RealTestDescription( Tests_DListClear, suiteDescription_DListClear, 549, "testClear2" ) {}
 void runTest() { suite_DListClear.testClear2(); }
} testDescription_suite_DListClear_testClear2;

static DListStream suite_DListStream;

static CxxTest::List Tests_DListStream = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListStream( "DList_test.h", 560, "DListStream", suite_DListStream, Tests_DListStream );

static class TestDescription_suite_DListStream_testStream1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListStream_testStream1() : CxxTest::RealTestDescription( Tests_DListStream, suiteDescription_DListStream, 562, "testStream1" ) {}
 void runTest() { suite_DListStream.testStream1(); }
} testDescription_suite_DListStream_testStream1;

static class TestDescription_suite_DListStream_testStream2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListStream_testStream2() : CxxTest::RealTestDescription( Tests_DListStream, suiteDescription_DListStream, 575, "testStream2" ) {}
 void runTest() { suite_DListStream.testStream2(); }
} testDescription_suite_DListStream_testStream2;

static class TestDescription_suite_DListStream_testStream3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListStream_testStream3() : CxxTest::RealTestDescription( Tests_DListStream, suiteDescription_DListStream, 586, "testStream3" ) {}
 void runTest() { suite_DListStream.testStream3(); }
} testDescription_suite_DListStream_testStream3;

static class TestDescription_suite_DListStream_testStream4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListStream_testStream4() : CxxTest::RealTestDescription( Tests_DListStream, suiteDescription_DListStream, 598, "testStream4" ) {}
 void runTest() { suite_DListStream.testStream4(); }
} testDescription_suite_DListStream_testStream4;

static class TestDescription_suite_DListStream_testStream5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListStream_testStream5() : CxxTest::RealTestDescription( Tests_DListStream, suiteDescription_DListStream, 611, "testStream5" ) {}
 void runTest() { suite_DListStream.testStream5(); }
} testDescription_suite_DListStream_testStream5;

static DListFuzz suite_DListFuzz;

static CxxTest::List Tests_DListFuzz = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DListFuzz( "DList_test.h", 627, "DListFuzz", suite_DListFuzz, Tests_DListFuzz );

static class TestDescription_suite_DListFuzz_testFuzz : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DListFuzz_testFuzz() : CxxTest::RealTestDescription( Tests_DListFuzz, suiteDescription_DListFuzz, 630, "testFuzz" ) {}
 void runTest() { suite_DListFuzz.testFuzz(); }
} testDescription_suite_DListFuzz_testFuzz;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
