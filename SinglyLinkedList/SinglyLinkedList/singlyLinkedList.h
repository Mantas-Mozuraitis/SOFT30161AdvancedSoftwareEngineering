struct Node
{
	char data;
	Node* next;
	Node(char);
};

class SinglyLinkedList
{
public:
	SinglyLinkedList();
	void AddSignleNodeFront(char);
	void AddSignleNodeBack(char);
	void displayList();
	bool isPresentInList(char);
private:
	Node* head;
	int size;
};
