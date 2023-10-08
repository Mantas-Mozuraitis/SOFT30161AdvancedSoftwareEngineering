#include <iostream>

struct Node {
	std::string item;
	int key;
	Node* next;
	Node(int, std::string);
};

class Dictionary {
public:
	Dictionary();
	void insert(int, std::string);
	std::string* lookup(int);

	void displayDictionary();//for testing
private:
	Node* head;
};
