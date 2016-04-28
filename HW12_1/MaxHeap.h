#ifndef MAXHEAP_H
#define MAXHEAP_H 
/*    file MaxHeap.h    
      author Frazier Baker
      date November 2015

      @description Implements a templated maximum queue, using a
      heap structure.
*/
#include <vector>
#include <iostream>
#include <stdexcept>

using namespace std;

template <class T> 
class MaxHeap {
friend class MaxHeapTest;
public: 

MaxHeap(){ 
  vector<T> stuff = vector<T>(0); //initialize stuff vector
}

void push(T value){
  // adds to max heap
  stuff.push_back(value);
  int parent = stuff.size()-1;
  while(parent){
    int me = parent;
    parent = indexParent(me);
    if(stuff[me] > stuff[parent]){ //swap
      T tmp = stuff[parent];
      stuff[parent] = stuff[me];
      stuff[me] = tmp;
    }
  }
}

void pop(){
  // removes the top element from max heap
  if(!size()){
    return;
  }
  stuff[0] = stuff[stuff.size()-1];
  stuff.pop_back();
  int me = 0;
  while(indexChildL(me) < size()){
    int child = indexChildL(me);
    if(indexChildR(me) < size()){
      if(stuff[child] < stuff[indexChildR(me)]){
        child = indexChildR(me);
      }
    }
    if(stuff[me] < stuff[child]){
      T tmp = stuff[me];
      stuff[me] = stuff[child];
      stuff[child] = tmp;
      me = child;
    }else{
      break;
    }
  }
}

T top(){
  // returns maximum value from heap
  if(size()){
    return stuff[0];
  }else{
    throw logic_error("Empty heap is topless.");
  }
}

unsigned int size(){
  // returns size of heap
  return stuff.size();
}

private:
vector<T> stuff;

int indexChildL(int i){
  //returns child index for first value
  return i*2+1;
}

int indexChildR(int i){
  //returns child index for first value
  return i*2+2;
}

int indexParent(int i){
  //returns parent index
  if(i <= 0){
    throw logic_error("Root has no parent");
  }else{
    return (i-1)/2;
  }
}
};


#endif
