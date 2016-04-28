#ifndef SMARTARRAY_HW_TEST_H
#define SMARTARRAY_HW_TEST_H

#include "SmartArray.h"

#include <iostream>
#include <cxxtest/TestSuite.h>
// Needed for space removal.
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;


class SmartArrayAT : public CxxTest::TestSuite {  
public:
  // At and [] tests
  
  void testAt1(){
    SmartArray<int> a;
    a.push_back(22);
    a.push_back(301);
    a.push_back(4);
    
    TS_ASSERT_EQUALS(a.at(0),22);
  }
  
  void testAt2(){
    SmartArray<int> a;
    a.push_back(2);
    a.push_back(1);
    a.push_back(4);
    
    TS_ASSERT_EQUALS(a.at(-1),4);
  }
  
  void testAt3(){
    SmartArray<int> a;
    a.push_back(7);
    a.push_back(31);
    a.push_back(9);
    
    TS_ASSERT_EQUALS(a.at(-3),7);
  }
  
  void testBracket1(){
    SmartArray<int> a;
    a.push_back(4);
    a.push_back(6);
    
    TS_ASSERT_THROWS_ANYTHING(a[2])
  }
  
  void testBracket2(){
    SmartArray<int> a;
    
    TS_ASSERT_THROWS_ANYTHING(a[0])
  }
  
  void testBracket3(){
    SmartArray<int> a;
    a.push_back(4);
    a.push_back(6);
    
    TS_ASSERT_THROWS_ANYTHING(a[1000])
  }
  
};



class SmartArrayClear : public CxxTest::TestSuite {  
public:
  // .clear() tests (only need 3)
  
  void testClear1(){
    SmartArray<int> a;
    a.push_back(1);
    a.clear();
    
    TS_ASSERT_THROWS_ANYTHING(a[0]);
  }
  
  void testClear2(){
    SmartArray<int> a;
    a.push_back(1);
    a.clear();
    SmartArray<int> b;
    b.push_back(2);
    b.clear();
    
    TS_ASSERT_EQUALS(a,b);
  }
  
  
  void testClear3(){
    SmartArray<int> a;
    a.push_back(1);
    a.push_back(2);
    a.clear();
    a.push_back(6);
    
    TS_ASSERT_EQUALS(a.at(0),6);
  }
  
  
};



class SmartArrayAdd : public CxxTest::TestSuite {  
public:
  // + between two SmartArray tests
  
  void testAdd1(){
    SmartArray<int> a;
    a.push_back(1);
    SmartArray<int> b;
    b.push_back(5);
    SmartArray<int> c;
    c.push_back(1);
    c.push_back(5);
    
    TS_ASSERT_EQUALS(a+b,c);
  }
  
  void testAdd2(){
    SmartArray<int> a;
    a.push_back(-1);
    SmartArray<int> b;
    b.push_back(3);
    SmartArray<int> c;
    c.push_back(-1);
    c.push_back(3);
    
    TS_ASSERT_EQUALS(a+b,c);
  }
  
  void testAdd3(){
    SmartArray<int> a;
    a.push_back(1);
    a.push_back(0);
    SmartArray<int> b;
    b.push_back(5);
    SmartArray<int> c;
    c.push_back(1);
    c.push_back(0);
    c.push_back(5);
    
    TS_ASSERT_EQUALS(a+b,c);
  }
  
  void testAdd4(){
    SmartArray<int> a;
    for (unsigned int i = 0; i < 1000; i++){
      a.push_back(1);
    }
    SmartArray<int> b;
    b.push_back(5);
    
    TS_ASSERT_THROWS_ANYTHING(a+b);
  }
  
  void testAdd5(){
    SmartArray<int> a;
    SmartArray<int> b;
    b.push_back(5);
    SmartArray<int> c;
    c.push_back(5);
    
    TS_ASSERT_EQUALS(a+b,c);
  }
  
  void testAdd6(){
    SmartArray<int> a;
    SmartArray<int> b;
    SmartArray<int> c;
    
    TS_ASSERT_EQUALS(a+b,c);
  }
  
};



class SmartArrayReverse : public CxxTest::TestSuite {  
public:
  // .reverse() tests
  
  void testRev1(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    a.push_back(2);
    b = a.reverse();
  
    TS_ASSERT_EQUALS(b[0],2);
  }
  
  
  void testRev2(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    b = a.reverse();
  
    TS_ASSERT_EQUALS(b[0],3);
  }
  
  void testRev3(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    b = a.reverse();
  
    TS_ASSERT_EQUALS(b[0],1);
  }
  
  void testRev4(){
    SmartArray<int> a;
    SmartArray<int> b;
    b = a.reverse();
  
    TS_ASSERT_EQUALS(b,a);
  }
  
  void testRev5(){
    SmartArray<int> a;
    SmartArray<int> b;
    SmartArray<int> c;
    a.push_back(1);
    a.push_back(2);
    b = a.reverse();
    c = b.reverse();
  
    TS_ASSERT_EQUALS(a[0],c[0]);
  }
  
  void testRev6(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    b = a.reverse();
  
    TS_ASSERT_EQUALS(a,b);
  }
  
};



class SmartArrayEquality : public CxxTest::TestSuite {  
public:
  // == and != tests
  
  void testEq1(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    b.push_back(1);
    
    TS_ASSERT(a == b);
  }
  
  void testEq2(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    a.push_back(5);
    b.push_back(1);
    b.push_back(5);
    
    TS_ASSERT(a == b);
  }
  
  void testEq3(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(0);
    a.push_back(2);
    b.push_back(1);
    b.push_back(2);
    
    TS_ASSERT(!(a == b));
  }
  
  void ttestNeq1(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(3);
    b.push_back(1);
    
    TS_ASSERT(a != b);
  }
  
  void testNeq2(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    a.push_back(7);
    b.push_back(3);
    b.push_back(9);
    
    TS_ASSERT(a != b);
  }
  
  void ttestNeq3(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    a.push_back(5);
    b = a.reverse();
    
    TS_ASSERT(a != b);
  }
  
};



class SmartArrayCopyAssignment : public CxxTest::TestSuite {  
public:
  // Copy Constructor and assignment
  
  void testCopy1(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    a.push_back(5);
    b = a;
    
    TS_ASSERT_EQUALS(b[0],1);
  }
  
  void testCopy2(){
    SmartArray<int> a;
    SmartArray<int> b;
    a.push_back(1);
    a.push_back(7);
    b = a;
    
    TS_ASSERT_EQUALS(b[1],7);
  }
  
  void testCopy3(){
    SmartArray<int> a;
    SmartArray<int> b;
    SmartArray<int> c;
    a.push_back(-3);
    a.push_back(8);
    a.push_back(222);
    b = a;
    c = b;
    
    TS_ASSERT_EQUALS(c[0],-3);
  }
  
  void testCopy4(){
    SmartArray<int> a;
    SmartArray<int> b;
    b = a;
    
    TS_ASSERT_EQUALS(b,a);
  }
  
  void testCopy5(){
    SmartArray<int> a;
    SmartArray<int> b;
    for (unsigned int i = 0; i < 1000; i++){
      a.push_back(1);
    }
    b = a;
    
    TS_ASSERT_EQUALS(b.size(),1000);
  }
  
  void testCopy6(){
    SmartArray<string> a;
    SmartArray<string> b;
    a.push_back("Does");
    a.push_back("it");
    a.push_back("work?");
    b = a;
    
    TS_ASSERT_EQUALS(b[2],"work?");
  }
  
};


class SmartArrayStream : public CxxTest::TestSuite {  
public:
  // << tests
  void testStream1(){
    SmartArray<int> a;
    a.push_back(5);
    a.push_back(6);
    // To test we stream to a stringstream, retrieve as a string,
    // remove spaces, then test the result.
    stringstream stream;
    stream << a;
    string out = stream.str();
    out.erase(remove_if(out.begin(), out.end(), ::isspace), out.end());
    TS_ASSERT_EQUALS(out, "[5,6]");
  }
  
  void testStream2(){
    SmartArray<int> a;
    a.push_back(0);
    a.push_back(-4);
    
    stringstream stream;
    stream << a;
    string out = stream.str();
    out.erase(remove_if(out.begin(), out.end(), ::isspace), out.end());
    TS_ASSERT_EQUALS(out, "[0,-4]");
  }
  
  void testStream3(){
    SmartArray<string> a;
    a.push_back("Test");
    a.push_back("S P A C E S");
    
    stringstream stream;
    stream << a;
    string out = stream.str();
    out.erase(remove_if(out.begin(), out.end(), ::isspace), out.end());
    TS_ASSERT_EQUALS(out, "[Test,SPACES]");
  }
  
  void testStream4(){
    SmartArray<float> a;
    a.push_back(1.5);
    a.push_back(1.7);
    
    stringstream stream;
    stream << a;
    string out = stream.str();
    out.erase(remove_if(out.begin(), out.end(), ::isspace), out.end());
    TS_ASSERT_EQUALS(out, "[1.5,1.7]");
  }
  
  void testStream5(){
    SmartArray<int> a;
    a.push_back(22);
    a.push_back(301);
    a.push_back(4);
    
    stringstream stream;
    stream << a;
    string out = stream.str();
    out.erase(remove_if(out.begin(), out.end(), ::isspace), out.end());
    TS_ASSERT_EQUALS(out, "[22,301,4]");
  }
  
  void testStream6(){
    SmartArray<int> a;
    a.push_back(0);
    
    stringstream stream;
    stream << a;
    string out = stream.str();
    out.erase(remove_if(out.begin(), out.end(), ::isspace), out.end());
    TS_ASSERT_EQUALS(out, "[0]");
  }
};

#endif
