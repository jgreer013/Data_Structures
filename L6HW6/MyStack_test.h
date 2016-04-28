#ifndef MYSTACK_TEST_H
#define MYSTACK_TEST_H

#include <MyStack.h>

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

// This requires CxxTest to be installed!
// For this CPPVideos example, navigate your terminal to CPPVideos and type:
// git submodule add https://github.com/CxxTest/cxxtest.git
// This will add the public CxxTest repository INSIDE the current repo.
// The current Makefile in this directory assumes cxxtest is a folder one
// level down.

class MyStackTests : public CxxTest::TestSuite {
   
public:
  
		// Insert at least 20 unit tests!
		void testCopy1(){
		  MyStack<int> a;
		  MyStack<int> b(a);
		  TS_ASSERT_EQUALS(b.size(), 0);
		}
		
		void testCopy2(){
		  MyStack<int> a;
		  a.push(3);
		  MyStack<int> b(a);
		  TS_ASSERT_EQUALS(b.top(), 3);
		}
		
		void testCopy3(){
		  MyStack<int> a;
		  a.push(3);
		  a.pop();
		  MyStack<int> b(a);
		  TS_ASSERT_EQUALS(b.size(), 0);
		}
		
		void testAssign1(){
		  MyStack<int> a;
		  a.push(8);
		  MyStack<int> b = a;
		  TS_ASSERT_EQUALS(b.top(), a.top());
		}
		
		void testAssign2(){
		  MyStack<int> a;
		  a.push(7);
		  a.push(10);
		  MyStack<int> b = a;
		  TS_ASSERT_EQUALS(b.size(), a.size());
		}
		
		void testAssign3(){
		  MyStack<int> a;
		  MyStack<int> b = a;
		  TS_ASSERT_EQUALS(b.size(), 0);
		}
		
		void testPush1(){
		  MyStack<int> a;
		  a.push(4);
		  a.push(0);
		  TS_ASSERT_EQUALS(a.top(), 0);
		}
		
		void testPush2(){
		  MyStack<int> a;
		  a.push(-4);
		  TS_ASSERT_EQUALS(a.top(), -4);
		}
		
		void testPush3(){
		  MyStack<int> a;
		  a.push(10);
		  a.pop();
		  a.push(5);
		  TS_ASSERT_EQUALS(a.size(), 1);
		}
		
		void testTop1(){
		  MyStack<int> a;
		  a.push(0);
		  TS_ASSERT_EQUALS(a.top(), 0);
		}
		
		void testTop2(){
		  MyStack<int> a;
		  a.push(-6);
		  a.pop();
		  TS_ASSERT_THROWS_ANYTHING(a.top());
		}
		
		void testTop3(){
		  MyStack<int> a;
		  a.push(111111);
		  a.push(2);
		  TS_ASSERT_EQUALS(a.top(), 2);
		}
		
		void testPop1(){
		  MyStack<int> a;
		  a.push(-7);
		  a.pop();
		  TS_ASSERT_EQUALS(a.size(), 0);
		}
		
		void testPop2(){
		  MyStack<int> a;
		  a.pop();
		  TS_ASSERT_EQUALS(a.size(), 0);
		}
		
		void testPop3(){
		  MyStack<int> a;
		  a.push(-4);
		  a.push(23);
		  a.pop();
		  TS_ASSERT_EQUALS(a.top(), -4);
		}
		
		void testSize1(){
		  MyStack<int> a;
		  a.push(1);
		  TS_ASSERT_EQUALS(a.size(), 1);
		}
		
		void testSize2(){
		  MyStack<int> a;
		  a.push(-4);
		  a.push(6);
		  TS_ASSERT_EQUALS(a.size(), 2);
		}
		
		void testSize3(){
		  MyStack<int> a;
		  a.push(-4);
		  a.pop();
		  a.push(2);
		  a.pop();
		  TS_ASSERT_EQUALS(a.size(), 0);
		}
		
		void testEmpty1(){
		  MyStack<int> a;
		  a.push(48);
		  a.pop();
		  TS_ASSERT(a.isEmpty() == true);
		}
		
		void testEmpty2(){
		  MyStack<int> a;
		  TS_ASSERT(a.isEmpty() == true);
		}
		
		void testEmpty3(){
		  MyStack<int> a;
		  a.push(30);
		  TS_ASSERT(a.isEmpty() == false);
		}
	
};


#endif
