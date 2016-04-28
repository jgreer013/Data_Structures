/*
	Binary Search Tree Sandbox
	Paul Talaga
	October 2015
*/

#include <string>
#include <iostream>

#include "BST.h"

using namespace std;

// Returns a negative number if right is greater than right, 0 if equal
// and a positive number if left is greater than right.
int compare(const int& left, const int& right){
  return left - right;
}

int compare(const string& left, const string& right){
  // The string class has a built-in compare function!
  return left.compare(right);
}


int main(int argc, char* argv[]){
  BST<int> a(compare);
  a.insert(5);
  a.insert(2);
  a.insert(15);
  cout << a.getInOrder() << endl;
  cout << a.getPreOrder() << endl;
  cout << a.getPostOrder() << endl;
  cout << "size: " << a.size() << endl;
  cout << "Found 2: " << a.find(2) << endl;
  cout << "Found 15: " << a.find(15) << endl;
  cout << "Found 5: " << a.find(5) << endl;
  cout << "Not Found 1: " << a.find(1) << endl;
  cout << "Smallest: " << a.getSmallest() << endl;
  cout << "Largest: " << a.getLargest() << endl;
  BST<int> b(a);
  a.clear();
  cout << "Not Found 2: " << a.find(2) << endl;
  cout << "Not Found 15: " << a.find(15) << endl;
  cout << "Not Found 5: " << a.find(5) << endl;
  cout << "B:" << endl;
  cout << b.getInOrder() << endl;
  cout << b.getPreOrder() << endl;
  cout << b.getPostOrder() << endl;
  cout << "size: " << b.size() << endl;
  cout << "Found 2: " << b.find(2) << endl;
  cout << "Found 15: " << b.find(15) << endl;
  cout << "Found 5: " << b.find(5) << endl;
  cout << "Not Found 1: " << b.find(1) << endl;
  cout << "Smallest: " << b.getSmallest() << endl;
  cout << "Largest: " << b.getLargest() << endl;
  b = a;
  cout << "Not Found 2: " << b.find(2) << endl;
  cout << "Not Found 15: " << b.find(15) << endl;
  cout << "Not Found 5: " << b.find(5) << endl;
}
