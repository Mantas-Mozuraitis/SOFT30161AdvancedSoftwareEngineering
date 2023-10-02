#include "singlyLinkedList.h"

void main() {
	SinglyLinkedList list;
	list.AddSignleNodeFront('a');
	list.AddSignleNodeFront('b');
	list.AddSignleNodeFront('c');
	list.AddSignleNodeFront('d');

	list.displayList();

	list.isPresentInList('e');
	list.isPresentInList('a');

	list.AddSignleNodeBack('f');
	list.AddSignleNodeBack('r');

	list.displayList();
}