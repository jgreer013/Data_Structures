#ifndef MYQUEUE_H
#define MYQUEUE_H

/*
	Queue implementation using a LList.
	Jeremiah Greer
	September 2015
*/
#include <ostream>
#include <stdexcept>

#include "LList.h"

using namespace std;


template <class T>
class MyQueue{

// Fill me in!
  public:
  // Constructor
  MyQueue(){
    LList<T> cont;
  }
  
  // Destructor
  ~MyQueue(){
    cont.clear();
  }
  
  // Copy Constructor
  MyQueue(const MyQueue& other){
    this->cont = other.cont;
  }
  
  // Assignment Overload
  MyQueue<T>& operator= (const MyQueue& other){
    cont = other.cont;
  }
  
  // Place value at end of queue
  void enqueue(T value){
    cont.push_back(value);
  }
  
  // Remove front of queue
  void dequeue(){
    if(cont.size() != 0){
      cont.remove(0);
    }
  }
  
  // Return front of queue
  T front(){
    if(cont.size() == 0){
      throw logic_error("No queue!");
    }
    return cont.getAt(0);
  }
  
  // Return size
  unsigned int size(){
    return cont.size();
  }
  
  // Check to see if queue is empty
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
