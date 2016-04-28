#ifndef LLIST_H
#define LLIST_H

/*
	Templated Linked List class.
  Jeremiah Greer
	September 2015
*/
#include <ostream>
#include <stdexcept>

using namespace std;

// This is a templated struct.  You don't need to change this.
template <class T>
struct node_t {
  T value;
  node_t<T>* next;
};


// Change this class!
template <class T>
class LList{

  public:
  // Constructor
  LList(){
    head = NULL;
    num_of_ents = 0;
  }
  
  // Destructor
  ~LList(){
    node_t<T>* temp = this->head;
	  while(temp){
	    node_t<T>* del = temp;
	    temp = temp->next;
	    delete del;
	  }
	  head = NULL;
	  num_of_ents = 0;
  }
	
	// Copy Constructor
  LList(const LList& other){
    this->head = NULL;
    num_of_ents = 0;
    node_t<T>* temp = other.head;
    while(temp){
      this->push_back(temp->value);
      temp = temp->next;
    }
  }
	
	// Assignment overload
  LList<T>& operator= (const LList& other){
    if (this == &other){
      return *this;
    }
    this->clear();
    node_t<T>* temp = other.head;
    while(temp){
      this->push_back(temp->value);
      temp = temp->next;
    }
    return *this;
  }
  
  // Handle negative indices
  unsigned int buildIndex(int num, unsigned int size) const{
    if(num < 0){
      int sz = size;
      return (unsigned int)(sz+num);
    }
    else{
      return (unsigned int)num;
    }
  }
     
  // Get at position
  T getAt(int pos) const{
    unsigned int true_pos = buildIndex(pos, num_of_ents);
    if(true_pos >= num_of_ents){
	    throw logic_error("Invalid index!\n");
	  }
	  if(num_of_ents == 0){
	    throw logic_error("Invalid index!\n");
	  }
    node_t<T>* temp = head;
	  unsigned int count = 0;
	  while(temp && count != true_pos){
	    temp = temp->next;
	    count++;
	  }
	  return temp->value;
  }

  // Return number of entities in LList
  unsigned int size() const{return num_of_ents;}
 
  // Push to back of LList
  void push_back(T value){
    node_t<T>* temp = this->head;
    if(temp == NULL){
      push_front(value);
      return;
    }
	  while(temp->next){
	    temp = temp->next;
	  }
	  node_t<T>* added = new node_t<T>;
	  temp->next = added;
	  added->next = NULL;
	  added->value = value;
	  num_of_ents++;
  }
  
  // Push to front of LList
  void push_front(T value){
    node_t<T>* point = new node_t<T>;
    point->next = head;
    point->value = value;
    head = point;
    num_of_ents++;
  }
	
	// Change the value at pos (NOT INSERT)
	void setAt(T value, int pos){
	  unsigned int true_pos = buildIndex(pos, num_of_ents);
	  if(true_pos >= num_of_ents){
	    throw logic_error("Invalid index!\n");
	  }
	  node_t<T>* temp = head;
	  unsigned int count = 0;
	  while(count != true_pos){
	    temp = temp->next;
	    count++;
	  }
	  temp->value = value;
	}
	
	// Remove node at pos
	
	void remove(int pos){
	  unsigned int true_pos = buildIndex(pos, num_of_ents);
	  if(true_pos >= num_of_ents){
	    throw logic_error("Invalid index!\n");
	  }
	  node_t<T>* temp = head;
	  if(true_pos == 0){
	    node_t<T>* first = head;
	    head = head->next;
	    delete first;
	    num_of_ents--;
	    return;
	  }
	  while(temp && true_pos > 1){
	    true_pos--;
	    temp = temp->next;
	  }
	  if(!temp){
	    throw logic_error("Invalid index!\n");
	  }
	  node_t<T>* skip = temp->next;
	  temp->next = temp->next->next;
	  delete skip;
	  num_of_ents--;
	}
	
	/*
	void remove(int pos){
    if(head==NULL){
      throw logic_error("Your list is empty");
    }
    
    if(pos == 0){
      node_t<T>* to_delete = head;
      head = head->next;
      delete to_delete;
      num_of_ents--;
      return;
    }
    
    if (pos>0 ){
      if(pos>size()-1){
        throw logic_error("Your index is out of bounds");
      }
      node_t<T>* temp = head;
      while(temp && pos > 1){
        temp = temp->next;
        pos--;
      } // temp is the one before we want to delete
      node_t<T>* to_delete = temp->next;
      temp->next = temp->next->next;
      delete to_delete;
      num_of_ents--;
    }
    
    if(pos<0){
      if(abs(pos)>size()){
        throw logic_error("Your index is out of bounds");
      }
      if((size()+pos)==0){
        node_t<T>* to_delete=head;
        head=head->next;
        delete to_delete;
        num_of_ents--;
        return;
      }
      node_t<T>* temp = head;
      int stop=size()+pos;
      while(temp && stop>1){
        temp=temp->next;
        stop--;
      }
      node_t<T>* to_delete = temp->next;
      delete to_delete;
      num_of_ents--;
      if(!temp->next->next){
        temp->next=NULL;
        return;
      }
      temp->next=temp->next->next;
      //delete to_delete;
    }
  }
  */
	
	// Return reversed LList
	LList<T> reverse() const{ 
	  LList<T> rev;
	  node_t<T>* temp = this->head;
	  while(temp){
	    rev.push_front(temp->value);
	    temp = temp->next;
	  }
	  return rev;
	}
	
	// + overlaod
	LList<T> operator+(const LList<T>& other) const{
	  LList<T> sum;
	  node_t<T>* temp = this->head;
	  while(temp){
	    sum.push_back(temp->value);
	    temp = temp->next;
	  }
	  temp = other.head;
	  while(temp){
	    sum.push_back(temp->value);
	    temp = temp->next;
	  }
	  return sum;
	}
	
	// == overlaod
	bool operator==(const LList<T>& other) const{
	  if(this->num_of_ents != other.num_of_ents){
	    return false;
	  }
	  if(this->num_of_ents == 0 && other.num_of_ents == 0){
	    return true;
	  }
	  node_t<T>* one = this->head;
	  node_t<T>* two = other.head;
	  while(one){
	    if(one->value != two->value){
	      return false;
	    }
	    one = one->next;
	    two = two->next;
	  }
	
	  return true;
	}
	
	// != overload
	bool operator!=(const LList<T>& other) const{
	  if(this->num_of_ents != other.num_of_ents){
	    return true;
	  }
	  if(this->num_of_ents == 0 && other.num_of_ents == 0){
	    return false;
	  }
	  node_t<T>* one = this->head;
	  node_t<T>* two = other.head;
	  while(one){
	    if(one->value != two->value){
	      return true;
	    }
	    one = one->next;
	    two = two->next;
	  }
	
	  return false;
	}
	
	// Clear LList
	void clear(){
	  node_t<T>* temp = this->head;
	  while(temp){
	    node_t<T>* del = temp;
	    temp = temp->next;
	    delete del;
	  }
	  head = NULL;
	  num_of_ents = 0;
	}
 
  
  private:
  // Fill in stuff here!
  node_t<T>* head;
  unsigned int num_of_ents;
};

// Overload ostream
template <class T>
ostream& operator<<(ostream& out, const LList<T> other){
  out << "[";
  for(unsigned int i = 0; i < other.size(); i++){
    out << other.getAt(i);
    if(i != other.size()-1){
      out << ", ";
    }
  }
  out << "]";
	return out;
}


#endif
