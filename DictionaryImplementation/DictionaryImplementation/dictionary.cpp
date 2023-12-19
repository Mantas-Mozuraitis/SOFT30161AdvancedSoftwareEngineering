#include "dictionary.h";

Node::Node(int newKey, std::string newItem) {
	item = newItem;
	key = newKey;
}

Dictionary::Dictionary() : root(nullptr) {}



void Dictionary::insert(int newKey, std::string newItem) {
	Node* newNode = new Node(newKey, newItem);
	if (root == nullptr)
	{
		root = newNode;
	}
	else
	{
		Node* currentNode = root;
		Node* previousNode = nullptr;

		while (currentNode != nullptr)
		{
			if (currentNode->key == newKey)
			{
				currentNode->item = newNode->item;
				return;
			}

			else if (currentNode->key > newKey)
			{
				previousNode = currentNode;
				currentNode = currentNode->leftChild;
			}
			else if(currentNode->key < newKey){
				previousNode = currentNode;
				currentNode = currentNode->rightChild;
			}
		}
		if (previousNode->key > newKey)
		{
			previousNode->leftChild = newNode;
		}
		else
		{
			previousNode->rightChild = newNode;
		}
	}
}

std::string* Dictionary::lookup(int requestedKey)
{
	return lookupWorker(root, requestedKey);
}

std::string* Dictionary::lookupWorker(Node* root, int requestedKey) {
	if (root == nullptr) {
		return nullptr;
	}

	if (root->key == requestedKey) {
		// Key found, return a pointer to the item
		return &(root->item);
	}
	else if (root->key > requestedKey) {
		// Search in the left subtree
		return lookupWorker(root->leftChild, requestedKey);
	}
	else {
		// Search in the right subtree
		return lookupWorker(root->rightChild, requestedKey);
	}
}

void Dictionary::displayDictionary(Node* root)
{
	if (root == NULL)
		return;
	// print data of node 
	std::cout << "<" << root->key << ">" << " " << root->item << "\n";

	//going to left node
	displayDictionary(root->leftChild);

	//going to right
	displayDictionary(root->rightChild);
}

void Dictionary::display() {
	displayDictionary(root);
}





Dictionary::~Dictionary() {
	deepDeleteWorker(root);
}

void Dictionary::deepDeleteWorker(Node* root) {
	if (root == nullptr) {
		return;
	}

	deepDeleteWorker(root->leftChild);
	deepDeleteWorker(root->rightChild);

	delete root;
}

