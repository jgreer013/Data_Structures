/*
	Implementation for Book class.
	Jeremiah Greer
	August 2015
*/

#include <string>
#include <fstream>
#include <iostream>

#include "Book.h"

using namespace std;

string buildTerm(string temp) {
  string fin;
  for (unsigned int i2 = 0; i2 < temp.length(); i2++) {
    if (temp[i2] == '!') {
      break;
    }
    fin += temp[i2];
  }
  return fin;
}

// Constructor, file input
Book::Book(string filename) {
  fstream file;
  file.open(filename.c_str());
  string header[3];
  string txt;
  int counter = 0;
  while (file) {
    getline(file,txt);
    if (counter >= 3) {
      this->lines.push_back(txt + '\n');
    }
    else {
      header[counter] = txt;
    }
    counter++;
  }
  file.close();
  for (unsigned int i = 0; i < sizeof(header)/sizeof(string); i++) {
    string temp, fin;
    if (header[i].substr(0,7) == "!Title:") {
      temp = header[i].substr(7,header[i].length());
      this->title = buildTerm(temp);
    }
    else if (header[i].substr(0,14) == "!Author-First:") {
      temp = header[i].substr(14,header[i].length());
      this->first = buildTerm(temp);
    }
    else if (header[i].substr(0,13) == "!Author-Last:") {
      temp = header[i].substr(13,header[i].length());
      this->last = buildTerm(temp);
    }
  }
}
  
Book::Book(string title, string first, string last, string text){
   // TODO
  this->title = title;
  this->first = first;
  this->last = last;
  string txt;
  for (unsigned int i = 0; i < text.length(); i++) {
    txt += text[i];
    if (text[i] == '\n' || i == text.length()-1) {
      this->lines.push_back(txt);
      txt = "";
    }
  }
}
  
// Getters
string Book::getTitle(){
   // TODO
  return title;
}
  
string Book::getFullAuthor(){
   // TODO
  return first + " " + last;
}
  
string Book::getAuthorFirst(){
   // TODO
  return first;
}
  
string Book::getAuthorLast(){
   // TODO
  return last;
}
  
unsigned int Book::getCharacterCount(){
  // TODO
  unsigned int counter = 0;
  for (unsigned int i = 0; i < this->lines.size(); i++) {
    counter += lines[i].length();
  }
  return counter;
}
  
unsigned int Book::getLineCount(){
   // TODO
  return this->lines.size()+1;
}
  
unsigned int Book::getWordCount(string word){
   // TODO
  unsigned int counter = 0;
  for (unsigned int i = 0; i < this->lines.size(); i++) {
    for (unsigned int j = 0; j < lines[i].length(); j++) {
      if (lines[i].substr(j,word.length() + 2) == " " + word + " ") {
        counter++;
      }
    }
  }
      
  return counter;
}

vector<float> Book::letterPercent(){
   // TODO
  vector<string> temp = this->lines;
  int letters[26];
  for (unsigned int i = 0; i < sizeof(letters)/sizeof(int); i++) {
    letters[i] = 0;
  }
  int total = 0;
  for (unsigned int t = 0; t < temp.size(); t++) {
    string txt = temp[t];
    for (unsigned int i = 0; i < txt.length(); i++) {
      if(isalpha(txt[i])) {
        char character = txt[i];
        int letter = tolower(character) - 'a';
        letters[letter] += 1;
        total += 1;
      }
    }
  }
  vector<float> ret;
  for (unsigned int i = 0; i < sizeof(letters)/sizeof(float); i++) {
    ret.push_back((float)letters[i]/total);
  }
  return ret;
}
  
string Book::getText(){
   // TODO
  string txt;
  for (unsigned int i = 0; i < this->lines.size(); i++) {
    txt += (this->lines[i]);
  }
  return txt;
}
