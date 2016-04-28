#ifndef SORT_H
#define SORT_H
/*
 * MySort.h
 * Name: Baker, Frazier N & Greer, Jeremiah
 *
 * November 2015
 */

#include <vector>
#include <string.h> 
#include <iostream>
#include <algorithm>
#include "MaxHeap.h"


using namespace std;

// Bubble Sort
void bubbleSort(vector<int>& data){
  bool swapped = true;
  while(swapped){
    swapped = false;
    for(unsigned int i = 1; i < data.size(); i++){
      if(data[i] < data[i-1]){
        int tmp = data[i];
        data[i] = data[i-1];
        data[i-1] = tmp;
        swapped = true;
      }
    }
  }
}

// Merge operation
vector<int> reMerge(vector<int>& a, vector<int>& b){
  unsigned int s1 = a.size();
  unsigned int s2 = b.size();
  vector<int> fin;
  unsigned int count1 = 0;
  unsigned int count2 = 0;
  while(fin.size() < s1+s2){
    if(count1 >= s1 && count2 >= s2){
      break;
    }else if(count1 >= s1){
      fin.push_back(b[count2]);
      count2++;
    }else if(count2 >= s2){
      fin.push_back(a[count1]);
      count1++;
    }else{
      if(a[count1] > b[count2]){
        fin.push_back(b[count2]);
        count2++;
      }else{
        fin.push_back(a[count1]);
        count1++;
      }
    }
  }
  return fin;
};

// Recursive Merge
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
  fin = reMerge(a2, b);
  a = fin;
  return;
};

// Quickly gets written compared to mergeSort
void quickRec(vector<int>& a){
  if(a.size() == 1 || a.size() == 0){
    return;
  }
  int pivot = pivot(a);
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

int pivot(vector<int>& a){
  int beg = a[0];
  int mid = a[a.size()/2];
  int end = a[a.size()-1];
  int ret = 0;
  if((beg > mid && beg < end) || (beg < mid && beg > end)){
    ret = 0;
  }else if((mid > beg && mid < end) || (mid < beg && mid > end)){
    ret = a.size()/2;
  }else if((end > mid && end < beg) || (end < mid && end > beg)){
    ret = a.size()-1;
  }else if(mid == end){
    ret = a.size()/2;
  }
  return ret;
};

/*
void quick(vector<int>& a, int piv, int low, int high){
  int pivot = a[piv];
  int end = high;
  int beg = low;
  int pt = 0;
  for(unsigned int i = 0; i < (high - low + 1); i++){
    if(a[pt] < pivot){
      if(pt > piv){
        int temp = a[pt];
        a[pt] = a[beg];
        a[beg] = temp;
        if(beg == piv){
          piv++;
        }
        beg++;
        pt++;
      }else{
        pt++;
      }
    }else{
      if(pt > piv){
        pt++;
      }else{
        int temp = a[end];
        a[end] = a[pt];
        a[pt] = temp;
        if(end == piv){
          piv--;
        }
        end--;
      }
    } 
  }
  quick(
}
*/

//Calls recursive merge
void mergeSort(vector<int>& data){
  mergeRec(data);
  return;
};

// Calls Recursive Quick
void quickSort(vector<int>& data){
  quickRec(data);
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
}

// Merge + Bubble
void mergeSort2(vector<int>& data){
  //adds optimization limit
  const unsigned int LIMIT = 5;
  if(data.size() < LIMIT){
    bubbleSort(data);
  }else{
    mergeSort(data);
  }
}

// Sorts using max heap
void heapSort(vector<int>& data){
  MaxHeap<int> heap = MaxHeap<int>();
  for(unsigned int i=0; i < data.size(); i++){
    heap.push(data[i]);
  }
  for(unsigned int i=0; i < data.size(); i++){
    data[i] = heap.top();
    heap.pop();
  }
  reverse(data.begin(),data.end());
}

// Counting Sort
void nonCompareSort(vector<int>& data){
  if(data.size() <= 1){
    return;
  }
  
  int max = data[0];
  int min = data[0];
  for(unsigned int i=0; i < data.size(); i++){
    if(data[i] > max){
      max = data[i];
    }
    if(data[i] < min){
      min = data[i];
    }
  }
  max++;
  vector<int> counts = vector<int>(max);
  for(unsigned int i=0; i < data.size(); i++){
    counts[data[i]]++;
  }
  vector<int> *retval = new vector<int>(0);
  for(unsigned int i=0; i < counts.size(); i++){
    for(int j=0; j < counts[i]; j++){
      retval->push_back(i);
    }
  }
  data = *retval;
  delete retval;
  retval = NULL;
}

#endif
