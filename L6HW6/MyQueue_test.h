#ifndef MYQUEUE_TEST_H
#define MYQUEUE_TEST_H

#include <MyQueue.h>

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

// This requires CxxTest to be installed!
// For this CPPVideos example, navigate your terminal to CPPVideos and type:
// git submodule add https://github.com/CxxTest/cxxtest.git
// This will add the public CxxTest repository INSIDE the current repo.
// The current Makefile in this directory assumes cxxtest is a folder one
// level down.

class MyQueueTests : public CxxTest::TestSuite {
   
public:
  
  
// Insert at least 20 unit tests
  void testCopy1(){
		  MyQueue<int> a;
		  MyQueue<int> b(a);
		  TS_ASSERT_EQUALS(b.size(), a.size());
		}
		
		void testCopy2(){
		  MyQueue<int> a;
		  a.enqueue(7);
		  MyQueue<int> b(a);
		  TS_ASSERT_EQUALS(b.front(), 7);
		}
		
		void testCopy3(){
		  MyQueue<int> a;
		  a.enqueue(3);
		  a.dequeue();
		  MyQueue<int> b(a);
		  TS_ASSERT_EQUALS(b.size(), 0);
		}
		
		void testAssign1(){
		  MyQueue<int> a;
		  a.enqueue(8);
		  MyQueue<int> b = a;
		  TS_ASSERT_EQUALS(b.front(), a.front());
		}
		
		void testAssign2(){
		  MyQueue<int> a;
		  a.enqueue(7);
		  a.enqueue(10);
		  MyQueue<int> b = a;
		  TS_ASSERT_EQUALS(b.size(), a.size());
		}
		
		void testAssign3(){
		  MyQueue<int> a;
		  MyQueue<int> b = a;
		  TS_ASSERT_EQUALS(b.size(), 0);
		}
		
		void testEnqueue1(){
		  MyQueue<int> a;
		  a.enqueue(4);
		  a.enqueue(3);
		  TS_ASSERT_EQUALS(a.front(), 4);
		}
		
		void testEnqueue2(){
		  MyQueue<int> a;
		  a.enqueue(86);
		  TS_ASSERT_EQUALS(a.front(), 86);
		}
		
		void testEnqueue3(){
		  MyQueue<int> a;
		  a.enqueue(17);
		  a.dequeue();
		  a.enqueue(54);
		  TS_ASSERT_EQUALS(a.size(), 1);
		}
		
		void testFront1(){
		  MyQueue<int> a;
		  a.enqueue(0);
		  TS_ASSERT_EQUALS(a.front(), 0);
		}
		
		void testFront2(){
		  MyQueue<int> a;
		  a.enqueue(7);
		  a.dequeue();
		  TS_ASSERT_THROWS_ANYTHING(a.front());
		}
		
		void testFront3(){
		  MyQueue<int> a;
		  a.enqueue(12);
		  a.enqueue(2);
		  TS_ASSERT_EQUALS(a.front(), 12);
		}
		
		void testDequeue1(){
		  MyQueue<int> a;
		  a.enqueue(27);
		  a.dequeue();
		  TS_ASSERT_EQUALS(a.size(), 0);
		}
		
		void testDequeue2(){
		  MyQueue<int> a;
		  a.dequeue();
		  TS_ASSERT_EQUALS(a.size(), 0);
		}
		
		void testDequeue3(){
		  MyQueue<int> a;
		  a.enqueue(51);
		  a.enqueue(95);
		  a.dequeue();
		  TS_ASSERT_EQUALS(a.front(), 95);
		}
		
		void testSize1(){
		  MyQueue<int> a;
		  a.enqueue(-4);
		  TS_ASSERT_EQUALS(a.size(), 1);
		}
		
		void testSize2(){
		  MyQueue<int> a;
		  a.enqueue(45);
		  a.enqueue(9);
		  TS_ASSERT_EQUALS(a.size(), 2);
		}
		
		void testSize3(){
		  MyQueue<int> a;
		  a.enqueue(0);
		  a.dequeue();
		  a.enqueue(-60);
		  a.dequeue();
		  TS_ASSERT_EQUALS(a.size(), 0);
		}
		
		void testEmpty1(){
		  MyQueue<int> a;
		  a.enqueue(32);
		  a.dequeue();
		  TS_ASSERT(a.isEmpty() == true);
		}
		
		void testEmpty2(){
		  MyQueue<int> a;
		  TS_ASSERT(a.isEmpty() == true);
		}
		
		void testEmpty3(){
		  MyQueue<int> a;
		  a.enqueue(67);
		  TS_ASSERT(a.isEmpty() == false);
		}
  
};


#endif
