/*
  caesar.cpp
  
  Jeremiah Greer
  August 26th, 2015
*/

#include <iostream>
#include <string>
#include <fstream>

#include <stdlib.h>
#include <stdio.h>
#include "unistd.h"

using namespace std;

// Display how to use the caesar.cpp program
void displayHelp() {
  cout << "Parameters: -r <int> [optional]\n" << endl;
  cout << "-r <int> Amount of Rotation, positive or negative" << endl;
  cout << "-f <filename> String of filename for use as input" << endl;
  cout << "-? Help" << endl;
  cout << "If -f not utilized, input will be taken as standard input" << endl;
}

// Evaluate the command-line arguments for the file
int evalArgs(int &rot, bool &spn, bool &phl, char* &fn, int &argc, char** &argv) {
	int opt = 0;
	extern char* optarg;
	static const char* opt_string = "r:f:";
	opt = getopt(argc, argv, opt_string);
	while(opt != -1){  // While there are parameters to parse, do so
		switch(opt){
			case 'r':
				rot = atoi(optarg);
				spn = true;
				break;
			case 'f':
			  fn = optarg;
			  phl = true;
				break;
      case '?':
        displayHelp();
        return 0;
			default:
				displayHelp();
				return 0;
		}
		opt = getopt(argc, argv, opt_string);	// Pull the next parameter, or 0 if none.
	}
	if(spn == false) {
	  displayHelp();
	  return 0;
	}
	return 1;
}

// Ensures characters are wrapped around if need be
void wrapCheck(int &ch, string &word, unsigned int &i, int &rottata) {
  if(isalpha(word.at(i))) {
	  ch += rottata;
	  if(ch > 'z'){
	    ch -= 26;
	  }
	  else if(ch < 'A') {
      ch += 26;
	  }
	  else if(ch > 'Z' && word.at(i) <= 'Z') {
	    ch -= 26;
	  }
	  else if(ch < 'a' && word.at(i) >= 'a') {
	    ch += 26;
	  }
	}
}

// Loops through characters in word
void characterLoop(string &word, int &rottata) {
  for(unsigned int i = 0; i < word.length(); i++) {
	  int ch = word.at(i);
	  wrapCheck(ch, word, i, rottata);
	  cout << (char)ch;
	}
	cout << endl;
}

// Cyphers input from file
void fileCypher(fstream &file, int &rottata) {
  string line;
  getline(file, line);
  while(file) {
    string word = line;
    characterLoop(word, rottata);
	  getline(file, line);
  }
}

// Cyphers input text by shiftng their values by int r
int main(int argc, char** argv){   
	// defaults
	int rottata = 0;
	bool spin = false;
	bool phil = false;
	char* fn;
	
	int file_test = evalArgs(rottata, spin, phil, fn, argc, argv);
	if(file_test == 0) {
	  return 0;
	}

	rottata = rottata % 26;
	if(phil == true) {
	  fstream file;
	  file.open(fn, ios::in);
	  if(file.fail()) {
	    cout << "Error in opening file " << fn << endl;
      return 0;
    }
    fileCypher(file, rottata);
	} 
	else {
	  string word;
	  std::getline(cin, word);
	  characterLoop(word, rottata);
	}
	return 0;
}
	
