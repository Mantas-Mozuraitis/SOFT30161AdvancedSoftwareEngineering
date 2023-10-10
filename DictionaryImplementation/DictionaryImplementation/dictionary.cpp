#include "dictionary.h";

Node::Node(int newKey, std::string newItem) {
	item = newItem;
	key = newKey;
}

Dictionary::Dictionary() {
	
}

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
	Node* currentNode = root;
	if (currentNode == nullptr)
	{
		return nullptr;
	}
	else
	{
		while (currentNode != nullptr)
		{
			if (requestedKey == currentNode->key)
			{
				return &currentNode->item;
			}
			else if (requestedKey < currentNode->key)
			{
				currentNode = currentNode->leftChild;
			}
			else if (requestedKey > currentNode->key)
			{
				currentNode = currentNode->rightChild;
			}
			else
			{
				return nullptr;
			}
		}
		return nullptr;
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

