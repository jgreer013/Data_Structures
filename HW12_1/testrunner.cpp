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
bool suite_BubbleTest_init = false;
#include "MySort_test.h"

static BubbleTest suite_BubbleTest;

static CxxTest::List Tests_BubbleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BubbleTest( "MySort_test.h", 26, "BubbleTest", suite_BubbleTest, Tests_BubbleTest );

static class TestDescription_suite_BubbleTest_testisSortedEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testisSortedEmpty() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 34, "testisSortedEmpty" ) {}
 void runTest() { suite_BubbleTest.testisSortedEmpty(); }
} testDescription_suite_BubbleTest_testisSortedEmpty;

static class TestDescription_suite_BubbleTest_testSortRepeats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testSortRepeats() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 41, "testSortRepeats" ) {}
 void runTest() { suite_BubbleTest.testSortRepeats(); }
} testDescription_suite_BubbleTest_testSortRepeats;

static class TestDescription_suite_BubbleTest_testSortInOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testSortInOrder() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 66, "testSortInOrder" ) {}
 void runTest() { suite_BubbleTest.testSortInOrder(); }
} testDescription_suite_BubbleTest_testSortInOrder;

static class TestDescription_suite_BubbleTest_testSortRandSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testSortRandSize() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 78, "testSortRandSize" ) {}
 void runTest() { suite_BubbleTest.testSortRandSize(); }
} testDescription_suite_BubbleTest_testSortRandSize;

static class TestDescription_suite_BubbleTest_testSortNegatives : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testSortNegatives() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 88, "testSortNegatives" ) {}
 void runTest() { suite_BubbleTest.testSortNegatives(); }
} testDescription_suite_BubbleTest_testSortNegatives;

static class TestDescription_suite_BubbleTest_testAllSame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testAllSame() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 99, "testAllSame" ) {}
 void runTest() { suite_BubbleTest.testAllSame(); }
} testDescription_suite_BubbleTest_testAllSame;

static class TestDescription_suite_BubbleTest_testAlternating : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testAlternating() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 111, "testAlternating" ) {}
 void runTest() { suite_BubbleTest.testAlternating(); }
} testDescription_suite_BubbleTest_testAlternating;

static class TestDescription_suite_BubbleTest_testReverseOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testReverseOrder() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 122, "testReverseOrder" ) {}
 void runTest() { suite_BubbleTest.testReverseOrder(); }
} testDescription_suite_BubbleTest_testReverseOrder;

static class TestDescription_suite_BubbleTest_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testOne() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 134, "testOne" ) {}
 void runTest() { suite_BubbleTest.testOne(); }
} testDescription_suite_BubbleTest_testOne;

static class TestDescription_suite_BubbleTest_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BubbleTest_testTwo() : CxxTest::RealTestDescription( Tests_BubbleTest, suiteDescription_BubbleTest, 144, "testTwo" ) {}
 void runTest() { suite_BubbleTest.testTwo(); }
} testDescription_suite_BubbleTest_testTwo;

static HeapTest suite_HeapTest;

static CxxTest::List Tests_HeapTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_HeapTest( "MySort_test.h", 157, "HeapTest", suite_HeapTest, Tests_HeapTest );

static class TestDescription_suite_HeapTest_testisSortedEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testisSortedEmpty() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 165, "testisSortedEmpty" ) {}
 void runTest() { suite_HeapTest.testisSortedEmpty(); }
} testDescription_suite_HeapTest_testisSortedEmpty;

static class TestDescription_suite_HeapTest_testSortRepeats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testSortRepeats() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 172, "testSortRepeats" ) {}
 void runTest() { suite_HeapTest.testSortRepeats(); }
} testDescription_suite_HeapTest_testSortRepeats;

static class TestDescription_suite_HeapTest_testSortInOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testSortInOrder() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 197, "testSortInOrder" ) {}
 void runTest() { suite_HeapTest.testSortInOrder(); }
} testDescription_suite_HeapTest_testSortInOrder;

static class TestDescription_suite_HeapTest_testSortRandSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testSortRandSize() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 209, "testSortRandSize" ) {}
 void runTest() { suite_HeapTest.testSortRandSize(); }
} testDescription_suite_HeapTest_testSortRandSize;

static class TestDescription_suite_HeapTest_testSortNegatives : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testSortNegatives() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 219, "testSortNegatives" ) {}
 void runTest() { suite_HeapTest.testSortNegatives(); }
} testDescription_suite_HeapTest_testSortNegatives;

static class TestDescription_suite_HeapTest_testAllSame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testAllSame() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 230, "testAllSame" ) {}
 void runTest() { suite_HeapTest.testAllSame(); }
} testDescription_suite_HeapTest_testAllSame;

static class TestDescription_suite_HeapTest_testAlternating : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testAlternating() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 242, "testAlternating" ) {}
 void runTest() { suite_HeapTest.testAlternating(); }
} testDescription_suite_HeapTest_testAlternating;

static class TestDescription_suite_HeapTest_testReverseOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testReverseOrder() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 253, "testReverseOrder" ) {}
 void runTest() { suite_HeapTest.testReverseOrder(); }
} testDescription_suite_HeapTest_testReverseOrder;

static class TestDescription_suite_HeapTest_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testOne() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 265, "testOne" ) {}
 void runTest() { suite_HeapTest.testOne(); }
} testDescription_suite_HeapTest_testOne;

static class TestDescription_suite_HeapTest_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HeapTest_testTwo() : CxxTest::RealTestDescription( Tests_HeapTest, suiteDescription_HeapTest, 275, "testTwo" ) {}
 void runTest() { suite_HeapTest.testTwo(); }
} testDescription_suite_HeapTest_testTwo;

static MergeTest suite_MergeTest;

static CxxTest::List Tests_MergeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MergeTest( "MySort_test.h", 288, "MergeTest", suite_MergeTest, Tests_MergeTest );

static class TestDescription_suite_MergeTest_testisSortedEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testisSortedEmpty() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 296, "testisSortedEmpty" ) {}
 void runTest() { suite_MergeTest.testisSortedEmpty(); }
} testDescription_suite_MergeTest_testisSortedEmpty;

static class TestDescription_suite_MergeTest_testSortRepeats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testSortRepeats() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 303, "testSortRepeats" ) {}
 void runTest() { suite_MergeTest.testSortRepeats(); }
} testDescription_suite_MergeTest_testSortRepeats;

static class TestDescription_suite_MergeTest_testSortInOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testSortInOrder() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 328, "testSortInOrder" ) {}
 void runTest() { suite_MergeTest.testSortInOrder(); }
} testDescription_suite_MergeTest_testSortInOrder;

static class TestDescription_suite_MergeTest_testSortRandSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testSortRandSize() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 340, "testSortRandSize" ) {}
 void runTest() { suite_MergeTest.testSortRandSize(); }
} testDescription_suite_MergeTest_testSortRandSize;

static class TestDescription_suite_MergeTest_testSortNegatives : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testSortNegatives() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 350, "testSortNegatives" ) {}
 void runTest() { suite_MergeTest.testSortNegatives(); }
} testDescription_suite_MergeTest_testSortNegatives;

static class TestDescription_suite_MergeTest_testAllSame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testAllSame() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 361, "testAllSame" ) {}
 void runTest() { suite_MergeTest.testAllSame(); }
} testDescription_suite_MergeTest_testAllSame;

static class TestDescription_suite_MergeTest_testAlternating : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testAlternating() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 373, "testAlternating" ) {}
 void runTest() { suite_MergeTest.testAlternating(); }
} testDescription_suite_MergeTest_testAlternating;

static class TestDescription_suite_MergeTest_testReverseOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testReverseOrder() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 384, "testReverseOrder" ) {}
 void runTest() { suite_MergeTest.testReverseOrder(); }
} testDescription_suite_MergeTest_testReverseOrder;

static class TestDescription_suite_MergeTest_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testOne() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 396, "testOne" ) {}
 void runTest() { suite_MergeTest.testOne(); }
} testDescription_suite_MergeTest_testOne;

static class TestDescription_suite_MergeTest_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MergeTest_testTwo() : CxxTest::RealTestDescription( Tests_MergeTest, suiteDescription_MergeTest, 406, "testTwo" ) {}
 void runTest() { suite_MergeTest.testTwo(); }
} testDescription_suite_MergeTest_testTwo;

static Merge2Test suite_Merge2Test;

static CxxTest::List Tests_Merge2Test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Merge2Test( "MySort_test.h", 419, "Merge2Test", suite_Merge2Test, Tests_Merge2Test );

static class TestDescription_suite_Merge2Test_testisSortedEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testisSortedEmpty() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 427, "testisSortedEmpty" ) {}
 void runTest() { suite_Merge2Test.testisSortedEmpty(); }
} testDescription_suite_Merge2Test_testisSortedEmpty;

static class TestDescription_suite_Merge2Test_testSortRepeats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testSortRepeats() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 434, "testSortRepeats" ) {}
 void runTest() { suite_Merge2Test.testSortRepeats(); }
} testDescription_suite_Merge2Test_testSortRepeats;

static class TestDescription_suite_Merge2Test_testSortInOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testSortInOrder() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 459, "testSortInOrder" ) {}
 void runTest() { suite_Merge2Test.testSortInOrder(); }
} testDescription_suite_Merge2Test_testSortInOrder;

static class TestDescription_suite_Merge2Test_testSortRandSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testSortRandSize() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 471, "testSortRandSize" ) {}
 void runTest() { suite_Merge2Test.testSortRandSize(); }
} testDescription_suite_Merge2Test_testSortRandSize;

static class TestDescription_suite_Merge2Test_testSortNegatives : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testSortNegatives() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 481, "testSortNegatives" ) {}
 void runTest() { suite_Merge2Test.testSortNegatives(); }
} testDescription_suite_Merge2Test_testSortNegatives;

static class TestDescription_suite_Merge2Test_testAllSame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testAllSame() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 492, "testAllSame" ) {}
 void runTest() { suite_Merge2Test.testAllSame(); }
} testDescription_suite_Merge2Test_testAllSame;

static class TestDescription_suite_Merge2Test_testAlternating : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testAlternating() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 504, "testAlternating" ) {}
 void runTest() { suite_Merge2Test.testAlternating(); }
} testDescription_suite_Merge2Test_testAlternating;

static class TestDescription_suite_Merge2Test_testReverseOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testReverseOrder() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 515, "testReverseOrder" ) {}
 void runTest() { suite_Merge2Test.testReverseOrder(); }
} testDescription_suite_Merge2Test_testReverseOrder;

static class TestDescription_suite_Merge2Test_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testOne() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 527, "testOne" ) {}
 void runTest() { suite_Merge2Test.testOne(); }
} testDescription_suite_Merge2Test_testOne;

static class TestDescription_suite_Merge2Test_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Merge2Test_testTwo() : CxxTest::RealTestDescription( Tests_Merge2Test, suiteDescription_Merge2Test, 537, "testTwo" ) {}
 void runTest() { suite_Merge2Test.testTwo(); }
} testDescription_suite_Merge2Test_testTwo;

static NonCompTest suite_NonCompTest;

static CxxTest::List Tests_NonCompTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NonCompTest( "MySort_test.h", 550, "NonCompTest", suite_NonCompTest, Tests_NonCompTest );

static class TestDescription_suite_NonCompTest_testisSortedEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testisSortedEmpty() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 558, "testisSortedEmpty" ) {}
 void runTest() { suite_NonCompTest.testisSortedEmpty(); }
} testDescription_suite_NonCompTest_testisSortedEmpty;

static class TestDescription_suite_NonCompTest_testSortRepeats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testSortRepeats() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 565, "testSortRepeats" ) {}
 void runTest() { suite_NonCompTest.testSortRepeats(); }
} testDescription_suite_NonCompTest_testSortRepeats;

static class TestDescription_suite_NonCompTest_testSortInOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testSortInOrder() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 590, "testSortInOrder" ) {}
 void runTest() { suite_NonCompTest.testSortInOrder(); }
} testDescription_suite_NonCompTest_testSortInOrder;

static class TestDescription_suite_NonCompTest_testSortRandSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testSortRandSize() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 602, "testSortRandSize" ) {}
 void runTest() { suite_NonCompTest.testSortRandSize(); }
} testDescription_suite_NonCompTest_testSortRandSize;

static class TestDescription_suite_NonCompTest_testZeroes : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testZeroes() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 612, "testZeroes" ) {}
 void runTest() { suite_NonCompTest.testZeroes(); }
} testDescription_suite_NonCompTest_testZeroes;

static class TestDescription_suite_NonCompTest_testAllSame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testAllSame() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 623, "testAllSame" ) {}
 void runTest() { suite_NonCompTest.testAllSame(); }
} testDescription_suite_NonCompTest_testAllSame;

static class TestDescription_suite_NonCompTest_testAlternating : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testAlternating() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 635, "testAlternating" ) {}
 void runTest() { suite_NonCompTest.testAlternating(); }
} testDescription_suite_NonCompTest_testAlternating;

static class TestDescription_suite_NonCompTest_testReverseOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testReverseOrder() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 646, "testReverseOrder" ) {}
 void runTest() { suite_NonCompTest.testReverseOrder(); }
} testDescription_suite_NonCompTest_testReverseOrder;

static class TestDescription_suite_NonCompTest_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testOne() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 658, "testOne" ) {}
 void runTest() { suite_NonCompTest.testOne(); }
} testDescription_suite_NonCompTest_testOne;

static class TestDescription_suite_NonCompTest_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NonCompTest_testTwo() : CxxTest::RealTestDescription( Tests_NonCompTest, suiteDescription_NonCompTest, 668, "testTwo" ) {}
 void runTest() { suite_NonCompTest.testTwo(); }
} testDescription_suite_NonCompTest_testTwo;

static QuickTest suite_QuickTest;

static CxxTest::List Tests_QuickTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_QuickTest( "MySort_test.h", 679, "QuickTest", suite_QuickTest, Tests_QuickTest );

static class TestDescription_suite_QuickTest_testisSortedEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testisSortedEmpty() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 687, "testisSortedEmpty" ) {}
 void runTest() { suite_QuickTest.testisSortedEmpty(); }
} testDescription_suite_QuickTest_testisSortedEmpty;

static class TestDescription_suite_QuickTest_testSortRepeats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testSortRepeats() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 694, "testSortRepeats" ) {}
 void runTest() { suite_QuickTest.testSortRepeats(); }
} testDescription_suite_QuickTest_testSortRepeats;

static class TestDescription_suite_QuickTest_testSortInOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testSortInOrder() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 719, "testSortInOrder" ) {}
 void runTest() { suite_QuickTest.testSortInOrder(); }
} testDescription_suite_QuickTest_testSortInOrder;

static class TestDescription_suite_QuickTest_testSortRandSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testSortRandSize() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 731, "testSortRandSize" ) {}
 void runTest() { suite_QuickTest.testSortRandSize(); }
} testDescription_suite_QuickTest_testSortRandSize;

static class TestDescription_suite_QuickTest_testSortNegatives : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testSortNegatives() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 741, "testSortNegatives" ) {}
 void runTest() { suite_QuickTest.testSortNegatives(); }
} testDescription_suite_QuickTest_testSortNegatives;

static class TestDescription_suite_QuickTest_testAllSame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testAllSame() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 752, "testAllSame" ) {}
 void runTest() { suite_QuickTest.testAllSame(); }
} testDescription_suite_QuickTest_testAllSame;

static class TestDescription_suite_QuickTest_testAlternating : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testAlternating() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 764, "testAlternating" ) {}
 void runTest() { suite_QuickTest.testAlternating(); }
} testDescription_suite_QuickTest_testAlternating;

static class TestDescription_suite_QuickTest_testReverseOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testReverseOrder() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 775, "testReverseOrder" ) {}
 void runTest() { suite_QuickTest.testReverseOrder(); }
} testDescription_suite_QuickTest_testReverseOrder;

static class TestDescription_suite_QuickTest_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testOne() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 787, "testOne" ) {}
 void runTest() { suite_QuickTest.testOne(); }
} testDescription_suite_QuickTest_testOne;

static class TestDescription_suite_QuickTest_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QuickTest_testTwo() : CxxTest::RealTestDescription( Tests_QuickTest, suiteDescription_QuickTest, 797, "testTwo" ) {}
 void runTest() { suite_QuickTest.testTwo(); }
} testDescription_suite_QuickTest_testTwo;

static SelectionTest suite_SelectionTest;

static CxxTest::List Tests_SelectionTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SelectionTest( "MySort_test.h", 810, "SelectionTest", suite_SelectionTest, Tests_SelectionTest );

static class TestDescription_suite_SelectionTest_testisSortedEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testisSortedEmpty() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 818, "testisSortedEmpty" ) {}
 void runTest() { suite_SelectionTest.testisSortedEmpty(); }
} testDescription_suite_SelectionTest_testisSortedEmpty;

static class TestDescription_suite_SelectionTest_testSortRepeats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testSortRepeats() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 825, "testSortRepeats" ) {}
 void runTest() { suite_SelectionTest.testSortRepeats(); }
} testDescription_suite_SelectionTest_testSortRepeats;

static class TestDescription_suite_SelectionTest_testSortInOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testSortInOrder() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 850, "testSortInOrder" ) {}
 void runTest() { suite_SelectionTest.testSortInOrder(); }
} testDescription_suite_SelectionTest_testSortInOrder;

static class TestDescription_suite_SelectionTest_testSortRandSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testSortRandSize() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 862, "testSortRandSize" ) {}
 void runTest() { suite_SelectionTest.testSortRandSize(); }
} testDescription_suite_SelectionTest_testSortRandSize;

static class TestDescription_suite_SelectionTest_testSortNegatives : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testSortNegatives() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 872, "testSortNegatives" ) {}
 void runTest() { suite_SelectionTest.testSortNegatives(); }
} testDescription_suite_SelectionTest_testSortNegatives;

static class TestDescription_suite_SelectionTest_testAllSame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testAllSame() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 883, "testAllSame" ) {}
 void runTest() { suite_SelectionTest.testAllSame(); }
} testDescription_suite_SelectionTest_testAllSame;

static class TestDescription_suite_SelectionTest_testAlternating : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testAlternating() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 895, "testAlternating" ) {}
 void runTest() { suite_SelectionTest.testAlternating(); }
} testDescription_suite_SelectionTest_testAlternating;

static class TestDescription_suite_SelectionTest_testReverseOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testReverseOrder() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 906, "testReverseOrder" ) {}
 void runTest() { suite_SelectionTest.testReverseOrder(); }
} testDescription_suite_SelectionTest_testReverseOrder;

static class TestDescription_suite_SelectionTest_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testOne() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 918, "testOne" ) {}
 void runTest() { suite_SelectionTest.testOne(); }
} testDescription_suite_SelectionTest_testOne;

static class TestDescription_suite_SelectionTest_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SelectionTest_testTwo() : CxxTest::RealTestDescription( Tests_SelectionTest, suiteDescription_SelectionTest, 928, "testTwo" ) {}
 void runTest() { suite_SelectionTest.testTwo(); }
} testDescription_suite_SelectionTest_testTwo;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
