#ifndef MAXHEAP_H
#define MAXHEAP_H 
/*    file MaxHeap.h    
      Jeremiah Greer
      11/17/2015

      @description Implements a templated maximum queue, using a
      heap structure.
*/
#include <vector>
#include <iostream>
#include <stdexcept>

using namespace std;

template <class T> 
class MaxHeap {
public: 

// Constructor
MaxHeap(){ 
  // TODO: Fill me in
  end = 0;
}

// Adds the value to the heap
void push(T value){
  // TODO: Fill me in
  if(tree.size() > end){
    tree[end] = value;
    end++;
  }else{
    tree.push_back(value);
    end++;
  }
  if(this->isMaxed() != true){
    sort(end-1);
  }
}

// removes the largest element
void pop(){
  // TODO: Fill me in
  if(end > 0){
    tree[0] = tree[end-1];
    sortDown(0);
  }
}

// Fixes the heap to bring the largest element to the end of the vector
void sortDown(int index){
  if(2*index+1 >= end || 2*index+2 == end){
    tree.pop_back();
    end--;
    return;
  }
  if(tree[index] > tree[2*index+1] && tree[index] > tree[2*index+2]){
    tree.pop_back();
    end--;
    return;
  }
  if(tree[2*index+1] >= tree[2*index+2]){
    T temp = tree[index];
    tree[index] = tree[2*index+1];
    tree[2*index+1] = temp;
    sortDown(2*index+1);
  }else{
    T temp = tree[index];
    tree[index] = tree[2*index+2];
    tree[2*index+2] = temp;
    sortDown(2*index+2);
  }
}

// Returns the maximum element of the heap
T top(){
  // TODO: Fill me in
  if(end == 0){
    throw logic_error("There is no tree");
  }
  return tree[0];
}

// Returns the size of the heap
unsigned int size(){
  // TODO: Fill me in
  return end;
}

private:
// TODO: Fill me in
vector<T> tree;
int end;

// Checks to see if tree is ordered correctly/heaped
bool isMaxed(){
  for(unsigned int i = 1; i < end; i++){
    if(tree[(i-1)/2] < tree[i]){
      return false;
    }
  }
  return true;
}

// Sorts the values in the heap to be maxed
void sort(int index){
  if(tree[(index-1)/2] < tree[index]){
    T temp = tree[index];
    tree[index] = tree[(index-1)/2];
    tree[(index-1)/2] = temp;
  }
  if(this->isMaxed() != true){
    sort((index-1)/2);
  }
} 

};

#endif
