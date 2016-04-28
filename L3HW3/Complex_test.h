#ifndef COMPLEX_TEST_H
#define COMPLEX_TEST_H

#include <Complex.h>

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

const double delta = 0.0001;
// Multiple test classes are used so groups of functions can be tested
// independently.
// Test Getters
class ComplexGetters : public CxxTest::TestSuite {  
public:
  void testGetReal1(){
    TS_ASSERT_DELTA(Complex(5,5).getReal(), 5, delta);
  }
  
  void testGetReal2(){
    TS_ASSERT_DELTA(Complex(-1.5,3).getReal(), -1.5, delta);
  }
  
  void testGetReal3(){
    TS_ASSERT_DELTA(Complex(0.01,2.67).getReal(), 0.01, delta);
  }
  
  void testGetImg1(){
    TS_ASSERT_DELTA(Complex(4,2).getImaginary(), 2, delta);
  }
  
  void testGetImg2(){
    TS_ASSERT_DELTA(Complex(3,0).getImaginary(), 0, delta);
  }
  
  void testGetImg3(){
    TS_ASSERT_DELTA(Complex(1.3,-6.43).getImaginary(), -6.43, delta);
  }
};

// Test +
class ComplexAdd : public CxxTest::TestSuite {  
public:
  void testAdd1(){
    TS_ASSERT_EQUALS(Complex(1,1) + Complex(2,2), Complex(3,3));
  }
  
  void testAdd2(){
    TS_ASSERT_EQUALS(Complex(-3,0) + Complex(1,0), Complex(-2,0));
  }
  
  void testAdd3(){
    TS_ASSERT_EQUALS(Complex(0,3) + Complex(0, 2), Complex(0,5));
  }
  
  void testAdd4(){
    TS_ASSERT_EQUALS(Complex(5,0) + Complex(0, 6), Complex(5,6));
  }
  
  void testAdd5(){
    TS_ASSERT_EQUALS(Complex(2.34,135) + Complex(1.23,246), Complex(3.57,381));
  }
  
  void testAdd6(){
    TS_ASSERT_EQUALS(Complex(-0.01,0) + Complex(0.01, 0), Complex(0,0));
  }
};

// Test -
class ComplexSub : public CxxTest::TestSuite {  
public:
  void testSub1(){
    TS_ASSERT_EQUALS(Complex(1,3) - Complex(4,2), Complex(-3,1));
  }
  
  void testSub2(){
    TS_ASSERT_EQUALS(Complex(0,2) - Complex(0,2.5), Complex(0,-0.5));
  }
  
  void testSub3(){
    TS_ASSERT_EQUALS(Complex(3,0) - Complex(4,0), Complex(-1,0));
  }
  
  void testSub4(){
    TS_ASSERT_EQUALS(Complex(4,4) - 4, Complex(0,4));
  }
  
  void testSub5(){
    TS_ASSERT_EQUALS(Complex(0,3) - 1, Complex(-1,3));
  }
  
  void testSub6(){
    TS_ASSERT_EQUALS(Complex(2,2) - Complex(2,2), Complex(0,0));
  }
};

// Test *
class ComplexMult : public CxxTest::TestSuite {  
public:
  void testMult1(){
    TS_ASSERT_EQUALS(Complex(2,0) * Complex(3,0), Complex(6,0));
  }
  
  void testMult2(){
    TS_ASSERT_EQUALS(Complex(1,0) * Complex(4,3), Complex(4,3));
  }
  
  void testMult3(){
    TS_ASSERT_EQUALS(Complex(2,1) * Complex(3,3), Complex(3,9));
  }
  
  void testMult4(){
    TS_ASSERT_EQUALS(Complex(1,4) * 2, Complex(2,8));
  }
  
  void testMult5(){
    TS_ASSERT_EQUALS(Complex(0,0) * Complex(3.2,-1), Complex(0,0));
  }
  
  void testMult6(){
    TS_ASSERT_EQUALS(Complex(-1,0) * Complex(1,1), Complex(-1,-1));
  }
};

// Test ==
class ComplexEquality : public CxxTest::TestSuite {  
public:
  void testEq1(){
    TS_ASSERT(Complex(1,1) == Complex(1,1));
  }
  
  void testEq2(){
    TS_ASSERT(!(Complex(1,3) == Complex(1,2)));
  }
  
  void testEq3(){
    TS_ASSERT(!(Complex(0,2) == Complex(0,3)));
  }
  
  void testEq4(){
    TS_ASSERT(Complex(3,0) == 3);
  }
  
  void testEq5(){
    TS_ASSERT(Complex(2,2) != Complex(2,1));
  }
  
  void testEq6(){
    TS_ASSERT(!(Complex(0,0) != Complex(0,0)));
  }
};

// Test .conjugate()
class ComplexConjugate : public CxxTest::TestSuite {  
public:
  void testCon1(){
    TS_ASSERT_EQUALS(Complex(1,1).conjugate(), Complex(1,-1));
  }
  
  void testCon2(){
    TS_ASSERT_EQUALS(Complex(0,2).conjugate(), Complex(0,-2));
  }
  
  void testCon3(){
    TS_ASSERT_EQUALS(Complex(7,0).conjugate(), Complex(7,0));
  }
  
  void testCon4(){
    TS_ASSERT_EQUALS(Complex(1,-3.5).conjugate(), Complex(1,3.5));
  }
  
  void testCon5(){
    TS_ASSERT_EQUALS(Complex(0,0).conjugate(), Complex(0,0));
  }
  
  void testCon6(){
    TS_ASSERT_EQUALS(Complex(3.67,3).conjugate(), Complex(3.67,-3));
  }
};

#endif
