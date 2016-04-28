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



void displayHelp() {
  cout << "Parameters: -r <int> [optional]\n" << endl;
  cout << "-r <int> Amount of Rotation, positive or negative" << endl;
  cout << "-f <filename> String of filename for use as input" << endl;
  cout << "-? Help" << endl;
}

int main(int argc, char** argv){   
	// defaults
	int rottata = 0;
	bool spin = false;
	bool phil = false;
	char* fn;
	

	// process command-line arguement
	int opt = 0;
	extern char* optarg;
	static const char* opt_string = "r:f:";
	opt = getopt( argc, argv, opt_string);
	while(opt != -1){  // While there are parameters to parse, do so
		switch(opt){
			case 'r':
				rottata = atoi(optarg);
				spin = true;
				break;
		  
			case 'f':
			  fn = optarg;
			  phil = true;
				break;
      
      case '?':
        displayHelp();
        return 0;
        
			default:
				displayHelp();
				return 0;
		}
		opt = getopt( argc, argv, opt_string);	// Pull the next parameter, or 0 if none.
	}
	
	if(spin == false) {
	  displayHelp();
	  return 0;
	}
	
	rottata = rottata % 26;
	cout << rottata << endl << endl;
	if(phil == true) {
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
      for(unsigned int i = 0; i < word.length(); i++) {
	      int ch = word.at(i);
	      if(isalpha(word.at(i))) {
	        ch += rottata;
	        if(ch > 122){
	          ch -= 26;
	        }
	        else if(ch < 65) {
	          ch += 26;
	        }
	        else if(ch > 90 && word.at(i) <= 90) {
	          ch -= 26;
	        }
	        else if(ch < 97 && word.at(i) >= 97) {
	          ch += 26;
	        }
	      }
	      cout << (char)ch;
	    }
	    cout << endl;
	    getline(file,line);
    }
	} 
	else {
	  string word;
	  std::getline(cin,word);
	  for(unsigned int i = 0; i < word.length(); i++) {
	    int ch = word.at(i);
      if(isalpha(word.at(i))) {
        ch += rottata;
        if(ch > 122){
	        ch -= 26;
	      }
	      else if(ch < 65) {
	        ch += 26;
	      }
	      else if(ch > 90 && word.at(i) <= 90) {
	        ch -= 26;
	      }
	      else if(ch < 97 && word.at(i) >= 97) {
	        ch += 26;
	      }
	    }
	    cout << (char)ch;
	  }
	  cout << endl;
	}
	return 0;
	
}
	
