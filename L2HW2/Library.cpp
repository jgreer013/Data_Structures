/*
	Library implementation.
	Jeremiah Greer
	August 2015
*/

#include <string>
#include <string.h>
#include <dirent.h>
#include <iostream>
#include <cmath>
#include <vector>

#include "Library.h"


using namespace std;

Library::Library(string folder){
  // Open a directory and read the contents
  DIR* directory = opendir(folder.c_str());
  dirent* ent = readdir(directory);
  while(ent){
    if(strlen(ent->d_name) > 2){  // strlen gets the length of a c-string (char*)
      // Assume if the length > 2 it is a valid file
      // TODO: chage inside here to create and store new books!
      this->books.push_back(new Book(folder + ent->d_name));
    }
    ent = readdir(directory);
  }
  closedir(directory);
}

Library::~Library(){
 // TODO:
  for (unsigned int i = 0; i < this->books.size(); i++) {
    delete this->books[i];
  }
}

int Library::getBookCount(){
  // TODO:
  return books.size();
}

vector<string> Library::getBookTitles(){
  // TODO:
  vector<string> ret;
  for (unsigned int i = 0; i < this->books.size(); i++) {
    ret.push_back(this->books[i]->getTitle());
  }
 return ret;
}
  
Book* Library::getBook(unsigned int i){
  // TODO:
  if (i < books.size()) {
    return this->books[i];
  }
  else {
    return (Book*)NULL;
  }
}

Book* Library::getBook(string title){
// TODO:
  for (unsigned int i = 0; i < this->books.size(); i++) {
    if (this->books[i]->getTitle() == title) {
      return this->books[i];
    }
  }
  return (Book*)NULL;
}

float Library::getSimilarity(Book* one, Book* two){
  // TODO:
  if (one != NULL && two != NULL) {
    float fin = 0.0;
    vector<float> v_one = one->letterPercent();
    vector<float> v_two = two->letterPercent();
    for (unsigned int i = 0; i < v_one.size(); i++) {
      // AVERAGE DIFFERENCE (DO WE NEED ABSOLUTE VALUE?)
      fin += abs( v_one[i] - v_two[i] );
    }
    fin = fin/v_one.size();
    return fin;
  }
  return -1.0;
}
