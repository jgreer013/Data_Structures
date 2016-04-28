/*
	Dictionary lookup program.
	Jeremiah Greer
	October 2015
*/

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

#include "HashTable.h"

using namespace std;

// Good hash function for strings
unsigned int hash(const string& thing){
  unsigned int ret = 7;
  for(unsigned int i = 0; i < thing.length(); i++){
    ret = ret * 31 * thing[i];
    // 31 is the next prime above 26
  }
  return ret;
}

unsigned int strlen(string str){
  unsigned int sz = str.size();
  return sz/1;
}

// Deletion Check
int del(string word1, string word2){
  int count = 0;
  for(unsigned int i = 0; i < word1.length(); i++){
    if(word2[count] == word1[i]){
      count++;
    }
  }
  if(count == strlen(word2)){
    return 1;
  }
  else{
    return 0;
  }
}

// Substitution Check
int sub(string word1, string word2){
  int sims = 0;
  for(unsigned int i = 0; i < word1.length(); i++){
    if(word1[i] == word2[i]){
      sims++;
    }
  }
  if(sims == strlen(word1)-1){
    return 2;
  }
  else{
    return 0;
  }
}

// Addition Check
int added(string word1, string word2){
  int count = 0;
  for(unsigned int i = 0; i < word2.length(); i++){ // abc abdc
    if(word1[count] == word2[i]){
      count++;
    }
  }
  if(count == word1.length()){
    return 3;
  }
  else{
    return 0;
  }
}

// Determines if two words are similar
int findSim(string word1, string word2){
  if(strlen(word1) == strlen(word2)+1){ // Deletion: 1
    return del(word1, word2);
  }
  else if(strlen(word1) == strlen(word2)){ // Substitution: 2
    return sub(word1, word2);
  }
  else if(strlen(word1) == strlen(word2)-1){ // Addition: 3
    return added(word1, word2);
  }
  else{
    return 0; // Not Similar: 0
  }
}

void printWhile(string &word, vector<string> &all_words, HashTable<string> &dictionary){
  cout << "Enter word: ";
  cin >> word;
  if(word == "q"){
    return;
  }
  if(dictionary.find(word) == true){
    cout << "FOUND!" << endl;
  }
  else{
    cout << "Not Found." << endl;
  }
  cout << "Similar Words: \t";
  for(unsigned int i = 0; i < all_words.size(); i++){
    int res = findSim(word, all_words[i]);
    if(res == 0){
    
    }
    else{
      cout << all_words[i] << " ";
    }
  }
  cout << endl;
}

int main(int argc, char* argv[]){
  // Change me!
  // Example of how to pass a function to a function.
  // This will pass the above hash function to the class.
  unsigned int capacity = 200000;
  HashTable<string> dictionary(hash, capacity);
  vector<string> all_words;
  char* fn;
  if(argc == 2){
    fn = argv[1];
  }
  fstream file;
  file.open(fn, ios::in);
	if(file.fail()) {
    cout << "Error in opening file " << fn << endl;
    return 0;
  }
  string line;
  getline(file,line);
  while(file) {
    string word = line;
    dictionary.insert(word);
    if(word[0] > 90 || word[0] < 65){
      all_words.push_back(word);
    }
    getline(file,line);
  }
  cout << "Words Loaded: " << dictionary.size() << endl;
  string word = "";
  while(word != "q"){
    printWhile(word, all_words, dictionary);
  }
  return 0;
}
