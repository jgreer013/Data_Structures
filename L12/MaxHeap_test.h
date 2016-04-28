#ifndef MAXHEAP_TEST_H
#define MAXHEAP_TEST_H
/*
  MinHeap_test.h
  Unit tests for MinHeap
  Jeremiah Greer
*/

#include "MaxHeap.h"
#include <stdexcept>
#include <string>
#include <queue>
#include <stdlib.h>

#include <cxxtest/TestSuite.h>

class MaxHeapTest : public CxxTest::TestSuite {
public:
// TODO: Fill me in
  void testCon0(){
    MaxHeap<int> a;
    TS_ASSERT_EQUALS(a.size(), 0);
  }
  
  void testCon1(){
    MaxHeap<int> a;
    MaxHeap<int> b;
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(b.size(), 0);
  }
  
  void testCop0(){
    MaxHeap<int> a;
    MaxHeap<int> b(a);
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(b.size(), 0);
  }
  
  void testCop1(){
    MaxHeap<int> a;
    a.push(5);
    MaxHeap<int> b(a);
    TS_ASSERT_EQUALS(a.size(), 1);
    TS_ASSERT_EQUALS(b.size(), 1);
  }
  
  void testCop2(){
    MaxHeap<int> a;
    a.push(0);
    a.push(2);
    MaxHeap<int> b(a);
    TS_ASSERT_EQUALS(a.size(), 2);
    TS_ASSERT_EQUALS(b.size(), 2);
  }
    
  void testAssign0(){
    MaxHeap<int> a;
    a.push(4);
    a = a;
    TS_ASSERT_EQUALS(a.size(), 1);
  }
  
  void testAssign1(){
    MaxHeap<int> a;
    a.push(1);
    MaxHeap<int> b;
    b = a;
    TS_ASSERT_EQUALS(a.size(), 1);
    TS_ASSERT_EQUALS(b.size(), 1);
  }
  
  void testAssign2(){
    MaxHeap<int> a;
    a.push(5);
    a.push(7);
    MaxHeap<int> b;
    b = a;
    TS_ASSERT_EQUALS(a.size(), 2);
    TS_ASSERT_EQUALS(b.size(), 2);
  }
  
  void testSize0(){
    MaxHeap<int> a;
    a.push(5);
    a.push(6);
    TS_ASSERT_EQUALS(a.size(), 2);
  }
  
  void testSize1(){
    MaxHeap<int> a;
    a.push(5);
    a.push(6);
    a.push(7);
    a.push(-3);
    a.push(2);
    TS_ASSERT_EQUALS(a.size(), 5);
  }
  
  void testSize2(){
    MaxHeap<int> a;
    a.push(3);
    a.push(2);
    a.pop();
    TS_ASSERT_EQUALS(a.size(), 1);
  }
  
  void testPush0(){
    MaxHeap<int> a;
    a.push(0);
    TS_ASSERT_EQUALS(a.top(), 0);
  }
  
  void testPush1(){
    MaxHeap<int> a;
    a.push(8);
    a.push(10);
    TS_ASSERT_EQUALS(a.top(), 10);
    TS_ASSERT_EQUALS(a.size(), 2);
  }
  
  void testPush2(){
    MaxHeap<int> a;
    a.push(42);
    a.push(73);
    a.push(100);
    a.push(0);
    TS_ASSERT_EQUALS(a.top(), 100);
    TS_ASSERT_EQUALS(a.size(), 4);
  }
  
  void testPop0(){
    MaxHeap<int> a;
    a.pop();
    TS_ASSERT_EQUALS(a.size(), 0);
  }
  
  void testPop1(){
    MaxHeap<int> a;
    a.push(0);
    a.pop();
    TS_ASSERT_EQUALS(a.size(), 0);
  }
  
  void testPop2(){
    MaxHeap<int> a;
    a.push(2);
    a.push(3);
    TS_ASSERT_EQUALS(a.size(), 2);
    TS_ASSERT_EQUALS(a.top(), 3);
    a.pop();
    TS_ASSERT_EQUALS(a.size(), 1);
    TS_ASSERT_EQUALS(a.top(), 2);
    a.pop();
    TS_ASSERT_EQUALS(a.size(), 0);
  }
  
  void testTop0(){
    MaxHeap<int> a;
    TS_ASSERT_THROWS_ANYTHING(a.top());
  }
  
  void testTop1(){
    MaxHeap<int> a;
    a.push(4);
    TS_ASSERT_EQUALS(a.top(), 4);
  }
  
  void testTop2(){
    MaxHeap<int> a;
    a.push(73);
    a.push(72);
    a.push(71);
    TS_ASSERT_EQUALS(a.top(), 73);
  }
  
  void testTalaga(){
    MaxHeap<int> a;
    priority_queue<int> b;
    for(int i = 0; i < 1000; i++){
      int r = rand();
      a.push(r);
      b.push(r);
      TS_ASSERT_EQUALS(a.top(), b.top());
    }
    
    for(int i = 0; i < 1000; i++){
      TS_ASSERT_EQUALS(a.top(), b.top());
      a.pop();
      b.pop();
    }
  }
  
};

#endif
