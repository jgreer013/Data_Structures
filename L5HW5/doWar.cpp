#include <iostream>

/*
  The file implements main to simulate 100000 games of war.  It should print out
  a histogram of the game lengths from 0 to 1000 rounds (ok to have less detail)
  as well as the average game length.
  Jeremiah Greer
  9/23/15
  Lab5/HW5
*/

#include "deck.h"
#include "war.h"

using namespace std;

int main(){
  // Fill in code here!
  int a = runWar(1);
  return 0;
  srand (time(NULL));
  int length[1000];
  float avg = 0.0;
  for (unsigned int i = 0; i < 1000; i++) {
    length[i] = runWar(1000);
    avg += length[i];
  }
  avg = avg/1000;
  int buckets[50] = {0};
  for (unsigned int i = 0; i < 1000; i++) {
    int index = 0;
    if (length[i]/20 == 50) {
      index = 49;
    }
    else if (length[i]/20-1 < 0) {
      index = 0;
    }
    else {
      index = length[i]/20-1;
    }
    buckets[index] += 1;
  }
  
  for (unsigned int i = 0; i < 50; i++) {
    int k = 0;
    if (i == 49) {
      k = 1;
    }
    cout << i*20 << "-" << (i*20)+19+k << ": " << buckets[i] << ":\t";
    string stars = "";
    for (int j = 0; j < buckets[i]; j++) {
      stars += "*";
    }
    cout << stars << endl;
  }
  cout << "Average number of rounds: " << avg << endl;
  return 0;
}
