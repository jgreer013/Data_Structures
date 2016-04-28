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
bool suite_LListConCopyAssign_init = false;
#include "LList_test.h"

static LListConCopyAssign suite_LListConCopyAssign;

static CxxTest::List Tests_LListConCopyAssign = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListConCopyAssign( "LList_test.h", 20, "LListConCopyAssign", suite_LListConCopyAssign, Tests_LListConCopyAssign );

static class TestDescription_suite_LListConCopyAssign_testEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListConCopyAssign_testEmpty() : CxxTest::RealTestDescription( Tests_LListConCopyAssign, suiteDescription_LListConCopyAssign, 25, "testEmpty" ) {}
 void runTest() { suite_LListConCopyAssign.testEmpty(); }
} testDescription_suite_LListConCopyAssign_testEmpty;

static class TestDescription_suite_LListConCopyAssign_testCopy : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListConCopyAssign_testCopy() : CxxTest::RealTestDescription( Tests_LListConCopyAssign, suiteDescription_LListConCopyAssign, 31, "testCopy" ) {}
 void runTest() { suite_LListConCopyAssign.testCopy(); }
} testDescription_suite_LListConCopyAssign_testCopy;

static class TestDescription_suite_LListConCopyAssign_testCopy1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListConCopyAssign_testCopy1() : CxxTest::RealTestDescription( Tests_LListConCopyAssign, suiteDescription_LListConCopyAssign, 39, "testCopy1" ) {}
 void runTest() { suite_LListConCopyAssign.testCopy1(); }
} testDescription_suite_LListConCopyAssign_testCopy1;

static class TestDescription_suite_LListConCopyAssign_testCopy2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListConCopyAssign_testCopy2() : CxxTest::RealTestDescription( Tests_LListConCopyAssign, suiteDescription_LListConCopyAssign, 50, "testCopy2" ) {}
 void runTest() { suite_LListConCopyAssign.testCopy2(); }
} testDescription_suite_LListConCopyAssign_testCopy2;

static class TestDescription_suite_LListConCopyAssign_testAssign : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListConCopyAssign_testAssign() : CxxTest::RealTestDescription( Tests_LListConCopyAssign, suiteDescription_LListConCopyAssign, 65, "testAssign" ) {}
 void runTest() { suite_LListConCopyAssign.testAssign(); }
} testDescription_suite_LListConCopyAssign_testAssign;

static class TestDescription_suite_LListConCopyAssign_testAssign1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListConCopyAssign_testAssign1() : CxxTest::RealTestDescription( Tests_LListConCopyAssign, suiteDescription_LListConCopyAssign, 77, "testAssign1" ) {}
 void runTest() { suite_LListConCopyAssign.testAssign1(); }
} testDescription_suite_LListConCopyAssign_testAssign1;

static LListPushes suite_LListPushes;

static CxxTest::List Tests_LListPushes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListPushes( "LList_test.h", 86, "LListPushes", suite_LListPushes, Tests_LListPushes );

static class TestDescription_suite_LListPushes_testPushBack1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListPushes_testPushBack1() : CxxTest::RealTestDescription( Tests_LListPushes, suiteDescription_LListPushes, 89, "testPushBack1" ) {}
 void runTest() { suite_LListPushes.testPushBack1(); }
} testDescription_suite_LListPushes_testPushBack1;

static class TestDescription_suite_LListPushes_testPushBack2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListPushes_testPushBack2() : CxxTest::RealTestDescription( Tests_LListPushes, suiteDescription_LListPushes, 94, "testPushBack2" ) {}
 void runTest() { suite_LListPushes.testPushBack2(); }
} testDescription_suite_LListPushes_testPushBack2;

static class TestDescription_suite_LListPushes_testPushBack3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListPushes_testPushBack3() : CxxTest::RealTestDescription( Tests_LListPushes, suiteDescription_LListPushes, 102, "testPushBack3" ) {}
 void runTest() { suite_LListPushes.testPushBack3(); }
} testDescription_suite_LListPushes_testPushBack3;

static class TestDescription_suite_LListPushes_testPushFront2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListPushes_testPushFront2() : CxxTest::RealTestDescription( Tests_LListPushes, suiteDescription_LListPushes, 112, "testPushFront2" ) {}
 void runTest() { suite_LListPushes.testPushFront2(); }
} testDescription_suite_LListPushes_testPushFront2;

static class TestDescription_suite_LListPushes_testPushFront3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListPushes_testPushFront3() : CxxTest::RealTestDescription( Tests_LListPushes, suiteDescription_LListPushes, 120, "testPushFront3" ) {}
 void runTest() { suite_LListPushes.testPushFront3(); }
} testDescription_suite_LListPushes_testPushFront3;

static LListSetAt suite_LListSetAt;

static CxxTest::List Tests_LListSetAt = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListSetAt( "LList_test.h", 131, "LListSetAt", suite_LListSetAt, Tests_LListSetAt );

static class TestDescription_suite_LListSetAt_testSet1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListSetAt_testSet1() : CxxTest::RealTestDescription( Tests_LListSetAt, suiteDescription_LListSetAt, 134, "testSet1" ) {}
 void runTest() { suite_LListSetAt.testSet1(); }
} testDescription_suite_LListSetAt_testSet1;

static class TestDescription_suite_LListSetAt_testSet2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListSetAt_testSet2() : CxxTest::RealTestDescription( Tests_LListSetAt, suiteDescription_LListSetAt, 143, "testSet2" ) {}
 void runTest() { suite_LListSetAt.testSet2(); }
} testDescription_suite_LListSetAt_testSet2;

static class TestDescription_suite_LListSetAt_testSet3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListSetAt_testSet3() : CxxTest::RealTestDescription( Tests_LListSetAt, suiteDescription_LListSetAt, 150, "testSet3" ) {}
 void runTest() { suite_LListSetAt.testSet3(); }
} testDescription_suite_LListSetAt_testSet3;

static class TestDescription_suite_LListSetAt_testSet4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListSetAt_testSet4() : CxxTest::RealTestDescription( Tests_LListSetAt, suiteDescription_LListSetAt, 157, "testSet4" ) {}
 void runTest() { suite_LListSetAt.testSet4(); }
} testDescription_suite_LListSetAt_testSet4;

static class TestDescription_suite_LListSetAt_testSet5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListSetAt_testSet5() : CxxTest::RealTestDescription( Tests_LListSetAt, suiteDescription_LListSetAt, 166, "testSet5" ) {}
 void runTest() { suite_LListSetAt.testSet5(); }
} testDescription_suite_LListSetAt_testSet5;

static LListGetAt suite_LListGetAt;

static CxxTest::List Tests_LListGetAt = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListGetAt( "LList_test.h", 177, "LListGetAt", suite_LListGetAt, Tests_LListGetAt );

static class TestDescription_suite_LListGetAt_testGetAt1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListGetAt_testGetAt1() : CxxTest::RealTestDescription( Tests_LListGetAt, suiteDescription_LListGetAt, 180, "testGetAt1" ) {}
 void runTest() { suite_LListGetAt.testGetAt1(); }
} testDescription_suite_LListGetAt_testGetAt1;

static class TestDescription_suite_LListGetAt_testGetAt2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListGetAt_testGetAt2() : CxxTest::RealTestDescription( Tests_LListGetAt, suiteDescription_LListGetAt, 185, "testGetAt2" ) {}
 void runTest() { suite_LListGetAt.testGetAt2(); }
} testDescription_suite_LListGetAt_testGetAt2;

static class TestDescription_suite_LListGetAt_testGetAt3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListGetAt_testGetAt3() : CxxTest::RealTestDescription( Tests_LListGetAt, suiteDescription_LListGetAt, 193, "testGetAt3" ) {}
 void runTest() { suite_LListGetAt.testGetAt3(); }
} testDescription_suite_LListGetAt_testGetAt3;

static LListRemove suite_LListRemove;

static CxxTest::List Tests_LListRemove = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListRemove( "LList_test.h", 208, "LListRemove", suite_LListRemove, Tests_LListRemove );

static class TestDescription_suite_LListRemove_testRemove1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListRemove_testRemove1() : CxxTest::RealTestDescription( Tests_LListRemove, suiteDescription_LListRemove, 211, "testRemove1" ) {}
 void runTest() { suite_LListRemove.testRemove1(); }
} testDescription_suite_LListRemove_testRemove1;

static class TestDescription_suite_LListRemove_testRemove2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListRemove_testRemove2() : CxxTest::RealTestDescription( Tests_LListRemove, suiteDescription_LListRemove, 217, "testRemove2" ) {}
 void runTest() { suite_LListRemove.testRemove2(); }
} testDescription_suite_LListRemove_testRemove2;

static class TestDescription_suite_LListRemove_testRemove3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListRemove_testRemove3() : CxxTest::RealTestDescription( Tests_LListRemove, suiteDescription_LListRemove, 225, "testRemove3" ) {}
 void runTest() { suite_LListRemove.testRemove3(); }
} testDescription_suite_LListRemove_testRemove3;

static class TestDescription_suite_LListRemove_testRemove4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListRemove_testRemove4() : CxxTest::RealTestDescription( Tests_LListRemove, suiteDescription_LListRemove, 233, "testRemove4" ) {}
 void runTest() { suite_LListRemove.testRemove4(); }
} testDescription_suite_LListRemove_testRemove4;

static class TestDescription_suite_LListRemove_testRemove5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListRemove_testRemove5() : CxxTest::RealTestDescription( Tests_LListRemove, suiteDescription_LListRemove, 248, "testRemove5" ) {}
 void runTest() { suite_LListRemove.testRemove5(); }
} testDescription_suite_LListRemove_testRemove5;

static class TestDescription_suite_LListRemove_testRemove6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListRemove_testRemove6() : CxxTest::RealTestDescription( Tests_LListRemove, suiteDescription_LListRemove, 260, "testRemove6" ) {}
 void runTest() { suite_LListRemove.testRemove6(); }
} testDescription_suite_LListRemove_testRemove6;

static class TestDescription_suite_LListRemove_testRemove7 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListRemove_testRemove7() : CxxTest::RealTestDescription( Tests_LListRemove, suiteDescription_LListRemove, 272, "testRemove7" ) {}
 void runTest() { suite_LListRemove.testRemove7(); }
} testDescription_suite_LListRemove_testRemove7;

static LListReverse suite_LListReverse;

static CxxTest::List Tests_LListReverse = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListReverse( "LList_test.h", 288, "LListReverse", suite_LListReverse, Tests_LListReverse );

static class TestDescription_suite_LListReverse_testRev0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListReverse_testRev0() : CxxTest::RealTestDescription( Tests_LListReverse, suiteDescription_LListReverse, 290, "testRev0" ) {}
 void runTest() { suite_LListReverse.testRev0(); }
} testDescription_suite_LListReverse_testRev0;

static class TestDescription_suite_LListReverse_testRev1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListReverse_testRev1() : CxxTest::RealTestDescription( Tests_LListReverse, suiteDescription_LListReverse, 297, "testRev1" ) {}
 void runTest() { suite_LListReverse.testRev1(); }
} testDescription_suite_LListReverse_testRev1;

static class TestDescription_suite_LListReverse_testRev2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListReverse_testRev2() : CxxTest::RealTestDescription( Tests_LListReverse, suiteDescription_LListReverse, 307, "testRev2" ) {}
 void runTest() { suite_LListReverse.testRev2(); }
} testDescription_suite_LListReverse_testRev2;

static class TestDescription_suite_LListReverse_testRev3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListReverse_testRev3() : CxxTest::RealTestDescription( Tests_LListReverse, suiteDescription_LListReverse, 320, "testRev3" ) {}
 void runTest() { suite_LListReverse.testRev3(); }
} testDescription_suite_LListReverse_testRev3;

static class TestDescription_suite_LListReverse_testRev4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListReverse_testRev4() : CxxTest::RealTestDescription( Tests_LListReverse, suiteDescription_LListReverse, 336, "testRev4" ) {}
 void runTest() { suite_LListReverse.testRev4(); }
} testDescription_suite_LListReverse_testRev4;

static LListAdd suite_LListAdd;

static CxxTest::List Tests_LListAdd = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListAdd( "LList_test.h", 357, "LListAdd", suite_LListAdd, Tests_LListAdd );

static class TestDescription_suite_LListAdd_testAdd0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListAdd_testAdd0() : CxxTest::RealTestDescription( Tests_LListAdd, suiteDescription_LListAdd, 359, "testAdd0" ) {}
 void runTest() { suite_LListAdd.testAdd0(); }
} testDescription_suite_LListAdd_testAdd0;

static class TestDescription_suite_LListAdd_testAdd1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListAdd_testAdd1() : CxxTest::RealTestDescription( Tests_LListAdd, suiteDescription_LListAdd, 364, "testAdd1" ) {}
 void runTest() { suite_LListAdd.testAdd1(); }
} testDescription_suite_LListAdd_testAdd1;

static class TestDescription_suite_LListAdd_testAdd2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListAdd_testAdd2() : CxxTest::RealTestDescription( Tests_LListAdd, suiteDescription_LListAdd, 377, "testAdd2" ) {}
 void runTest() { suite_LListAdd.testAdd2(); }
} testDescription_suite_LListAdd_testAdd2;

static LListEq suite_LListEq;

static CxxTest::List Tests_LListEq = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListEq( "LList_test.h", 397, "LListEq", suite_LListEq, Tests_LListEq );

static class TestDescription_suite_LListEq_testEq0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListEq_testEq0() : CxxTest::RealTestDescription( Tests_LListEq, suiteDescription_LListEq, 399, "testEq0" ) {}
 void runTest() { suite_LListEq.testEq0(); }
} testDescription_suite_LListEq_testEq0;

static class TestDescription_suite_LListEq_testEq1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListEq_testEq1() : CxxTest::RealTestDescription( Tests_LListEq, suiteDescription_LListEq, 406, "testEq1" ) {}
 void runTest() { suite_LListEq.testEq1(); }
} testDescription_suite_LListEq_testEq1;

static class TestDescription_suite_LListEq_testEq2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListEq_testEq2() : CxxTest::RealTestDescription( Tests_LListEq, suiteDescription_LListEq, 415, "testEq2" ) {}
 void runTest() { suite_LListEq.testEq2(); }
} testDescription_suite_LListEq_testEq2;

static class TestDescription_suite_LListEq_testEq3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListEq_testEq3() : CxxTest::RealTestDescription( Tests_LListEq, suiteDescription_LListEq, 423, "testEq3" ) {}
 void runTest() { suite_LListEq.testEq3(); }
} testDescription_suite_LListEq_testEq3;

static class TestDescription_suite_LListEq_testEq4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListEq_testEq4() : CxxTest::RealTestDescription( Tests_LListEq, suiteDescription_LListEq, 431, "testEq4" ) {}
 void runTest() { suite_LListEq.testEq4(); }
} testDescription_suite_LListEq_testEq4;

static class TestDescription_suite_LListEq_testEq5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListEq_testEq5() : CxxTest::RealTestDescription( Tests_LListEq, suiteDescription_LListEq, 440, "testEq5" ) {}
 void runTest() { suite_LListEq.testEq5(); }
} testDescription_suite_LListEq_testEq5;

static LListClear suite_LListClear;

static CxxTest::List Tests_LListClear = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListClear( "LList_test.h", 452, "LListClear", suite_LListClear, Tests_LListClear );

static class TestDescription_suite_LListClear_testClear0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListClear_testClear0() : CxxTest::RealTestDescription( Tests_LListClear, suiteDescription_LListClear, 454, "testClear0" ) {}
 void runTest() { suite_LListClear.testClear0(); }
} testDescription_suite_LListClear_testClear0;

static class TestDescription_suite_LListClear_testClear1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListClear_testClear1() : CxxTest::RealTestDescription( Tests_LListClear, suiteDescription_LListClear, 460, "testClear1" ) {}
 void runTest() { suite_LListClear.testClear1(); }
} testDescription_suite_LListClear_testClear1;

static class TestDescription_suite_LListClear_testClear2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListClear_testClear2() : CxxTest::RealTestDescription( Tests_LListClear, suiteDescription_LListClear, 468, "testClear2" ) {}
 void runTest() { suite_LListClear.testClear2(); }
} testDescription_suite_LListClear_testClear2;

static LListStream suite_LListStream;

static CxxTest::List Tests_LListStream = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListStream( "LList_test.h", 479, "LListStream", suite_LListStream, Tests_LListStream );

static class TestDescription_suite_LListStream_testStream1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListStream_testStream1() : CxxTest::RealTestDescription( Tests_LListStream, suiteDescription_LListStream, 481, "testStream1" ) {}
 void runTest() { suite_LListStream.testStream1(); }
} testDescription_suite_LListStream_testStream1;

static class TestDescription_suite_LListStream_testStream2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListStream_testStream2() : CxxTest::RealTestDescription( Tests_LListStream, suiteDescription_LListStream, 494, "testStream2" ) {}
 void runTest() { suite_LListStream.testStream2(); }
} testDescription_suite_LListStream_testStream2;

static class TestDescription_suite_LListStream_testStream3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListStream_testStream3() : CxxTest::RealTestDescription( Tests_LListStream, suiteDescription_LListStream, 505, "testStream3" ) {}
 void runTest() { suite_LListStream.testStream3(); }
} testDescription_suite_LListStream_testStream3;

static class TestDescription_suite_LListStream_testStream4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListStream_testStream4() : CxxTest::RealTestDescription( Tests_LListStream, suiteDescription_LListStream, 517, "testStream4" ) {}
 void runTest() { suite_LListStream.testStream4(); }
} testDescription_suite_LListStream_testStream4;

static class TestDescription_suite_LListStream_testStream5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListStream_testStream5() : CxxTest::RealTestDescription( Tests_LListStream, suiteDescription_LListStream, 530, "testStream5" ) {}
 void runTest() { suite_LListStream.testStream5(); }
} testDescription_suite_LListStream_testStream5;

static LListFuzz suite_LListFuzz;

static CxxTest::List Tests_LListFuzz = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LListFuzz( "LList_test.h", 546, "LListFuzz", suite_LListFuzz, Tests_LListFuzz );

static class TestDescription_suite_LListFuzz_testFuzz : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LListFuzz_testFuzz() : CxxTest::RealTestDescription( Tests_LListFuzz, suiteDescription_LListFuzz, 549, "testFuzz" ) {}
 void runTest() { suite_LListFuzz.testFuzz(); }
} testDescription_suite_LListFuzz_testFuzz;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
