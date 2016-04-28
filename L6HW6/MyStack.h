#ifndef MySTACK_H
#define MYSTACK_H

/*
	Stack implementation using a LList.
	Jeremiah Greer
	September 2015
*/
#include <ostream>
#include <stdexcept>

#include "LList.h"

using namespace std;


template <class T>
class MyStack{

// Fill me in!
  public:
  // Constructor
  MyStack(){
    LList<T> cont;
  }
  
  // Destructor
  ~MyStack(){
    cont.clear();
  }
  
  // Copy Constructor
  MyStack(const MyStack& other){
    this->cont = other.cont;
  }
  
  // Assignment Overload
  MyStack<T>& operator= (const MyStack& other){
    cont = other.cont;
  }
  
  // Puts new item on top of stack
  void push(T value){
    cont.push_front(value);
  }
  
  // Returns top element
  T top(){
    if(cont.size() == 0){
      throw logic_error("No stack!");
    }
    return cont.getAt(0);
  }
  
  // Removes top element
  void pop(){
    if(cont.size() != 0){
      cont.remove(0);
    }
  }
  
  // Returns size
  unsigned int size(){
    return cont.size();
  }
  
  // Checks to see if empty
  bool isEmpty(){
    if(cont.size() == 0){
      return true;
    }
    else{
      return false;
    }
  }
  
  private:
  LList<T> cont;
};

#endif
