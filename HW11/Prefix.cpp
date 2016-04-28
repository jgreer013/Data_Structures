/*
   Trie (Prefix) class for storing and retrieving strings.
   Jeremiah Greer
   November 2015
 */
#include <iostream>
#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include "Prefix.h"

using namespace std;

// Initializes pointers to NULL because c++ can't do it itself.
void setLinks(Node_t* node){
  for(unsigned int i = 0; i < 27; i++){
    node->links[i] = NULL;
  }
}
// fill me in!
// Converts string to lowercase
string lower(string thing){
  string ret = "";
  for(unsigned int i = 0; i < thing.length(); i++){
    if(thing[i] >= 'A' && thing[i] <= 'Z'){
      ret += (thing[i] - 'A' + 'a');
    }
    else if(isalpha(thing[i]) == false){
      ret += ' ';
    }
    else{
      ret += thing[i];
    }
  }
  return ret;
}

// Converts character to array index
int Prefix::charIndex(char letter){
  if(letter == ' '){
    return 26;
  }
  return letter - 'a';
}

// Default Constructor
Prefix::Prefix(){
  root = new Node_t;
  setLinks(root);
  num_of_nodes = 1;
  num_of_strings = 0;
}


// Copy Constructor
Prefix::Prefix(const Prefix &copy){
  root = new Node_t;
  setLinks(root);
  fullCopy(root, copy.root);
  num_of_nodes = copy.num_of_nodes;
  num_of_strings = copy.num_of_strings;
}


// Assignment Overload
Prefix& Prefix::operator=(const Prefix &other){
  if(this == &other){
    return *this;
  }
  clear(root);
  for(unsigned int i = 0; i < 27; i++){
    root->links[i] = NULL;
  }
  fullCopy(root, other.root);
  num_of_nodes = other.num_of_nodes;
  num_of_strings = other.num_of_strings;
  return *this;
}


// Destructor
Prefix::~Prefix(){
  this->clear(root);
  delete root;
  root = NULL;
}



// Secondary size function for testing purposes
unsigned int Prefix::sizeN(){
  return num_of_nodes;
}

// Secondary size function for testing purposes
unsigned int Prefix::sizeS(){
  return num_of_strings;
}

// Inserts word into tree
bool Prefix::insert(string thing){
  string lowered = lower(thing);
  return insert(lowered, root);
}


// Return height of tree
int Prefix::getHeight(){
  return getHeight(root) - 2;
}


// Return the number of nodes
int Prefix::getNumNodes(){
  return getNumNodes(root);
}


// Return number of words
int Prefix::getNumStored(){
  return getNumStored(root);
}


// Return a vector of strings which start with a given prefix
vector<string> Prefix::getWPrefix(string prefix){
  vector<string> ret;
  Node_t* node = root;
  string orig_prefix = prefix;
  while(prefix.length() > 0){
    if(node == NULL){
      return ret;
    }
    node = node->links[charIndex(prefix[0])];
    prefix = prefix.substr(1,prefix.length()-1);
  }
  getAllStored(node, "", ret);
  vector<string> ret2;
  for(unsigned int i = 0; i < ret.size(); i++){
    ret2.push_back(orig_prefix + ret[i]);
  }
  return ret2;
}


// Return all strings contained in the tree
vector<string> Prefix::getAllStored(){
  vector<string> ret;
  getAllStored(root, "", ret);
  return ret;
}


// Return the number of strings containing a given prefix
int Prefix::getNumWPrefix(string prefix){
  vector<string> stored = this->getWPrefix(prefix);
  return stored.size();
}


// Return true if thing is stored in the tree
bool Prefix::isStored(string thing){
  return isStored(thing, root);
}

// BEGIN RECURSION SECTION
bool Prefix::insert(string thing, Node_t* node){
  int len = thing.length();
  if(len != 0){
    if(node->links[charIndex(thing[0])] == NULL){
      Node_t* new_node1 = new Node_t;
      setLinks(new_node1);
      num_of_nodes++;
      new_node1->word = false;
      node->links[charIndex(thing[0])] = new_node1;
    }
    return insert(thing.substr(1,len-1), node->links[charIndex(thing[0])]);
  }
  else{
    if(node->word == true){
      return true;
    }
    node->word = true;
    num_of_strings++;
    return false;
  }
}


int Prefix::getHeight(Node_t* node){
  if(node == NULL){
    return 1;
  }
  else{
    unsigned int max_height = 0;
    for(unsigned int i = 0; i < 27; i++){
      unsigned int ht = getHeight(node->links[i]);
      if(ht > max_height){
        max_height = ht;
      }
    }
    return max_height + 1;
  }
}

int Prefix::getNumNodes(Node_t* node){
  if(node == NULL){
    return 0;
  }
  else{
    unsigned int num_nodes = 0;
    for(unsigned int i = 0; i < 27; i++){
      unsigned int ht = getNumNodes(node->links[i]);
      num_nodes += ht;
    }
    return num_nodes + 1;
  }
}

int Prefix::getNumStored(Node_t* node){
  unsigned int num_words = 0;
  for(unsigned int i = 0; i < 27; i++){
    Node_t* other = node->links[i];
    if(other != NULL){
      if(other->word == true){
        num_words++;
      }
      num_words += getNumStored(other);
      
    }
  }
  return num_words;
}

void Prefix::getAllStored(Node_t* node, string words, vector<string> &all_words){
  if(node == NULL){
    return;
  }
  else{
    for(unsigned int i = 0; i < 27; i++){
      Node_t* other = node->links[i];
      string current_word = words;
      if(other != NULL){
        current_word += (char)(i + 'a');
        if(other->word == true){
          all_words.push_back(current_word);
        }
        getAllStored(other, current_word, all_words);
      }
    }
  }
}

bool Prefix::isStored(string thing, Node_t* node){
  if(node == NULL){
    return false;
  }
  if(thing.length() == 0){
    if(node->word == true){
      return true;
    }
    else{
      return false;
    }
  }
  return isStored(thing.substr(1), node->links[charIndex(thing[0])]);
}

void Prefix::fullCopy(Node_t* node, Node_t* other_node){
  node->word = other_node->word;
  for(unsigned int i = 0; i < 27; i++){
    if(other_node->links[i] != NULL){
      Node_t* new_node = new Node_t;
      setLinks(new_node);
      node->links[i] = new_node;
      fullCopy(new_node, other_node->links[i]);
    }
  }
}


void Prefix::clear(Node_t* n){
  for(unsigned int i = 0; i < 27; i++){
    if(n->links[i] != NULL){
      clear(n->links[i]);
    }
  }
  if(n != root){
    delete n;
    n = NULL;
  }
}





