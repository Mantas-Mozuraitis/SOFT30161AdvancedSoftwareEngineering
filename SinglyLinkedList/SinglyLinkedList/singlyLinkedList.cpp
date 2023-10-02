#include "singlyLinkedList.h"
#include <iostream>

using namespace std;

Node::Node(char newData) {
	data = newData;
	next = nullptr;
}

SinglyLinkedList::SinglyLinkedList()
{
	head = nullptr;
	size = 0;
}

void SinglyLinkedList::AddSignleNodeFront(char data)
{
	Node* nodePtr = new Node(data);
	nodePtr->next = head;
	head = nodePtr;
	size++;
}

void SinglyLinkedList::AddSignleNodeBack(char data)
{
	Node* nodePtr = new Node(data);
	nodePtr->next = nullptr;
	Node* currentNodePtr = head;
	while (currentNodePtr->next != nullptr)
	{
		currentNodePtr = currentNodePtr->next;
	}
	currentNodePtr->next = nodePtr;
	size++;
}

void SinglyLinkedList::displayList()
{
	Node* currentNodePtr = head;

	while (currentNodePtr != nullptr)
	{
		std::cout << currentNodePtr->data << std::endl;
		currentNodePtr = currentNodePtr->next;
	}
}

bool SinglyLinkedList::isPresentInList(char data)
{
	Node* currentNodePtr = head;

	while (currentNodePtr != nullptr)
	{
		if (currentNodePtr->data == data)
		{
			std::cout << "true";
			return true;
		}
		else {
			currentNodePtr = currentNodePtr->next;
		}
	}

	std::cout << "false";
	return false;
}
