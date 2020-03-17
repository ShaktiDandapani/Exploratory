#include <iostream>
#include "slist_node.h"

class LinkedList
{
private:
	LNode *head, *tail;

public:
	LinkedList() : head(NULL), tail(NULL) { }
	void addFirst(int);
	void addLast(int);
	void traverse();
	void insertBefore(int);
	void insertAfter(int);
	void deleteNode();
	LinkedList cloneList(LinkedList*);
    void displayList();

};



int main()
{

	std::cout << "Do begin ma dude" << std::endl;

	return 0;
	

}