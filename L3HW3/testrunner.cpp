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
bool suite_RationalStarter_init = false;
#include "Rational_test.h"

static RationalStarter suite_RationalStarter;

static CxxTest::List Tests_RationalStarter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RationalStarter( "Rational_test.h", 11, "RationalStarter", suite_RationalStarter, Tests_RationalStarter );

static class TestDescription_suite_RationalStarter_testConstructor1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testConstructor1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 38, "testConstructor1" ) {}
 void runTest() { suite_RationalStarter.testConstructor1(); }
} testDescription_suite_RationalStarter_testConstructor1;

static class TestDescription_suite_RationalStarter_testConstructor2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testConstructor2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 42, "testConstructor2" ) {}
 void runTest() { suite_RationalStarter.testConstructor2(); }
} testDescription_suite_RationalStarter_testConstructor2;

static class TestDescription_suite_RationalStarter_testgetNumerator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgetNumerator() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 47, "testgetNumerator" ) {}
 void runTest() { suite_RationalStarter.testgetNumerator(); }
} testDescription_suite_RationalStarter_testgetNumerator;

static class TestDescription_suite_RationalStarter_testgetNumerator2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgetNumerator2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 51, "testgetNumerator2" ) {}
 void runTest() { suite_RationalStarter.testgetNumerator2(); }
} testDescription_suite_RationalStarter_testgetNumerator2;

static class TestDescription_suite_RationalStarter_testgetDenominator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgetDenominator() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 55, "testgetDenominator" ) {}
 void runTest() { suite_RationalStarter.testgetDenominator(); }
} testDescription_suite_RationalStarter_testgetDenominator;

static class TestDescription_suite_RationalStarter_testgetDenominator2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgetDenominator2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 59, "testgetDenominator2" ) {}
 void runTest() { suite_RationalStarter.testgetDenominator2(); }
} testDescription_suite_RationalStarter_testgetDenominator2;

static class TestDescription_suite_RationalStarter_testgetAsDouble : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgetAsDouble() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 63, "testgetAsDouble" ) {}
 void runTest() { suite_RationalStarter.testgetAsDouble(); }
} testDescription_suite_RationalStarter_testgetAsDouble;

static class TestDescription_suite_RationalStarter_testgetAsDouble2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgetAsDouble2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 67, "testgetAsDouble2" ) {}
 void runTest() { suite_RationalStarter.testgetAsDouble2(); }
} testDescription_suite_RationalStarter_testgetAsDouble2;

static class TestDescription_suite_RationalStarter_testgetAsDouble3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgetAsDouble3() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 71, "testgetAsDouble3" ) {}
 void runTest() { suite_RationalStarter.testgetAsDouble3(); }
} testDescription_suite_RationalStarter_testgetAsDouble3;

static class TestDescription_suite_RationalStarter_testgetAsDouble4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgetAsDouble4() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 75, "testgetAsDouble4" ) {}
 void runTest() { suite_RationalStarter.testgetAsDouble4(); }
} testDescription_suite_RationalStarter_testgetAsDouble4;

static class TestDescription_suite_RationalStarter_testAdd1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testAdd1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 81, "testAdd1" ) {}
 void runTest() { suite_RationalStarter.testAdd1(); }
} testDescription_suite_RationalStarter_testAdd1;

static class TestDescription_suite_RationalStarter_testAdd2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testAdd2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 85, "testAdd2" ) {}
 void runTest() { suite_RationalStarter.testAdd2(); }
} testDescription_suite_RationalStarter_testAdd2;

static class TestDescription_suite_RationalStarter_testAdd3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testAdd3() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 89, "testAdd3" ) {}
 void runTest() { suite_RationalStarter.testAdd3(); }
} testDescription_suite_RationalStarter_testAdd3;

static class TestDescription_suite_RationalStarter_testAdd4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testAdd4() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 93, "testAdd4" ) {}
 void runTest() { suite_RationalStarter.testAdd4(); }
} testDescription_suite_RationalStarter_testAdd4;

static class TestDescription_suite_RationalStarter_testSub1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testSub1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 97, "testSub1" ) {}
 void runTest() { suite_RationalStarter.testSub1(); }
} testDescription_suite_RationalStarter_testSub1;

static class TestDescription_suite_RationalStarter_testSub2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testSub2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 101, "testSub2" ) {}
 void runTest() { suite_RationalStarter.testSub2(); }
} testDescription_suite_RationalStarter_testSub2;

static class TestDescription_suite_RationalStarter_testmult1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testmult1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 105, "testmult1" ) {}
 void runTest() { suite_RationalStarter.testmult1(); }
} testDescription_suite_RationalStarter_testmult1;

static class TestDescription_suite_RationalStarter_testmult2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testmult2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 109, "testmult2" ) {}
 void runTest() { suite_RationalStarter.testmult2(); }
} testDescription_suite_RationalStarter_testmult2;

static class TestDescription_suite_RationalStarter_testmult3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testmult3() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 113, "testmult3" ) {}
 void runTest() { suite_RationalStarter.testmult3(); }
} testDescription_suite_RationalStarter_testmult3;

static class TestDescription_suite_RationalStarter_testless1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testless1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 118, "testless1" ) {}
 void runTest() { suite_RationalStarter.testless1(); }
} testDescription_suite_RationalStarter_testless1;

static class TestDescription_suite_RationalStarter_testless2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testless2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 122, "testless2" ) {}
 void runTest() { suite_RationalStarter.testless2(); }
} testDescription_suite_RationalStarter_testless2;

static class TestDescription_suite_RationalStarter_testlessEqual1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testlessEqual1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 126, "testlessEqual1" ) {}
 void runTest() { suite_RationalStarter.testlessEqual1(); }
} testDescription_suite_RationalStarter_testlessEqual1;

static class TestDescription_suite_RationalStarter_testlessEqual2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testlessEqual2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 130, "testlessEqual2" ) {}
 void runTest() { suite_RationalStarter.testlessEqual2(); }
} testDescription_suite_RationalStarter_testlessEqual2;

static class TestDescription_suite_RationalStarter_testgreater1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgreater1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 134, "testgreater1" ) {}
 void runTest() { suite_RationalStarter.testgreater1(); }
} testDescription_suite_RationalStarter_testgreater1;

static class TestDescription_suite_RationalStarter_testgreater2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgreater2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 138, "testgreater2" ) {}
 void runTest() { suite_RationalStarter.testgreater2(); }
} testDescription_suite_RationalStarter_testgreater2;

static class TestDescription_suite_RationalStarter_testgreaterEqual1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgreaterEqual1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 142, "testgreaterEqual1" ) {}
 void runTest() { suite_RationalStarter.testgreaterEqual1(); }
} testDescription_suite_RationalStarter_testgreaterEqual1;

static class TestDescription_suite_RationalStarter_testgreaterEqual2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testgreaterEqual2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 146, "testgreaterEqual2" ) {}
 void runTest() { suite_RationalStarter.testgreaterEqual2(); }
} testDescription_suite_RationalStarter_testgreaterEqual2;

static class TestDescription_suite_RationalStarter_testequal1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testequal1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 150, "testequal1" ) {}
 void runTest() { suite_RationalStarter.testequal1(); }
} testDescription_suite_RationalStarter_testequal1;

static class TestDescription_suite_RationalStarter_testequal2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testequal2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 154, "testequal2" ) {}
 void runTest() { suite_RationalStarter.testequal2(); }
} testDescription_suite_RationalStarter_testequal2;

static class TestDescription_suite_RationalStarter_testnotEqual1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testnotEqual1() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 158, "testnotEqual1" ) {}
 void runTest() { suite_RationalStarter.testnotEqual1(); }
} testDescription_suite_RationalStarter_testnotEqual1;

static class TestDescription_suite_RationalStarter_testnotEqual2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalStarter_testnotEqual2() : CxxTest::RealTestDescription( Tests_RationalStarter, suiteDescription_RationalStarter, 162, "testnotEqual2" ) {}
 void runTest() { suite_RationalStarter.testnotEqual2(); }
} testDescription_suite_RationalStarter_testnotEqual2;

static RationalLab suite_RationalLab;

static CxxTest::List Tests_RationalLab = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RationalLab( "Rational_test.h", 168, "RationalLab", suite_RationalLab, Tests_RationalLab );

static class TestDescription_suite_RationalLab_testDiv1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalLab_testDiv1() : CxxTest::RealTestDescription( Tests_RationalLab, suiteDescription_RationalLab, 196, "testDiv1" ) {}
 void runTest() { suite_RationalLab.testDiv1(); }
} testDescription_suite_RationalLab_testDiv1;

static class TestDescription_suite_RationalLab_testDiv2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalLab_testDiv2() : CxxTest::RealTestDescription( Tests_RationalLab, suiteDescription_RationalLab, 200, "testDiv2" ) {}
 void runTest() { suite_RationalLab.testDiv2(); }
} testDescription_suite_RationalLab_testDiv2;

static class TestDescription_suite_RationalLab_testDiv3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalLab_testDiv3() : CxxTest::RealTestDescription( Tests_RationalLab, suiteDescription_RationalLab, 204, "testDiv3" ) {}
 void runTest() { suite_RationalLab.testDiv3(); }
} testDescription_suite_RationalLab_testDiv3;

static class TestDescription_suite_RationalLab_testDiv4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalLab_testDiv4() : CxxTest::RealTestDescription( Tests_RationalLab, suiteDescription_RationalLab, 208, "testDiv4" ) {}
 void runTest() { suite_RationalLab.testDiv4(); }
} testDescription_suite_RationalLab_testDiv4;

static class TestDescription_suite_RationalLab_testDiv5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalLab_testDiv5() : CxxTest::RealTestDescription( Tests_RationalLab, suiteDescription_RationalLab, 212, "testDiv5" ) {}
 void runTest() { suite_RationalLab.testDiv5(); }
} testDescription_suite_RationalLab_testDiv5;

#include "Complex_test.h"

static ComplexGetters suite_ComplexGetters;

static CxxTest::List Tests_ComplexGetters = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ComplexGetters( "Complex_test.h", 15, "ComplexGetters", suite_ComplexGetters, Tests_ComplexGetters );

static class TestDescription_suite_ComplexGetters_testGetReal1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexGetters_testGetReal1() : CxxTest::RealTestDescription( Tests_ComplexGetters, suiteDescription_ComplexGetters, 17, "testGetReal1" ) {}
 void runTest() { suite_ComplexGetters.testGetReal1(); }
} testDescription_suite_ComplexGetters_testGetReal1;

static class TestDescription_suite_ComplexGetters_testGetReal2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexGetters_testGetReal2() : CxxTest::RealTestDescription( Tests_ComplexGetters, suiteDescription_ComplexGetters, 21, "testGetReal2" ) {}
 void runTest() { suite_ComplexGetters.testGetReal2(); }
} testDescription_suite_ComplexGetters_testGetReal2;

static class TestDescription_suite_ComplexGetters_testGetReal3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexGetters_testGetReal3() : CxxTest::RealTestDescription( Tests_ComplexGetters, suiteDescription_ComplexGetters, 25, "testGetReal3" ) {}
 void runTest() { suite_ComplexGetters.testGetReal3(); }
} testDescription_suite_ComplexGetters_testGetReal3;

static class TestDescription_suite_ComplexGetters_testGetImg1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexGetters_testGetImg1() : CxxTest::RealTestDescription( Tests_ComplexGetters, suiteDescription_ComplexGetters, 29, "testGetImg1" ) {}
 void runTest() { suite_ComplexGetters.testGetImg1(); }
} testDescription_suite_ComplexGetters_testGetImg1;

static class TestDescription_suite_ComplexGetters_testGetImg2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexGetters_testGetImg2() : CxxTest::RealTestDescription( Tests_ComplexGetters, suiteDescription_ComplexGetters, 33, "testGetImg2" ) {}
 void runTest() { suite_ComplexGetters.testGetImg2(); }
} testDescription_suite_ComplexGetters_testGetImg2;

static class TestDescription_suite_ComplexGetters_testGetImg3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexGetters_testGetImg3() : CxxTest::RealTestDescription( Tests_ComplexGetters, suiteDescription_ComplexGetters, 37, "testGetImg3" ) {}
 void runTest() { suite_ComplexGetters.testGetImg3(); }
} testDescription_suite_ComplexGetters_testGetImg3;

static ComplexAdd suite_ComplexAdd;

static CxxTest::List Tests_ComplexAdd = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ComplexAdd( "Complex_test.h", 43, "ComplexAdd", suite_ComplexAdd, Tests_ComplexAdd );

static class TestDescription_suite_ComplexAdd_testAdd1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexAdd_testAdd1() : CxxTest::RealTestDescription( Tests_ComplexAdd, suiteDescription_ComplexAdd, 45, "testAdd1" ) {}
 void runTest() { suite_ComplexAdd.testAdd1(); }
} testDescription_suite_ComplexAdd_testAdd1;

static class TestDescription_suite_ComplexAdd_testAdd2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexAdd_testAdd2() : CxxTest::RealTestDescription( Tests_ComplexAdd, suiteDescription_ComplexAdd, 49, "testAdd2" ) {}
 void runTest() { suite_ComplexAdd.testAdd2(); }
} testDescription_suite_ComplexAdd_testAdd2;

static class TestDescription_suite_ComplexAdd_testAdd3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexAdd_testAdd3() : CxxTest::RealTestDescription( Tests_ComplexAdd, suiteDescription_ComplexAdd, 53, "testAdd3" ) {}
 void runTest() { suite_ComplexAdd.testAdd3(); }
} testDescription_suite_ComplexAdd_testAdd3;

static class TestDescription_suite_ComplexAdd_testAdd4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexAdd_testAdd4() : CxxTest::RealTestDescription( Tests_ComplexAdd, suiteDescription_ComplexAdd, 57, "testAdd4" ) {}
 void runTest() { suite_ComplexAdd.testAdd4(); }
} testDescription_suite_ComplexAdd_testAdd4;

static class TestDescription_suite_ComplexAdd_testAdd5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexAdd_testAdd5() : CxxTest::RealTestDescription( Tests_ComplexAdd, suiteDescription_ComplexAdd, 61, "testAdd5" ) {}
 void runTest() { suite_ComplexAdd.testAdd5(); }
} testDescription_suite_ComplexAdd_testAdd5;

static class TestDescription_suite_ComplexAdd_testAdd6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexAdd_testAdd6() : CxxTest::RealTestDescription( Tests_ComplexAdd, suiteDescription_ComplexAdd, 65, "testAdd6" ) {}
 void runTest() { suite_ComplexAdd.testAdd6(); }
} testDescription_suite_ComplexAdd_testAdd6;

static ComplexSub suite_ComplexSub;

static CxxTest::List Tests_ComplexSub = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ComplexSub( "Complex_test.h", 71, "ComplexSub", suite_ComplexSub, Tests_ComplexSub );

static class TestDescription_suite_ComplexSub_testSub1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexSub_testSub1() : CxxTest::RealTestDescription( Tests_ComplexSub, suiteDescription_ComplexSub, 73, "testSub1" ) {}
 void runTest() { suite_ComplexSub.testSub1(); }
} testDescription_suite_ComplexSub_testSub1;

static class TestDescription_suite_ComplexSub_testSub2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexSub_testSub2() : CxxTest::RealTestDescription( Tests_ComplexSub, suiteDescription_ComplexSub, 77, "testSub2" ) {}
 void runTest() { suite_ComplexSub.testSub2(); }
} testDescription_suite_ComplexSub_testSub2;

static class TestDescription_suite_ComplexSub_testSub3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexSub_testSub3() : CxxTest::RealTestDescription( Tests_ComplexSub, suiteDescription_ComplexSub, 81, "testSub3" ) {}
 void runTest() { suite_ComplexSub.testSub3(); }
} testDescription_suite_ComplexSub_testSub3;

static class TestDescription_suite_ComplexSub_testSub4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexSub_testSub4() : CxxTest::RealTestDescription( Tests_ComplexSub, suiteDescription_ComplexSub, 85, "testSub4" ) {}
 void runTest() { suite_ComplexSub.testSub4(); }
} testDescription_suite_ComplexSub_testSub4;

static class TestDescription_suite_ComplexSub_testSub5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexSub_testSub5() : CxxTest::RealTestDescription( Tests_ComplexSub, suiteDescription_ComplexSub, 89, "testSub5" ) {}
 void runTest() { suite_ComplexSub.testSub5(); }
} testDescription_suite_ComplexSub_testSub5;

static class TestDescription_suite_ComplexSub_testSub6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexSub_testSub6() : CxxTest::RealTestDescription( Tests_ComplexSub, suiteDescription_ComplexSub, 93, "testSub6" ) {}
 void runTest() { suite_ComplexSub.testSub6(); }
} testDescription_suite_ComplexSub_testSub6;

static ComplexMult suite_ComplexMult;

static CxxTest::List Tests_ComplexMult = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ComplexMult( "Complex_test.h", 99, "ComplexMult", suite_ComplexMult, Tests_ComplexMult );

static class TestDescription_suite_ComplexMult_testMult1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexMult_testMult1() : CxxTest::RealTestDescription( Tests_ComplexMult, suiteDescription_ComplexMult, 101, "testMult1" ) {}
 void runTest() { suite_ComplexMult.testMult1(); }
} testDescription_suite_ComplexMult_testMult1;

static class TestDescription_suite_ComplexMult_testMult2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexMult_testMult2() : CxxTest::RealTestDescription( Tests_ComplexMult, suiteDescription_ComplexMult, 105, "testMult2" ) {}
 void runTest() { suite_ComplexMult.testMult2(); }
} testDescription_suite_ComplexMult_testMult2;

static class TestDescription_suite_ComplexMult_testMult3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexMult_testMult3() : CxxTest::RealTestDescription( Tests_ComplexMult, suiteDescription_ComplexMult, 109, "testMult3" ) {}
 void runTest() { suite_ComplexMult.testMult3(); }
} testDescription_suite_ComplexMult_testMult3;

static class TestDescription_suite_ComplexMult_testMult4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexMult_testMult4() : CxxTest::RealTestDescription( Tests_ComplexMult, suiteDescription_ComplexMult, 113, "testMult4" ) {}
 void runTest() { suite_ComplexMult.testMult4(); }
} testDescription_suite_ComplexMult_testMult4;

static class TestDescription_suite_ComplexMult_testMult5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexMult_testMult5() : CxxTest::RealTestDescription( Tests_ComplexMult, suiteDescription_ComplexMult, 117, "testMult5" ) {}
 void runTest() { suite_ComplexMult.testMult5(); }
} testDescription_suite_ComplexMult_testMult5;

static class TestDescription_suite_ComplexMult_testMult6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexMult_testMult6() : CxxTest::RealTestDescription( Tests_ComplexMult, suiteDescription_ComplexMult, 121, "testMult6" ) {}
 void runTest() { suite_ComplexMult.testMult6(); }
} testDescription_suite_ComplexMult_testMult6;

static ComplexEquality suite_ComplexEquality;

static CxxTest::List Tests_ComplexEquality = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ComplexEquality( "Complex_test.h", 127, "ComplexEquality", suite_ComplexEquality, Tests_ComplexEquality );

static class TestDescription_suite_ComplexEquality_testEq1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexEquality_testEq1() : CxxTest::RealTestDescription( Tests_ComplexEquality, suiteDescription_ComplexEquality, 129, "testEq1" ) {}
 void runTest() { suite_ComplexEquality.testEq1(); }
} testDescription_suite_ComplexEquality_testEq1;

static class TestDescription_suite_ComplexEquality_testEq2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexEquality_testEq2() : CxxTest::RealTestDescription( Tests_ComplexEquality, suiteDescription_ComplexEquality, 133, "testEq2" ) {}
 void runTest() { suite_ComplexEquality.testEq2(); }
} testDescription_suite_ComplexEquality_testEq2;

static class TestDescription_suite_ComplexEquality_testEq3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexEquality_testEq3() : CxxTest::RealTestDescription( Tests_ComplexEquality, suiteDescription_ComplexEquality, 137, "testEq3" ) {}
 void runTest() { suite_ComplexEquality.testEq3(); }
} testDescription_suite_ComplexEquality_testEq3;

static class TestDescription_suite_ComplexEquality_testEq4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexEquality_testEq4() : CxxTest::RealTestDescription( Tests_ComplexEquality, suiteDescription_ComplexEquality, 141, "testEq4" ) {}
 void runTest() { suite_ComplexEquality.testEq4(); }
} testDescription_suite_ComplexEquality_testEq4;

static class TestDescription_suite_ComplexEquality_testEq5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexEquality_testEq5() : CxxTest::RealTestDescription( Tests_ComplexEquality, suiteDescription_ComplexEquality, 145, "testEq5" ) {}
 void runTest() { suite_ComplexEquality.testEq5(); }
} testDescription_suite_ComplexEquality_testEq5;

static class TestDescription_suite_ComplexEquality_testEq6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexEquality_testEq6() : CxxTest::RealTestDescription( Tests_ComplexEquality, suiteDescription_ComplexEquality, 149, "testEq6" ) {}
 void runTest() { suite_ComplexEquality.testEq6(); }
} testDescription_suite_ComplexEquality_testEq6;

static ComplexConjugate suite_ComplexConjugate;

static CxxTest::List Tests_ComplexConjugate = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ComplexConjugate( "Complex_test.h", 155, "ComplexConjugate", suite_ComplexConjugate, Tests_ComplexConjugate );

static class TestDescription_suite_ComplexConjugate_testCon1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexConjugate_testCon1() : CxxTest::RealTestDescription( Tests_ComplexConjugate, suiteDescription_ComplexConjugate, 157, "testCon1" ) {}
 void runTest() { suite_ComplexConjugate.testCon1(); }
} testDescription_suite_ComplexConjugate_testCon1;

static class TestDescription_suite_ComplexConjugate_testCon2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexConjugate_testCon2() : CxxTest::RealTestDescription( Tests_ComplexConjugate, suiteDescription_ComplexConjugate, 161, "testCon2" ) {}
 void runTest() { suite_ComplexConjugate.testCon2(); }
} testDescription_suite_ComplexConjugate_testCon2;

static class TestDescription_suite_ComplexConjugate_testCon3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexConjugate_testCon3() : CxxTest::RealTestDescription( Tests_ComplexConjugate, suiteDescription_ComplexConjugate, 165, "testCon3" ) {}
 void runTest() { suite_ComplexConjugate.testCon3(); }
} testDescription_suite_ComplexConjugate_testCon3;

static class TestDescription_suite_ComplexConjugate_testCon4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexConjugate_testCon4() : CxxTest::RealTestDescription( Tests_ComplexConjugate, suiteDescription_ComplexConjugate, 169, "testCon4" ) {}
 void runTest() { suite_ComplexConjugate.testCon4(); }
} testDescription_suite_ComplexConjugate_testCon4;

static class TestDescription_suite_ComplexConjugate_testCon5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexConjugate_testCon5() : CxxTest::RealTestDescription( Tests_ComplexConjugate, suiteDescription_ComplexConjugate, 173, "testCon5" ) {}
 void runTest() { suite_ComplexConjugate.testCon5(); }
} testDescription_suite_ComplexConjugate_testCon5;

static class TestDescription_suite_ComplexConjugate_testCon6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexConjugate_testCon6() : CxxTest::RealTestDescription( Tests_ComplexConjugate, suiteDescription_ComplexConjugate, 177, "testCon6" ) {}
 void runTest() { suite_ComplexConjugate.testCon6(); }
} testDescription_suite_ComplexConjugate_testCon6;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
