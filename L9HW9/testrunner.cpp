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
bool suite_BSTInsertSize_init = false;
#include "BST_test.h"

static BSTInsertSize suite_BSTInsertSize;

static CxxTest::List Tests_BSTInsertSize = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTInsertSize( "BST_test.h", 30, "BSTInsertSize", suite_BSTInsertSize, Tests_BSTInsertSize );

static class TestDescription_suite_BSTInsertSize_testEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTInsertSize_testEmpty() : CxxTest::RealTestDescription( Tests_BSTInsertSize, suiteDescription_BSTInsertSize, 33, "testEmpty" ) {}
 void runTest() { suite_BSTInsertSize.testEmpty(); }
} testDescription_suite_BSTInsertSize_testEmpty;

static class TestDescription_suite_BSTInsertSize_testInsert1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTInsertSize_testInsert1() : CxxTest::RealTestDescription( Tests_BSTInsertSize, suiteDescription_BSTInsertSize, 38, "testInsert1" ) {}
 void runTest() { suite_BSTInsertSize.testInsert1(); }
} testDescription_suite_BSTInsertSize_testInsert1;

static class TestDescription_suite_BSTInsertSize_testInsert2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTInsertSize_testInsert2() : CxxTest::RealTestDescription( Tests_BSTInsertSize, suiteDescription_BSTInsertSize, 45, "testInsert2" ) {}
 void runTest() { suite_BSTInsertSize.testInsert2(); }
} testDescription_suite_BSTInsertSize_testInsert2;

static class TestDescription_suite_BSTInsertSize_testInsert3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTInsertSize_testInsert3() : CxxTest::RealTestDescription( Tests_BSTInsertSize, suiteDescription_BSTInsertSize, 53, "testInsert3" ) {}
 void runTest() { suite_BSTInsertSize.testInsert3(); }
} testDescription_suite_BSTInsertSize_testInsert3;

static BSTClear suite_BSTClear;

static CxxTest::List Tests_BSTClear = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTClear( "BST_test.h", 63, "BSTClear", suite_BSTClear, Tests_BSTClear );

static class TestDescription_suite_BSTClear_testClear1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTClear_testClear1() : CxxTest::RealTestDescription( Tests_BSTClear, suiteDescription_BSTClear, 65, "testClear1" ) {}
 void runTest() { suite_BSTClear.testClear1(); }
} testDescription_suite_BSTClear_testClear1;

static class TestDescription_suite_BSTClear_testClear2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTClear_testClear2() : CxxTest::RealTestDescription( Tests_BSTClear, suiteDescription_BSTClear, 75, "testClear2" ) {}
 void runTest() { suite_BSTClear.testClear2(); }
} testDescription_suite_BSTClear_testClear2;

static class TestDescription_suite_BSTClear_testClear3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTClear_testClear3() : CxxTest::RealTestDescription( Tests_BSTClear, suiteDescription_BSTClear, 84, "testClear3" ) {}
 void runTest() { suite_BSTClear.testClear3(); }
} testDescription_suite_BSTClear_testClear3;

static BSTSmallestLargest suite_BSTSmallestLargest;

static CxxTest::List Tests_BSTSmallestLargest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTSmallestLargest( "BST_test.h", 92, "BSTSmallestLargest", suite_BSTSmallestLargest, Tests_BSTSmallestLargest );

static class TestDescription_suite_BSTSmallestLargest_testSmallest0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTSmallestLargest_testSmallest0() : CxxTest::RealTestDescription( Tests_BSTSmallestLargest, suiteDescription_BSTSmallestLargest, 94, "testSmallest0" ) {}
 void runTest() { suite_BSTSmallestLargest.testSmallest0(); }
} testDescription_suite_BSTSmallestLargest_testSmallest0;

static class TestDescription_suite_BSTSmallestLargest_testSmallest1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTSmallestLargest_testSmallest1() : CxxTest::RealTestDescription( Tests_BSTSmallestLargest, suiteDescription_BSTSmallestLargest, 99, "testSmallest1" ) {}
 void runTest() { suite_BSTSmallestLargest.testSmallest1(); }
} testDescription_suite_BSTSmallestLargest_testSmallest1;

static class TestDescription_suite_BSTSmallestLargest_testSmallest2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTSmallestLargest_testSmallest2() : CxxTest::RealTestDescription( Tests_BSTSmallestLargest, suiteDescription_BSTSmallestLargest, 105, "testSmallest2" ) {}
 void runTest() { suite_BSTSmallestLargest.testSmallest2(); }
} testDescription_suite_BSTSmallestLargest_testSmallest2;

static class TestDescription_suite_BSTSmallestLargest_testSmallest3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTSmallestLargest_testSmallest3() : CxxTest::RealTestDescription( Tests_BSTSmallestLargest, suiteDescription_BSTSmallestLargest, 114, "testSmallest3" ) {}
 void runTest() { suite_BSTSmallestLargest.testSmallest3(); }
} testDescription_suite_BSTSmallestLargest_testSmallest3;

static BSTConCopyAssign suite_BSTConCopyAssign;

static CxxTest::List Tests_BSTConCopyAssign = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTConCopyAssign( "BST_test.h", 124, "BSTConCopyAssign", suite_BSTConCopyAssign, Tests_BSTConCopyAssign );

static class TestDescription_suite_BSTConCopyAssign_testCopy : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTConCopyAssign_testCopy() : CxxTest::RealTestDescription( Tests_BSTConCopyAssign, suiteDescription_BSTConCopyAssign, 127, "testCopy" ) {}
 void runTest() { suite_BSTConCopyAssign.testCopy(); }
} testDescription_suite_BSTConCopyAssign_testCopy;

static class TestDescription_suite_BSTConCopyAssign_testCopy1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTConCopyAssign_testCopy1() : CxxTest::RealTestDescription( Tests_BSTConCopyAssign, suiteDescription_BSTConCopyAssign, 135, "testCopy1" ) {}
 void runTest() { suite_BSTConCopyAssign.testCopy1(); }
} testDescription_suite_BSTConCopyAssign_testCopy1;

static class TestDescription_suite_BSTConCopyAssign_testCopy2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTConCopyAssign_testCopy2() : CxxTest::RealTestDescription( Tests_BSTConCopyAssign, suiteDescription_BSTConCopyAssign, 146, "testCopy2" ) {}
 void runTest() { suite_BSTConCopyAssign.testCopy2(); }
} testDescription_suite_BSTConCopyAssign_testCopy2;

static class TestDescription_suite_BSTConCopyAssign_testCopy3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTConCopyAssign_testCopy3() : CxxTest::RealTestDescription( Tests_BSTConCopyAssign, suiteDescription_BSTConCopyAssign, 153, "testCopy3" ) {}
 void runTest() { suite_BSTConCopyAssign.testCopy3(); }
} testDescription_suite_BSTConCopyAssign_testCopy3;

static class TestDescription_suite_BSTConCopyAssign_testAssign1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTConCopyAssign_testAssign1() : CxxTest::RealTestDescription( Tests_BSTConCopyAssign, suiteDescription_BSTConCopyAssign, 162, "testAssign1" ) {}
 void runTest() { suite_BSTConCopyAssign.testAssign1(); }
} testDescription_suite_BSTConCopyAssign_testAssign1;

static class TestDescription_suite_BSTConCopyAssign_testAssign2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTConCopyAssign_testAssign2() : CxxTest::RealTestDescription( Tests_BSTConCopyAssign, suiteDescription_BSTConCopyAssign, 173, "testAssign2" ) {}
 void runTest() { suite_BSTConCopyAssign.testAssign2(); }
} testDescription_suite_BSTConCopyAssign_testAssign2;

static BSTFind suite_BSTFind;

static CxxTest::List Tests_BSTFind = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTFind( "BST_test.h", 186, "BSTFind", suite_BSTFind, Tests_BSTFind );

static class TestDescription_suite_BSTFind_testInsertFind0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFind_testInsertFind0() : CxxTest::RealTestDescription( Tests_BSTFind, suiteDescription_BSTFind, 188, "testInsertFind0" ) {}
 void runTest() { suite_BSTFind.testInsertFind0(); }
} testDescription_suite_BSTFind_testInsertFind0;

static class TestDescription_suite_BSTFind_testInsertFind1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFind_testInsertFind1() : CxxTest::RealTestDescription( Tests_BSTFind, suiteDescription_BSTFind, 193, "testInsertFind1" ) {}
 void runTest() { suite_BSTFind.testInsertFind1(); }
} testDescription_suite_BSTFind_testInsertFind1;

static class TestDescription_suite_BSTFind_testInsertFind2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFind_testInsertFind2() : CxxTest::RealTestDescription( Tests_BSTFind, suiteDescription_BSTFind, 199, "testInsertFind2" ) {}
 void runTest() { suite_BSTFind.testInsertFind2(); }
} testDescription_suite_BSTFind_testInsertFind2;

static class TestDescription_suite_BSTFind_testInsertFind3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFind_testInsertFind3() : CxxTest::RealTestDescription( Tests_BSTFind, suiteDescription_BSTFind, 206, "testInsertFind3" ) {}
 void runTest() { suite_BSTFind.testInsertFind3(); }
} testDescription_suite_BSTFind_testInsertFind3;

static class TestDescription_suite_BSTFind_testInsertFind4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFind_testInsertFind4() : CxxTest::RealTestDescription( Tests_BSTFind, suiteDescription_BSTFind, 214, "testInsertFind4" ) {}
 void runTest() { suite_BSTFind.testInsertFind4(); }
} testDescription_suite_BSTFind_testInsertFind4;

static class TestDescription_suite_BSTFind_testInsertFind7 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFind_testInsertFind7() : CxxTest::RealTestDescription( Tests_BSTFind, suiteDescription_BSTFind, 223, "testInsertFind7" ) {}
 void runTest() { suite_BSTFind.testInsertFind7(); }
} testDescription_suite_BSTFind_testInsertFind7;

static BSTGetOrders suite_BSTGetOrders;

static CxxTest::List Tests_BSTGetOrders = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTGetOrders( "BST_test.h", 236, "BSTGetOrders", suite_BSTGetOrders, Tests_BSTGetOrders );

static class TestDescription_suite_BSTGetOrders_testInorder1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTGetOrders_testInorder1() : CxxTest::RealTestDescription( Tests_BSTGetOrders, suiteDescription_BSTGetOrders, 239, "testInorder1" ) {}
 void runTest() { suite_BSTGetOrders.testInorder1(); }
} testDescription_suite_BSTGetOrders_testInorder1;

static class TestDescription_suite_BSTGetOrders_testInorder2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTGetOrders_testInorder2() : CxxTest::RealTestDescription( Tests_BSTGetOrders, suiteDescription_BSTGetOrders, 247, "testInorder2" ) {}
 void runTest() { suite_BSTGetOrders.testInorder2(); }
} testDescription_suite_BSTGetOrders_testInorder2;

static class TestDescription_suite_BSTGetOrders_testPreOrder1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTGetOrders_testPreOrder1() : CxxTest::RealTestDescription( Tests_BSTGetOrders, suiteDescription_BSTGetOrders, 258, "testPreOrder1" ) {}
 void runTest() { suite_BSTGetOrders.testPreOrder1(); }
} testDescription_suite_BSTGetOrders_testPreOrder1;

static class TestDescription_suite_BSTGetOrders_testPreOrder2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTGetOrders_testPreOrder2() : CxxTest::RealTestDescription( Tests_BSTGetOrders, suiteDescription_BSTGetOrders, 269, "testPreOrder2" ) {}
 void runTest() { suite_BSTGetOrders.testPreOrder2(); }
} testDescription_suite_BSTGetOrders_testPreOrder2;

static class TestDescription_suite_BSTGetOrders_testPostorder1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTGetOrders_testPostorder1() : CxxTest::RealTestDescription( Tests_BSTGetOrders, suiteDescription_BSTGetOrders, 277, "testPostorder1" ) {}
 void runTest() { suite_BSTGetOrders.testPostorder1(); }
} testDescription_suite_BSTGetOrders_testPostorder1;

static class TestDescription_suite_BSTGetOrders_testPostorder2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTGetOrders_testPostorder2() : CxxTest::RealTestDescription( Tests_BSTGetOrders, suiteDescription_BSTGetOrders, 285, "testPostorder2" ) {}
 void runTest() { suite_BSTGetOrders.testPostorder2(); }
} testDescription_suite_BSTGetOrders_testPostorder2;

static BSTHeight suite_BSTHeight;

static CxxTest::List Tests_BSTHeight = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTHeight( "BST_test.h", 299, "BSTHeight", suite_BSTHeight, Tests_BSTHeight );

static class TestDescription_suite_BSTHeight_testHeight0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTHeight_testHeight0() : CxxTest::RealTestDescription( Tests_BSTHeight, suiteDescription_BSTHeight, 302, "testHeight0" ) {}
 void runTest() { suite_BSTHeight.testHeight0(); }
} testDescription_suite_BSTHeight_testHeight0;

static class TestDescription_suite_BSTHeight_testHeight1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTHeight_testHeight1() : CxxTest::RealTestDescription( Tests_BSTHeight, suiteDescription_BSTHeight, 307, "testHeight1" ) {}
 void runTest() { suite_BSTHeight.testHeight1(); }
} testDescription_suite_BSTHeight_testHeight1;

static class TestDescription_suite_BSTHeight_testHeight2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTHeight_testHeight2() : CxxTest::RealTestDescription( Tests_BSTHeight, suiteDescription_BSTHeight, 313, "testHeight2" ) {}
 void runTest() { suite_BSTHeight.testHeight2(); }
} testDescription_suite_BSTHeight_testHeight2;

static class TestDescription_suite_BSTHeight_testHeight3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTHeight_testHeight3() : CxxTest::RealTestDescription( Tests_BSTHeight, suiteDescription_BSTHeight, 320, "testHeight3" ) {}
 void runTest() { suite_BSTHeight.testHeight3(); }
} testDescription_suite_BSTHeight_testHeight3;

static BSTFull suite_BSTFull;

static CxxTest::List Tests_BSTFull = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTFull( "BST_test.h", 335, "BSTFull", suite_BSTFull, Tests_BSTFull );

static class TestDescription_suite_BSTFull_testFull0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFull_testFull0() : CxxTest::RealTestDescription( Tests_BSTFull, suiteDescription_BSTFull, 337, "testFull0" ) {}
 void runTest() { suite_BSTFull.testFull0(); }
} testDescription_suite_BSTFull_testFull0;

static class TestDescription_suite_BSTFull_testFull1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFull_testFull1() : CxxTest::RealTestDescription( Tests_BSTFull, suiteDescription_BSTFull, 342, "testFull1" ) {}
 void runTest() { suite_BSTFull.testFull1(); }
} testDescription_suite_BSTFull_testFull1;

static class TestDescription_suite_BSTFull_testFull2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFull_testFull2() : CxxTest::RealTestDescription( Tests_BSTFull, suiteDescription_BSTFull, 348, "testFull2" ) {}
 void runTest() { suite_BSTFull.testFull2(); }
} testDescription_suite_BSTFull_testFull2;

static class TestDescription_suite_BSTFull_testFull3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFull_testFull3() : CxxTest::RealTestDescription( Tests_BSTFull, suiteDescription_BSTFull, 355, "testFull3" ) {}
 void runTest() { suite_BSTFull.testFull3(); }
} testDescription_suite_BSTFull_testFull3;

static class TestDescription_suite_BSTFull_testFull4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTFull_testFull4() : CxxTest::RealTestDescription( Tests_BSTFull, suiteDescription_BSTFull, 363, "testFull4" ) {}
 void runTest() { suite_BSTFull.testFull4(); }
} testDescription_suite_BSTFull_testFull4;

static BSTBalanced suite_BSTBalanced;

static CxxTest::List Tests_BSTBalanced = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BSTBalanced( "BST_test.h", 376, "BSTBalanced", suite_BSTBalanced, Tests_BSTBalanced );

static class TestDescription_suite_BSTBalanced_testBalanced0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTBalanced_testBalanced0() : CxxTest::RealTestDescription( Tests_BSTBalanced, suiteDescription_BSTBalanced, 378, "testBalanced0" ) {}
 void runTest() { suite_BSTBalanced.testBalanced0(); }
} testDescription_suite_BSTBalanced_testBalanced0;

static class TestDescription_suite_BSTBalanced_testBalanced1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTBalanced_testBalanced1() : CxxTest::RealTestDescription( Tests_BSTBalanced, suiteDescription_BSTBalanced, 383, "testBalanced1" ) {}
 void runTest() { suite_BSTBalanced.testBalanced1(); }
} testDescription_suite_BSTBalanced_testBalanced1;

static class TestDescription_suite_BSTBalanced_testBalanced2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTBalanced_testBalanced2() : CxxTest::RealTestDescription( Tests_BSTBalanced, suiteDescription_BSTBalanced, 389, "testBalanced2" ) {}
 void runTest() { suite_BSTBalanced.testBalanced2(); }
} testDescription_suite_BSTBalanced_testBalanced2;

static class TestDescription_suite_BSTBalanced_testBalanced3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTBalanced_testBalanced3() : CxxTest::RealTestDescription( Tests_BSTBalanced, suiteDescription_BSTBalanced, 396, "testBalanced3" ) {}
 void runTest() { suite_BSTBalanced.testBalanced3(); }
} testDescription_suite_BSTBalanced_testBalanced3;

static class TestDescription_suite_BSTBalanced_testBalanced4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTBalanced_testBalanced4() : CxxTest::RealTestDescription( Tests_BSTBalanced, suiteDescription_BSTBalanced, 404, "testBalanced4" ) {}
 void runTest() { suite_BSTBalanced.testBalanced4(); }
} testDescription_suite_BSTBalanced_testBalanced4;

static class TestDescription_suite_BSTBalanced_testBalanced5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTBalanced_testBalanced5() : CxxTest::RealTestDescription( Tests_BSTBalanced, suiteDescription_BSTBalanced, 413, "testBalanced5" ) {}
 void runTest() { suite_BSTBalanced.testBalanced5(); }
} testDescription_suite_BSTBalanced_testBalanced5;

static class TestDescription_suite_BSTBalanced_testBalanced6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BSTBalanced_testBalanced6() : CxxTest::RealTestDescription( Tests_BSTBalanced, suiteDescription_BSTBalanced, 421, "testBalanced6" ) {}
 void runTest() { suite_BSTBalanced.testBalanced6(); }
} testDescription_suite_BSTBalanced_testBalanced6;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
