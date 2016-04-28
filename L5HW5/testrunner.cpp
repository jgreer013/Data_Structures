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
bool suite_DeckSize_init = false;
#include "Deck_test.h"

static DeckSize suite_DeckSize;

static CxxTest::List Tests_DeckSize = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DeckSize( "Deck_test.h", 38, "DeckSize", suite_DeckSize, Tests_DeckSize );

static class TestDescription_suite_DeckSize_testDeckSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DeckSize_testDeckSize() : CxxTest::RealTestDescription( Tests_DeckSize, suiteDescription_DeckSize, 41, "testDeckSize" ) {}
 void runTest() { suite_DeckSize.testDeckSize(); }
} testDescription_suite_DeckSize_testDeckSize;

static class TestDescription_suite_DeckSize_testDeckSize2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DeckSize_testDeckSize2() : CxxTest::RealTestDescription( Tests_DeckSize, suiteDescription_DeckSize, 46, "testDeckSize2" ) {}
 void runTest() { suite_DeckSize.testDeckSize2(); }
} testDescription_suite_DeckSize_testDeckSize2;

static DeckUnique suite_DeckUnique;

static CxxTest::List Tests_DeckUnique = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DeckUnique( "Deck_test.h", 54, "DeckUnique", suite_DeckUnique, Tests_DeckUnique );

static class TestDescription_suite_DeckUnique_testDeckUnique : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DeckUnique_testDeckUnique() : CxxTest::RealTestDescription( Tests_DeckUnique, suiteDescription_DeckUnique, 57, "testDeckUnique" ) {}
 void runTest() { suite_DeckUnique.testDeckUnique(); }
} testDescription_suite_DeckUnique_testDeckUnique;

static DeckTestDistribution suite_DeckTestDistribution;

static CxxTest::List Tests_DeckTestDistribution = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DeckTestDistribution( "Deck_test.h", 83, "DeckTestDistribution", suite_DeckTestDistribution, Tests_DeckTestDistribution );

static class TestDescription_suite_DeckTestDistribution_testDeckRandom2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DeckTestDistribution_testDeckRandom2() : CxxTest::RealTestDescription( Tests_DeckTestDistribution, suiteDescription_DeckTestDistribution, 85, "testDeckRandom2" ) {}
 void runTest() { suite_DeckTestDistribution.testDeckRandom2(); }
} testDescription_suite_DeckTestDistribution_testDeckRandom2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
