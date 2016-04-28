/*
	Sort Speed
	Jeremiah Greer
	Frazier Baker
	November 2015
*/

#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "unistd.h"


#include "MySort.h"

using namespace std;


int main(int argc, char* argv[]){
  // TODO:
  for(unsigned int length = 1; length < 2000; length = length+2){
    srand(time(NULL));
    vector<int> rand_vec(length);
    for(unsigned int i = 0; i < length; i++){
      int val = rand() % 700001;
      rand_vec.push_back(val);
    }
    cout << length << '\t';
    vector<int> copy = rand_vec;
    
    clock_t pre_time = clock();
    selectionSort(copy);
    cout << (double)(clock()-pre_time) / CLOCKS_PER_SEC * 1000 << '\t';
    copy = rand_vec;
    
    pre_time = clock();
    bubbleSort(copy);
    cout << (double)(clock()-pre_time) / CLOCKS_PER_SEC * 1000 << '\t';
    copy = rand_vec;
    
    pre_time = clock();
    mergeSort(copy);
    cout << (double)(clock()-pre_time) / CLOCKS_PER_SEC * 1000 << '\t';
    copy = rand_vec;
    
    pre_time = clock();
    mergeSort2(copy);
    cout << (double)(clock()-pre_time) / CLOCKS_PER_SEC * 1000 << '\t';
    copy = rand_vec;
    
    pre_time = clock();
    quickSort(copy);
    cout << (double)(clock()-pre_time) / CLOCKS_PER_SEC * 1000 << '\t';
    copy = rand_vec;
    
    pre_time = clock();
    heapSort(copy);
    cout << (double)(clock()-pre_time) / CLOCKS_PER_SEC * 1000 << '\t';
    copy = rand_vec;
    
    pre_time = clock();
    nonCompareSort(copy);
    cout << (double)(clock()-pre_time) / CLOCKS_PER_SEC * 1000 << endl;
  }
  return 0;
}
