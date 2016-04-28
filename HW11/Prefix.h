#ifndef PREFIX_H
#define PREFIX_H
/*
   Trie (Prefix) class for storing and retrieving strings.
   Jeremiah Greer
   November 2015
 */
 
 #include <string>
 #include <vector>

using namespace std;

const unsigned int B_FACTOR = 27;  // a..z plus space

struct Node_t{
		bool word;
		Node_t* links[B_FACTOR];
};

class Prefix{
	
	public:
	Prefix();
	Prefix(const Prefix &copy);
	Prefix& operator=(const Prefix& other);
	~Prefix();
	
	unsigned int sizeN();
	unsigned int sizeS();
	bool insert(string thing);
	
	int getHeight();
	int getNumNodes();
	int getNumStored();
	vector<string> getWPrefix(string prefix);
	vector<string> getAllStored();
	int getNumWPrefix(string prefix);
	bool isStored(string thing);
	
	
	private:
	Node_t *root;
	unsigned int num_of_nodes;
	unsigned int num_of_strings;
	int charIndex(char letter);
	bool insert(string thing, Node_t* node);
	int getHeight(Node_t* node);
	int getNumNodes(Node_t* node);
	int getNumStored(Node_t* node);
	void getAllStored(Node_t* node, string words, vector<string> &all_words);
	bool isStored(string thing, Node_t* node);
	void fullCopy(Node_t* node, Node_t* other_node);
	void clear(Node_t* node);
	// Hint... fill in functions here! // Nah I'll fill them above
	
	
};
#endif  
