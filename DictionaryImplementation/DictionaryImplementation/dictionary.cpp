#include "dictionary.h";

Node::Node(int newKey, std::string newItem) {
	item = newItem;
	key = newKey;
	next = nullptr;
}

Dictionary::Dictionary() {
	head = nullptr;
}

void Dictionary::insert(int newKey, std::string newItem) {
	Node* newNode = new Node(newKey, newItem);
	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node* currentNode = head;
		bool keyFound = false;
		while (currentNode->next != nullptr)
		{
			if (currentNode->key == newKey)
			{
				currentNode->item = newNode->item;
				keyFound = true;
			}
			currentNode = currentNode->next;
		}
		if (keyFound == false)
		{
			currentNode->next = newNode;
		}
	}
}

std::string* Dictionary::lookup(int requestedKey)
{
	Node* currentNode = head;
	if (currentNode == nullptr)
	{
		return nullptr;
	}
	else
	{
		while (currentNode->next != nullptr)
		{
			currentNode = currentNode->next;
			if (currentNode->key == requestedKey)
			{
				return &currentNode->item;
			}
		}
		return nullptr;
	}
}

void Dictionary::displayDictionary()
{
	Node* currentNode = head;

	while (currentNode != nullptr)
	{
		std::cout << currentNode->key << " - " << currentNode->item << std::endl;
		currentNode = currentNode->next;
	}
}

