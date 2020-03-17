#include <iostream>
#include "slist_node.h"


class LinkedList
{

private:
	Node *head, *tail;

public:
	void createNode(int);
	void deleteNode(int);

};


void LinkedList::createNode(int value)
{
	Node* temp;
	Node* headGhost;
	temp->data = value;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;

	}
}


void LinkedList::deleteNode(int position)
{

	// traverse through the linked list 
	Node* travNode;
	Node* pre;
	Node* cur;
	
	travNode = head;

	int pos = 0;

	while (travNode->next != NULL)
	{
		travNode = travNode->next;
		if (pos == position){
			// create a link between previous 
			// and next node
			// then delete the current node
		}
		pos ++;
	}

}







int main()
{
	LinkedList list1;

	return 0;
}