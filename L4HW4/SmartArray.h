#ifndef SMARTARRAY_H
#define SMARTARRAY_H
/*
	A smart array that can resize up to 1000 elements.
	Jeremiah Greer
	September 2015
*/

#include <string>
#include <ostream>
#include <stdexcept>

using namespace std;

unsigned int SMART_ARRAY_CAPACITY = 1000;

// Fill in your SmartArray class here!
template <class T>
class SmartArray{

  public:
  // Constructor
  SmartArray(){
    container = new T[SMART_ARRAY_CAPACITY];
    members = 0;
  };
  
  // Constructor - fill SmartArray with i things
  SmartArray(unsigned int i, const T& thing){
    container = new T[SMART_ARRAY_CAPACITY];
    members = 0;
    for (unsigned int j = 0; j < i; j++) {
      container[j] = thing;
      members++;
    }
  };
  
  // Destructor
  ~SmartArray(){
    delete[] container;
  };
  
  // Add member to SmartArray
  void push_back(const T& thing){
    if (members == SMART_ARRAY_CAPACITY){
      throw exception();
    }
    container[members] = thing;
    members++;
  };
  
  // Return number of used elements
  unsigned int size() const{
    return members;
  };
  
  // Return last element
  T back() const{
    if (members == 0){
      throw logic_error("Your element is in another container!");
    }
    return container[members-1];
  };
  
  // Remove last element
  void pop_back(){
    if (members == 0){
      throw logic_error("Your element is in another container!");
    }
    members--;
  };
  
  // HOMEWORK
  // Return element at i, handle negative indices and outside bounds
  T at(int i) const{
    if (i < 0) {
      i += members;
    }
    if (i >= members){
      throw logic_error("Went beyond SmartArray Indices");
    }
    return container[i];
  };
  
  // Same as at
  T operator[](int i) const{
    if (i < 0) {
      i += members;
    }
    if (i >= members){
      throw logic_error("Went beyond SmartArray Indices");
    }
    return container[i];
  };
  
  // Remove all elements in SmartArray
  void clear(){
    members = 0;
  };
  
  // Append two arrays together
  SmartArray operator+(const SmartArray& right){
    SmartArray<T> fin;
    if (members + right.members > 1000){
      throw exception();
    }
    for (unsigned int i = 0; i < members; i++){
      fin.push_back(container[i]);
    }
    for (unsigned int i = 0; i < right.members; i++){
      fin.push_back(right.container[i]);
    }
    return fin;
  };
  
  // Return new SmartArray in reverse order
  SmartArray reverse(){
    SmartArray<T> fin;
    for (int i = members-1; i >= 0; i--){
      fin.push_back(container[i]);
    }
    return fin;
  };
  
  // Same length, same values, same order
  bool operator==(const SmartArray& right){
    if (members != right.size()) {
      return false;
    }
    for (unsigned int i = 0; i < right.size(); i++){
      if (container[i] != right.container[i]){
        return false;
      }
    }
    return true;
  };
  
  // Opposite of ==
  bool operator!=(const SmartArray& right){
    if (members != right.size()) {
      return true;
    }
    for (unsigned int i = 0; i < right.size(); i++){
      if (container[i] != right.container[i]){
        return true;
      }
    }
    return false;
  };
  
  // Copy Constructor
  SmartArray(const SmartArray& right){
    members = right.members;
    container = new T[SMART_ARRAY_CAPACITY];
    for (unsigned int i = 0; i < right.members; i++){
      container[i] = right.container[i];
    }
  };
  
  // Overload =
  SmartArray operator=(const SmartArray& right){
    if (this == &right){
      return *this;
    }
    members = right.members;
    for (unsigned int i = 0; i < right.members; i++){
      container[i] = right.container[i];
    }
    return *this;
  };
  
  
  private:
  
  T* container;
  unsigned int members;
};

// [0, 1, 2, 3]
template <class T>
ostream& operator<<(ostream& out, const SmartArray<T>& thing){
  out << "[";
  for (unsigned int i = 0; i < thing.size(); i++) {
    out << thing.at(i);
    if (i != thing.size()-1) {
      out << ", ";
    }
  }
  out << "]";
  return out;
};



#endif
