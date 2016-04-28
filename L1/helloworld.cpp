/*
	Hello World
	If -n is given, use the supplied string, otherwise use 'World'.
	If -t is given, repeat the same line that many times with a count. 
	If no -t is given, don't put a number on the line.
	If -h, print help.
	Jeremiah Greer
	August 26, 2015
*/

#include <iostream>
#include <string>

#include <stdlib.h>
#include <stdio.h>
#include "unistd.h"

using namespace std;

// Global settings
struct global_args_t {
  // TODO
  string dispName;
  int freq;
  bool targ;
  
} global_args;

void displayUsage(){
	// Displays how to use this program
	cout << "Parameters: -n -t" << endl;
	cout << "-n takes in a string which will be printed" << endl;
	cout << "-t takes in an int which determines how many times the statement will be printed" << endl;
}


int main(int argc, char** argv){   
	// defaults
	global_args.dispName = "World";
	global_args.freq = 1;
	global_args.targ = false;

	// process command-line arguement
	int opt = 0;
	extern char* optarg;
	static const char* opt_string = "n:t:";
	opt = getopt( argc, argv, opt_string);
	while(opt != -1){  // While there are parameters to parse, do so
		switch(opt){
			case 'n':
				global_args.dispName = optarg;
				break;
		  
			case 't': 
			  global_args.freq = atoi(optarg);
			  if(global_args.freq >= 1){
			    global_args.targ = true;
			  }
				break;
      
      case 'h':
        displayUsage();
        return 0;
        
			default:
				displayUsage();
				return 0;
		}
		opt = getopt( argc, argv, opt_string);	// Pull the next parameter, or 0 if none.
	}
	
	for(int i = 0; i < global_args.freq; i++){
	  if(global_args.targ == false) {
	    cout << "Hello " << global_args.dispName << "!" << endl;
	  } 
	  else {
      cout << "[" << i+1 << "] " << "Hello " << global_args.dispName << "!" << endl;
    }
  }
  
	return 0;
}
