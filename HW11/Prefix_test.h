#ifndef PREFIX_TEST_H
#define PREFIX_TEST_H

#include "Prefix.h"
#include <string>
// Needed for space removal.
#include <sstream>
#include <algorithm>
#include <cxxtest/TestSuite.h>
#include <ctime>

using namespace std;


// Fill me in!
class PrefixConstructors : public CxxTest::TestSuite {
public:
  void testDef1(){
    Prefix a;
    TS_ASSERT_EQUALS(a.sizeN(), 1);
    TS_ASSERT_EQUALS(a.sizeS(), 0);
  }
  
  void testCopy1(){
    Prefix a;
    a.insert("one");
    a.insert("two");
    Prefix b(a);
    TS_ASSERT_EQUALS(a.getNumNodes(), b.getNumNodes());
    TS_ASSERT_EQUALS(b.isStored("two"), true);
    TS_ASSERT_EQUALS(a.isStored("two"), true);
  }
  
  void testAssign1(){
    Prefix a;
    a.insert("red");
    a.insert("blue");
    Prefix b;
    b = a;
    TS_ASSERT_EQUALS(a.getNumNodes(), b.getNumNodes());
    TS_ASSERT_EQUALS(b.isStored("red"), true);
    TS_ASSERT_EQUALS(a.isStored("red"), true);
  }
  
  void testAssign2(){
    Prefix a;
    a.insert("copy");
    a = a;
    TS_ASSERT_EQUALS(a.isStored("copy"), true);
  }
  
  void testAssign3(){
    Prefix a;
    a.insert("a");
    Prefix b;
    b.insert("b");
    b = a;
    TS_ASSERT_EQUALS(a.getNumNodes(), 2);
    TS_ASSERT_EQUALS(b.getNumNodes(), 2);
  }
};

class PrefixInsert : public CxxTest::TestSuite {
public:
  void testInsert1(){
    Prefix a;
    a.insert("a");
    TS_ASSERT_EQUALS(a.sizeN(), 2);
    TS_ASSERT_EQUALS(a.sizeS(), 1);
  }
  
  void testInsert2(){
    Prefix a;
    a.insert("cat");
    TS_ASSERT_EQUALS(a.sizeN(), 4);
    TS_ASSERT_EQUALS(a.sizeS(), 1);
  }
  
  void testInsert3(){
    Prefix a;
    a.insert("dog");
    a.insert("do");
    TS_ASSERT_EQUALS(a.sizeN(), 4);
    TS_ASSERT_EQUALS(a.sizeS(), 2);
  }
  
  void testInsert4(){
    Prefix a;
    a.insert(",");
    a.insert(" ");
    TS_ASSERT_EQUALS(a.sizeN(), 2);
    TS_ASSERT_EQUALS(a.sizeS(), 1);
  }
  
  void testInsert5(){
    Prefix a;
    a.insert("12");
    a.insert("Ab");
    TS_ASSERT_EQUALS(a.sizeN(), 5);
    TS_ASSERT_EQUALS(a.sizeS(), 2);
  }
  
  void testInsert6(){
    Prefix a;
    a.insert("a");
    a.insert("aa");
    a.insert("aaa");
    TS_ASSERT_EQUALS(a.sizeN(), 4);
    TS_ASSERT_EQUALS(a.sizeS(), 3);
  }
};

class PrefixHeight : public CxxTest::TestSuite {
public:
  void testHeight1(){
    Prefix a;
    TS_ASSERT_EQUALS(a.getHeight(), 0);
  }
  
  void testHeight2(){
    Prefix a;
    a.insert("a");
    TS_ASSERT_EQUALS(a.getHeight(), 1);
  }
  
  void testHeight3(){
    Prefix a;
    a.insert("a");
    a.insert("aa");
    TS_ASSERT_EQUALS(a.getHeight(), 2);
  }
  
  void testHeight4(){
    Prefix a;
    a.insert("a");
    a.insert("b");
    a.insert("c");
    TS_ASSERT_EQUALS(a.getHeight(), 1);
  }
  
  void testHeight5(){
    Prefix a;
    a.insert("123456789");
    TS_ASSERT_EQUALS(a.getHeight(), 9);
  }
  
  void testHeight6(){
    Prefix a;
    a.insert("a");
    a.insert("ab");
    a.insert("bc");
    TS_ASSERT_EQUALS(a.getHeight(), 2);
  }
};

class PrefixNums : public CxxTest::TestSuite {
public:
  void testNodes1(){
    Prefix a;
    TS_ASSERT_EQUALS(a.getNumNodes(), 1);
  }
  
  void testNodes2(){
    Prefix a;
    a.insert("b");
    TS_ASSERT_EQUALS(a.getNumNodes(), 2);
  }
  
  void testNodes3(){
    Prefix a;
    a.insert("a");
    a.insert("b");
    a.insert("ab");
    TS_ASSERT_EQUALS(a.getNumNodes(), 4);
  }
  
  void testWords1(){
    Prefix a;
    TS_ASSERT_EQUALS(a.getNumStored(), 0);
  }
  
  void testWords2(){
    Prefix a;
    a.insert("charizard");
    TS_ASSERT_EQUALS(a.getNumStored(), 1);
  }
  
  void testWords3(){
    Prefix a;
    a.insert("abra");
    a.insert("ab");
    TS_ASSERT_EQUALS(a.getNumStored(), 2);
  }
};

class PrefixStored : public CxxTest::TestSuite {
public:
  void testAllStored1(){
    Prefix a;
    a.insert("cat");
    vector<string> store = a.getAllStored();
    TS_ASSERT_EQUALS(store[0], "cat");
  }
  
  void testAllStored2(){
    Prefix a;
    a.insert("dog");
    a.insert("rabbit");
    a.insert("demon");
    vector<string> store = a.getAllStored();
    TS_ASSERT_EQUALS(store[0], "demon");
    TS_ASSERT_EQUALS(store[1], "dog");
    TS_ASSERT_EQUALS(store[2], "rabbit");
  }
  
  void testAllStored3(){
    Prefix a;
    a.insert("a");
    a.insert("aa");
    a.insert("aaa");
    vector<string> store = a.getAllStored();
    TS_ASSERT_EQUALS(store[0], "a");
    TS_ASSERT_EQUALS(store[1], "aa");
    TS_ASSERT_EQUALS(store[2], "aaa");
  }
  
  void testWPrefix1(){
    Prefix a;
    a.insert("cat");
    vector<string> store = a.getWPrefix("c");
    TS_ASSERT_EQUALS(store[0], "cat");
  }
  
  void testWPrefix2(){
    Prefix a;
    a.insert("this");
    a.insert("that");
    a.insert("these");
    a.insert("those");
    vector<string> store = a.getWPrefix("th");
    TS_ASSERT_EQUALS(store[0], "that");
    TS_ASSERT_EQUALS(store[1], "these");
    TS_ASSERT_EQUALS(store[2], "this");
    TS_ASSERT_EQUALS(store[3], "those");
  }
  
  void testWPrefix3(){
    Prefix a;
    a.insert("dog");
    a.insert("cat");
    vector<string> store = a.getWPrefix("d");
    TS_ASSERT_EQUALS(store[0], "dog");
    TS_ASSERT_EQUALS(store.size(), 1);
  }
  
  void testNumPrefix1(){
    Prefix a;
    int num = a.getNumWPrefix("python");
    TS_ASSERT_EQUALS(num, 0);
  }
  
  void testNumPrefix2(){
    Prefix a;
    a.insert("holy hand grenade");
    int num = a.getNumWPrefix("holy");
    TS_ASSERT_EQUALS(num, 1);
  }
  
  void testNumPrefix3(){
    Prefix a;
    a.insert("Queen");
    a.insert("query");
    a.insert("kiwi");
    int num = a.getNumWPrefix("q");
    TS_ASSERT_EQUALS(num, 2);
  }
  
  
  void testIsStored1(){
    Prefix a;
    TS_ASSERT_EQUALS(a.isStored("a"), false);
  }
  
  
  void testIsStored2(){
    Prefix a;
    a.insert("stock");
    TS_ASSERT_EQUALS(a.isStored("stock"), true);
  }
  
  void testIsStored3(){
    Prefix a;
    a.insert("thats");
    a.insert("no");
    a.insert("ordinary");
    a.insert("rabbit");
    TS_ASSERT_EQUALS(a.isStored("thats"), true);
    TS_ASSERT_EQUALS(a.isStored("no"), true);
    TS_ASSERT_EQUALS(a.isStored("ordinary"), true);
    TS_ASSERT_EQUALS(a.isStored("rabbit"), true);
    TS_ASSERT_EQUALS(a.isStored("run away"), false);
  }
  
  void testIsStored4(){
    Prefix a;
    a.insert("word");
    TS_ASSERT_EQUALS(a.isStored("wor"), false);
  }
  
};






#endif
