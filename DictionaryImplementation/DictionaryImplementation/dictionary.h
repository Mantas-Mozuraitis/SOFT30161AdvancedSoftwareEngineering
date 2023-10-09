#include <iostream>

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
	void insert(int, std::string);
	std::string* lookup(int);

	void displayDictionary(Node*);//for testing
	void display();//for testing

private:

	Node* root = nullptr;

};
