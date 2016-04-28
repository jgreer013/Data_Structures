#ifndef SORT_TEST_H
#define SORT_TEST_H

#include "MySort.h"

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cxxtest/TestSuite.h>

using namespace std;

class SortTest : public CxxTest::TestSuite {
public:

/////////////////////////////////////////////////////////////
  // TODO:
  void testReverseOrder(){
    vector<int> a;
    for(unsigned int i = 10; i > 0; i--){
      a.push_back(i);
    }
    vector<int> b;
    b = a;
    TS_ASSERT(!isSorted(b));
    TS_ASSERT_THROWS_NOTHING((*f)(b));
    TS_ASSERT(isSorted(b));
  }
  
  void testOne(){
    vector<int> a;
    a.push_back(42);
    vector<int> b;
    b = a;
    TS_ASSERT(isSorted(b));
    TS_ASSERT_THROWS_NOTHING((*f)(b));
    TS_ASSERT(isSorted(b));
  }
  
  void testTwo(){
    vector<int> a;
    a.push_back(73);
    a.push_back(42);
    vector<int> b;
    b = a;
    TS_ASSERT(!isSorted(b));
    TS_ASSERT_THROWS_NOTHING((*f)(b));
    TS_ASSERT(isSorted(b));
  }
  
  
/////////////////////////////////////////////////////
};

#endif
