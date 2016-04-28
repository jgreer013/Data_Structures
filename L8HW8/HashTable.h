#ifndef HASHTABLE_H
#define HASHTABLE_H

/*
	String Hash Table class.
	Uses open addressing - linear probing.
	Jeremiah Greer
	October 2015
*/
#include <ostream>
#include <stdexcept>

using namespace std;

template <class T>
struct node_t {
  T value;
  int state;
};

//Use max_size value as a flag for deletion
template <class T>
class HashTable{

  public:
  // Constructor
  HashTable( unsigned int (*f)(const T&), unsigned int capacity){
    hashfn = f;
    // Keep filling me in!
    max_size = capacity;
    table = new node_t<T>[max_size];
    for(unsigned int i = 0; i < max_size; i++){
      table[i].state = 0;
      //table[i].value = 0;
    }
    num_of_ents = 0;
    }

  // Destructor
  ~HashTable() {
    // TODO
    delete[] table;
    num_of_ents = 0;
    max_size = 0;
  }

  // Copy constructor
  HashTable(const HashTable& other){
    // TODO
    hashfn = other.hashfn;
    this->max_size = other.max_size;
    this->table = new node_t<T>[max_size];
    for(unsigned int i = 0; i < max_size; i++){
      this->table[i].value = other.table[i].value;
      this->table[i].state = other.table[i].state;
    }
    this->num_of_ents = other.num_of_ents;
  }
	
	// Assignment operator
  HashTable<T>& operator= (const HashTable& other){  
		// TODO
		if(this == &other){
		  return *this;
		}
		hashfn = other.hashfn;
		delete[] this->table;
		this->table = new node_t<T>[other.max_size];
		this->max_size = other.max_size;
    for(unsigned int i = 0; i < max_size; i++){
      this->table[i].value = other.table[i].value;
      this->table[i].state = other.table[i].state;
    }
    this->num_of_ents = other.num_of_ents;
    return *this;
	}
     
  // Checks to see if thing is in table
  bool find(T thing) const{
		// TODO
		unsigned int index = (*hashfn)(thing) % max_size;
		unsigned int orig = index;
		node_t<T> hsh = table[index];
		while(hsh.state != 0){
		  if(hsh.value == thing && hsh.state == 1){
		    return true;
		  }
		  index = (index + 1) % max_size;
		  if(index == orig){
		    return false;
		  }
		  hsh = table[index];
		}
    return false;
  }

  // Returns number of entities in table
  unsigned int size() const{
    // TODO
    return num_of_ents;
  }
  
  // Returns maximum size
  unsigned int capacity() const{
    // TODO
    return max_size;
  }
  
  // Checks to see if table is full
  bool isFull() const{
    // TODO
    if (num_of_ents == max_size){
      return true;
    }
    else{
      return false;
    }
  }
 
  // Inserts a new element into the table
  void insert(T thing){
    // TODO
    // Demo of hash function
    if(this->isFull() == true){
      throw logic_error("Table is full.");
    }
    if(this->find(thing) == true){
      return;
    }
    unsigned int index = (*hashfn)(thing) % max_size;
    node_t<T> hsh = table[index];
    if(hsh.state != 1){
      table[index].value = thing;
      table[index].state = 1;
	    num_of_ents++;
	    return;
    }
		while(hsh.state == 1){
		  index = (index + 1) % max_size;
		  hsh = table[index];
		  if(hsh.state != 1){
		    table[index].value = thing;
		    table[index].state = 1;
		    num_of_ents++;
		    return;
		  }
		}
  }
  
  // Removes thing from table
  void remove(T thing){
    // TODO
    unsigned int index = (*hashfn)(thing) % max_size;
    unsigned int orig = index;
    node_t<T> hsh = table[index];
    while(hsh.state != 0){
      if(hsh.value == thing && hsh.state != 2){
        //table[index].value = 0;
        table[index].state = 2;
        num_of_ents--;
        return;
      }
      index = (index + 1) % max_size;
      if(index == orig){
		    return;
		  }
      hsh = table[index];
    }
  }
  
  
	// Removes elements from table
	void clear(){
		// TODO
		for(unsigned int i = 0; i < max_size; i++){
		  //table[i].value = 0;
		  table[i].state = 0;
		}
    num_of_ents = 0;
	}
	
 
  
  private:
  // TODO
  // This will store the hash function that was passed in.
  unsigned int (*hashfn)(const T& thing);
  unsigned int num_of_ents;
  unsigned int max_size;
  node_t<T>* table;
};

#endif
