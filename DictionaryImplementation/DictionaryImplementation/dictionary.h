#include <iostream>
#include <string>

struct Node {
	//entry data (item and key)
	std::string item;
	int key;
	//pointers to descending nodes
	Node* leftChild = nullptr;
	Node* rightChild = nullptr;
	//constructor
	Node(int, std::string);
};

class Dictionary {

public:

	Dictionary();
	~Dictionary();
	void insert(int, std::string);
	std::string* lookup(int);
	void display();


private:
	void displayDictionary(Node*);
	void deepDeleteWorker(Node*);
	std::string* lookupWorker(Node*, int);
	Node* root = nullptr;

};
