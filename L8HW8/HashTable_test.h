#ifndef HASHTABLE_TEST_H
#define HASHTABLE_TEST_H

#include "HashTable.h"
#include <stdexcept>
#include <string>
// Needed for space removal.
#include <sstream>
#include <algorithm>
#include <cxxtest/TestSuite.h>
#include <ctime>

using namespace std;

// This requires CxxTest to be installed!
// For this CPPVideos example, navigate your terminal to CPPVideos and type:
// git submodule add https://github.com/CxxTest/cxxtest.git
// This will add the public CxxTest repository INSIDE the current repo.
// The current Makefile in this directory assumes cxxtest is a folder one
// level down.

const int SIZE = 2000;  // Size of Linked List to test speed.

// Some useful hash functions
unsigned int hash(const int& number){
  return abs(number);
}

unsigned int hash(const string& word){
  unsigned int ret = 0;
  for(unsigned int i = 0; i < word.length(); i++){
    ret += word[i] * i + i * 47;
  }
  return ret;
}

class HashTableInsertSizeCap : public CxxTest::TestSuite {
public:

  void testEmpty() {
    HashTable<int> a(hash, 5);
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(a.capacity(), 5);
  }
  
  void testInsert1() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    TS_ASSERT_EQUALS(a.size(), 1);
    TS_ASSERT_EQUALS(a.capacity(), 5);
  }
  // TODO
  
  void testInsert2() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.insert(1);
    TS_ASSERT_EQUALS(a.size(), 2);
    TS_ASSERT_EQUALS(a.capacity(), 5);
  }
  
  void testInsert3() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.insert(15);
    TS_ASSERT_EQUALS(a.size(), 2);
    TS_ASSERT_EQUALS(a.capacity(), 5);
  }
  
  void testInsert4() {
    HashTable<int> a(hash, 1);
    a.insert(5);
    TS_ASSERT_EQUALS(a.size(), 1);
    TS_ASSERT_THROWS_ANYTHING(a.insert(2));
  }
  
  void testInsert5() {
    HashTable<int> a(hash, 5);
    a.insert(0);
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    TS_ASSERT_EQUALS(a.size(), 5);
    TS_ASSERT_EQUALS(a.capacity(), 5);
  }
  
  void testInsert6() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.insert(5);
    TS_ASSERT_EQUALS(a.size(), 1);
  }
};

class HashTableClear : public CxxTest::TestSuite {
public:

  // TODO
  void testClear1() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.insert(1);
    a.clear();
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(a.capacity(), 5);
  }
  
  void testClear2() {
    HashTable<int> a(hash, 5);
    a.clear();
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(a.capacity(), 5);
  }
  
  void testClear3() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.clear();
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(a.capacity(), 5);
  }
  
  void testClear4() {
    HashTable<int> a(hash, 2);
    a.insert(2);
    a.insert(1);
    a.clear();
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(a.capacity(), 2);
  }
  
  void testClear5() {
    HashTable<int> a(hash, 1);
    a.clear();
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(a.capacity(), 1);
  }
};

class HashTableConCopyAssign : public CxxTest::TestSuite {
   
public:
  // Copy Constructor
	void testCopy() {
    HashTable<int> a(hash,5);
    a.insert(5);
    HashTable<int> b(a);
    TS_ASSERT_EQUALS(a.size(), 1);
    TS_ASSERT_EQUALS(b.size(), 1);
  }
// TODO

  void testCopy2() {
    HashTable<int> a(hash,5);
    HashTable<int> b(a);
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(b.size(), 0);
  }
  
  void testCopy3() {
    HashTable<int> a(hash,5);
    a.insert(5);
    a.insert(8);
    a.insert(7);
    HashTable<int> b(a);
    TS_ASSERT_EQUALS(a.size(), 3);
    TS_ASSERT_EQUALS(b.size(), 3);
  }
  
  void testAssign1() {
    HashTable<int> a(hash,5);
    a.insert(5);
    HashTable<int> b = a;
    TS_ASSERT_EQUALS(a.size(), 1);
    TS_ASSERT_EQUALS(b.size(), 1);
  }
  
  void testAssign2() {
    HashTable<int> a(hash,5);
    HashTable<int> b = a;
    TS_ASSERT_EQUALS(a.size(), 0);
    TS_ASSERT_EQUALS(b.size(), 0);
  }
  
  void testAssign3() {
    HashTable<int> a(hash,5);
    a.insert(5);
    a.insert(2);
    HashTable<int> b = a;
    TS_ASSERT_EQUALS(a.size(), 2);
    TS_ASSERT_EQUALS(b.size(), 2);
  }
  
};

class HashTableInsertFind : public CxxTest::TestSuite {
public:
  void testInsertFind1(){
    HashTable<int> a(hash, 5);
    a.insert(5);
    TS_ASSERT(a.find(5));
  }
  // TODO
  
  void testFind2() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    TS_ASSERT(!a.find(4));
  }
  
  void testFind3() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    TS_ASSERT(!a.find(15));
  }
  
  void testFind4() { 
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.insert(10);
    TS_ASSERT(a.find(10));
  }
  
  void testFind5() {
    HashTable<int> a(hash, 5);
    a.insert(0);
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    TS_ASSERT(a.find(4));
  }
  
  void testFind6() {
    HashTable<int> a(hash, 5);
    TS_ASSERT(!a.find(5));
  }
  
};

class HashTableRemove : public CxxTest::TestSuite {
public:

  void testRm1() {
    HashTable<int> a(hash, 5);
    a.remove(5);
    TS_ASSERT_EQUALS(a.size(), 0);
  }
  
  // TODO
  void testRm2() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.remove(5);
    TS_ASSERT_EQUALS(a.size(), 0);
  }
  
  void testRm3() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.insert(10);
    a.remove(5);
    TS_ASSERT_EQUALS(a.size(), 1);
  }
  
  void testRm4() {
    HashTable<int> a(hash, 5);
    a.insert(0);
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.remove(5);
    TS_ASSERT_EQUALS(a.size(), 5);
  }
  
  void testRm5() {
    HashTable<int> a(hash, 1);
    a.insert(5);
    a.remove(5);
    a.insert(4);
    TS_ASSERT_EQUALS(a.size(), 1);
  }
  
  void testRm6() {
    HashTable<int> a(hash, 5);
    a.insert(5);
    a.remove(5);
    a.insert(5);
    TS_ASSERT_EQUALS(a.size(), 1);
  }
};


#endif
