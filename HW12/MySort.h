#ifndef SORT_H
#define SORT_H
/*
 * Sort.h
 * Jeremiah Greer
 * Frazier Baker
 * November 2015
 */

#include <vector>
#include <string.h> 
#include <iostream>
#include <algorithm>

//#include "MaxHeap.h"


using namespace std;

// Merges the amount of time it takes to write other sorting functions together
void mergeRec(vector<int>& a){
  if(a.size() <= 1){
    return;
  }
  int mid = a.size()/2;
  vector<int> a2;
  a2.insert(a2.end(), a.begin(), a.begin()+mid);
  vector<int> b;
  b.insert(b.end(), a.begin()+mid, a.end());
  mergeRec(a2);
  mergeRec(b);
  vector<int> fin;
  if(a2[0] < b[0]){
    fin.insert(fin.end(), a2.begin(), a2.end());
    fin.insert(fin.end(), b.begin(), b.end());
  }else{
    fin.insert(fin.end(), b.begin(), b.end());
    fin.insert(fin.end(), a2.begin(), a2.end());
  }
  a = fin;
  return;
};

// Quickly gets written compared to mergeSort
void quickRec(vector<int>& a){
  if(a.size() == 1 || a.size() == 0){
    return;
  }
  int pivot = a.size()/2;
  vector<int> left;
  vector<int> right;
  vector<int> fin;
  for(unsigned int i = 0; i < a.size(); i++){
    if(a[i] < a[pivot]){
      left.push_back(a[i]);
    }else if(a[i] > a[pivot]){
      right.push_back(a[i]);
    }else{
      if(rand() % 2 == 0){
        left.push_back(a[i]);
      }else{
        right.push_back(a[i]);
      }
    }
  }
  quickRec(left);
  quickRec(right);
  fin.insert(fin.end(), left.begin(), left.end());
  fin.insert(fin.end(), right.begin(), right.end());
  a = fin;
  return;
};

// Selects the next smallest value and places it at the next location
void selectionSort(vector<int>& data){
  for(unsigned int i = 0; i < data.size(); i++){
    int small_fry = i;
    for(unsigned int j = i; j < data.size(); j++){
      if(data[j] < data[small_fry]){
        small_fry = j;
      }
    }
    int temp = data[i];
    data[i] = data[small_fry];
    data[small_fry] = temp;
  }
};

void bubbleSort(vector<int>& data){

};

// Calls Recursive Merge
void mergeSort(vector<int>& data){
  mergeRec(data);
  return;
};

void mergeSort2(vector<int>& data){

};

// Calls Recursive Quick
void quickSort(vector<int>& data){
  quickRec(data);
  return;
};

void heapSort(vector<int>& data){

};

void nonCompareSort(vector<int>& data){

};


#endif
