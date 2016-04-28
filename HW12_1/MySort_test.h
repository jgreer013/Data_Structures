#ifndef SORT_TEST_H
#define SORT_TEST_H

#include "MySort.h"

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cxxtest/TestSuite.h>

using namespace std;

bool isSorted(vector<int>& list){
  //confirms sortedness
  if(list.size()<=1) {
    return true;
  }
  bool retval = true; //assume true until out of order
  for(unsigned int i=1;i<list.size();i++){
    retval = retval && list[i]>=list[i-1];
  }
  return retval;
}


class BubbleTest : public CxxTest::TestSuite {
public:
  void (*f)(vector<int>& list);
  
  void setUp(){
    f = bubbleSort; //TODO: Change this sorting algorithm for each test suite
  }
  
  void testisSortedEmpty() {
    vector<int> list = vector<int>(0);
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
  }

  void testSortRepeats(){
    vector<int> list = vector<int>(0);
    list.push_back(2);
    list.push_back(22);
    list.push_back(32);
    list.push_back(22);
    list.push_back(2);
    list.push_back(22);
    list.push_back(22);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list[list.size()-1],32);
    TS_ASSERT_EQUALS(list[1],2);
    TS_ASSERT_EQUALS(list[5],22);
  }


  void testSortInOrder() {
    vector<int> list = vector<int>(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    vector<int> list2 = list;
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list,list2);
    TS_ASSERT(isSorted(list));
    TS_ASSERT(isSorted(list2));
  }

  void testSortRandSize() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<200;i++) {
      list.push_back(rand()%10);
    }
    int size = list.size();
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(size,list.size());
  }

  void testSortNegatives() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<50;i++) {
      list.push_back(0-i);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[0],-49);
    TS_ASSERT_EQUALS(list[49],0);
    TS_ASSERT(isSorted(list));
  }

  void testAllSame() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<2000;i++){
      list.push_back(13);
    }
    vector<int> list2 = list;
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list,list2);
  }

  void testAlternating() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<65;i++) {
      list.push_back(1);
      list.push_back(2);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[1],1);
    TS_ASSERT_EQUALS(list[list.size()-1],2);
  }
  
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
};


class HeapTest : public CxxTest::TestSuite {
public:
  void (*f)(vector<int>& list);
  
  void setUp(){
    f = heapSort; //TODO: Change this sorting algorithm for each test suite
  }
  
  void testisSortedEmpty() {
    vector<int> list = vector<int>(0);
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
  }

  void testSortRepeats(){
    vector<int> list = vector<int>(0);
    list.push_back(2);
    list.push_back(22);
    list.push_back(32);
    list.push_back(22);
    list.push_back(2);
    list.push_back(22);
    list.push_back(22);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list[list.size()-1],32);
    TS_ASSERT_EQUALS(list[1],2);
    TS_ASSERT_EQUALS(list[5],22);
  }


  void testSortInOrder() {
    vector<int> list = vector<int>(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    vector<int> list2 = list;
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list,list2);
    TS_ASSERT(isSorted(list));
    TS_ASSERT(isSorted(list2));
  }

  void testSortRandSize() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<200;i++) {
      list.push_back(rand()%10);
    }
    int size = list.size();
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(size,list.size());
  }

  void testSortNegatives() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<50;i++) {
      list.push_back(0-i);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[0],-49);
    TS_ASSERT_EQUALS(list[49],0);
    TS_ASSERT(isSorted(list));
  }

  void testAllSame() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<2000;i++){
      list.push_back(13);
    }
    vector<int> list2 = list;
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list,list2);
  }

  void testAlternating() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<65;i++) {
      list.push_back(1);
      list.push_back(2);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[1],1);
    TS_ASSERT_EQUALS(list[list.size()-1],2);
  }
  
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
};


class MergeTest : public CxxTest::TestSuite {
public:
  void (*f)(vector<int>& list);
  
  void setUp(){
    f = mergeSort; //TODO: Change this sorting algorithm for each test suite
  }
  
  void testisSortedEmpty() {
    vector<int> list = vector<int>(0);
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
  }

  void testSortRepeats(){
    vector<int> list = vector<int>(0);
    list.push_back(2);
    list.push_back(22);
    list.push_back(32);
    list.push_back(22);
    list.push_back(2);
    list.push_back(22);
    list.push_back(22);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list[list.size()-1],32);
    TS_ASSERT_EQUALS(list[1],2);
    TS_ASSERT_EQUALS(list[5],22);
  }


  void testSortInOrder() {
    vector<int> list = vector<int>(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    vector<int> list2 = list;
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list,list2);
    TS_ASSERT(isSorted(list));
    TS_ASSERT(isSorted(list2));
  }

  void testSortRandSize() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<200;i++) {
      list.push_back(rand()%10);
    }
    int size = list.size();
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(size,list.size());
  }

  void testSortNegatives() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<50;i++) {
      list.push_back(0-i);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[0],-49);
    TS_ASSERT_EQUALS(list[49],0);
    TS_ASSERT(isSorted(list));
  }

  void testAllSame() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<2000;i++){
      list.push_back(13);
    }
    vector<int> list2 = list;
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list,list2);
  }

  void testAlternating() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<65;i++) {
      list.push_back(1);
      list.push_back(2);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[1],1);
    TS_ASSERT_EQUALS(list[list.size()-1],2);
  }
 
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
};


class Merge2Test : public CxxTest::TestSuite {
public:
  void (*f)(vector<int>& list);
  
  void setUp(){
    f = mergeSort2; //TODO: Change this sorting algorithm for each test suite
  }
  
  void testisSortedEmpty() {
    vector<int> list = vector<int>(0);
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
  }

  void testSortRepeats(){
    vector<int> list = vector<int>(0);
    list.push_back(2);
    list.push_back(22);
    list.push_back(32);
    list.push_back(22);
    list.push_back(2);
    list.push_back(22);
    list.push_back(22);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list[list.size()-1],32);
    TS_ASSERT_EQUALS(list[1],2);
    TS_ASSERT_EQUALS(list[5],22);
  }


  void testSortInOrder() {
    vector<int> list = vector<int>(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    vector<int> list2 = list;
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list,list2);
    TS_ASSERT(isSorted(list));
    TS_ASSERT(isSorted(list2));
  }

  void testSortRandSize() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<200;i++) {
      list.push_back(rand()%10);
    }
    int size = list.size();
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(size,list.size());
  }

  void testSortNegatives() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<50;i++) {
      list.push_back(0-i);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[0],-49);
    TS_ASSERT_EQUALS(list[49],0);
    TS_ASSERT(isSorted(list));
  }

  void testAllSame() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<2000;i++){
      list.push_back(13);
    }
    vector<int> list2 = list;
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list,list2);
  }

  void testAlternating() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<65;i++) {
      list.push_back(1);
      list.push_back(2);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[1],1);
    TS_ASSERT_EQUALS(list[list.size()-1],2);
  }
  
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
};


class NonCompTest : public CxxTest::TestSuite {
public:
  void (*f)(vector<int>& list);
  
  void setUp(){
    f = nonCompareSort; //TODO: Change this sorting algorithm for each test suite
  }
  
  void testisSortedEmpty() {
    vector<int> list = vector<int>(0);
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
  }

  void testSortRepeats(){
    vector<int> list = vector<int>(0);
    list.push_back(2);
    list.push_back(22);
    list.push_back(32);
    list.push_back(22);
    list.push_back(2);
    list.push_back(22);
    list.push_back(22);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list[list.size()-1],32);
    TS_ASSERT_EQUALS(list[1],2);
    TS_ASSERT_EQUALS(list[5],22);
  }


  void testSortInOrder() {
    vector<int> list = vector<int>(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    vector<int> list2 = list;
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list,list2);
    TS_ASSERT(isSorted(list));
    TS_ASSERT(isSorted(list2));
  }

  void testSortRandSize() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<200;i++) {
      list.push_back(rand()%10);
    }
    int size = list.size();
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(size,list.size());
  }

  void testZeroes() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<50;i++) {
      list.push_back(0);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[0],0);
    TS_ASSERT_EQUALS(list[49],0);
    TS_ASSERT(isSorted(list));
  }

  void testAllSame() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<200;i++){
      list.push_back(13);
    }
    vector<int> list2 = list;
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list,list2);
  }

  void testAlternating() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<65;i++) {
      list.push_back(1);
      list.push_back(2);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[1],1);
    TS_ASSERT_EQUALS(list[list.size()-1],2);
  }
  
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
};
class QuickTest : public CxxTest::TestSuite {
public:
  void (*f)(vector<int>& list);
  
  void setUp(){
    f = quickSort; //TODO: Change this sorting algorithm for each test suite
  }
  
  void testisSortedEmpty() {
    vector<int> list = vector<int>(0);
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
  }

  void testSortRepeats(){
    vector<int> list = vector<int>(0);
    list.push_back(2);
    list.push_back(22);
    list.push_back(32);
    list.push_back(22);
    list.push_back(2);
    list.push_back(22);
    list.push_back(22);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list[list.size()-1],32);
    TS_ASSERT_EQUALS(list[1],2);
    TS_ASSERT_EQUALS(list[5],22);
  }


  void testSortInOrder() {
    vector<int> list = vector<int>(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    vector<int> list2 = list;
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list,list2);
    TS_ASSERT(isSorted(list));
    TS_ASSERT(isSorted(list2));
  }

  void testSortRandSize() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<200;i++) {
      list.push_back(rand()%10);
    }
    int size = list.size();
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(size,list.size());
  }

  void testSortNegatives() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<50;i++) {
      list.push_back(0-i);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[0],-49);
    TS_ASSERT_EQUALS(list[49],0);
    TS_ASSERT(isSorted(list));
  }

  void testAllSame() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<2000;i++){
      list.push_back(13);
    }
    vector<int> list2 = list;
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list,list2);
  }

  void testAlternating() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<65;i++) {
      list.push_back(1);
      list.push_back(2);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[1],1);
    TS_ASSERT_EQUALS(list[list.size()-1],2);
  }
  
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
};


class SelectionTest : public CxxTest::TestSuite {
public:
  void (*f)(vector<int>& list);
  
  void setUp(){
    f = selectionSort; //TODO: Change this sorting algorithm for each test suite
  }
  
  void testisSortedEmpty() {
    vector<int> list = vector<int>(0);
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
  }

  void testSortRepeats(){
    vector<int> list = vector<int>(0);
    list.push_back(2);
    list.push_back(22);
    list.push_back(32);
    list.push_back(22);
    list.push_back(2);
    list.push_back(22);
    list.push_back(22);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(32);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    list.push_back(22);
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list[list.size()-1],32);
    TS_ASSERT_EQUALS(list[1],2);
    TS_ASSERT_EQUALS(list[5],22);
  }


  void testSortInOrder() {
    vector<int> list = vector<int>(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    vector<int> list2 = list;
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list,list2);
    TS_ASSERT(isSorted(list));
    TS_ASSERT(isSorted(list2));
  }

  void testSortRandSize() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<200;i++) {
      list.push_back(rand()%10);
    }
    int size = list.size();
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(size,list.size());
  }

  void testSortNegatives() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<50;i++) {
      list.push_back(0-i);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[0],-49);
    TS_ASSERT_EQUALS(list[49],0);
    TS_ASSERT(isSorted(list));
  }

  void testAllSame() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<2000;i++){
      list.push_back(13);
    }
    vector<int> list2 = list;
    TS_ASSERT(isSorted(list));
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT(isSorted(list));
    TS_ASSERT_EQUALS(list,list2);
  }

  void testAlternating() {
    vector<int> list = vector<int>(0);
    for(int i=0;i<65;i++) {
      list.push_back(1);
      list.push_back(2);
    }
    TS_ASSERT_THROWS_NOTHING((*f)(list));
    TS_ASSERT_EQUALS(list[1],1);
    TS_ASSERT_EQUALS(list[list.size()-1],2);
  }

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
};


#endif
