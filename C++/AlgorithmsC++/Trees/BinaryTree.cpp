#include <iostream>


/*


A very basic implementation of 
a binary tree. :)

*/

class Node 
{
private:
	// char label; // ?
	// Node *parent; ?
	// bool childFlag ?
	// bool parentFlag ?
	Node *left, *right;
	int data;

public:
	// initialisation type constructors
	// are faster than assignment constructors !!!
	Node(int data=0, Node* left=NULL, Node* right=NULL)
	{
		this->data  = data;
		this->left  = left;
		this->right = right;
	}
	Node getChildLeft();
	Node getChildRight();
	int getData();
	void setData(int);

};

Node Node::getChildLeft()
{
	return *left;
}

Node Node::getChildRight()
{
	return *right;
}

int Node::getData()
{
	return data;
}

void Node::setData(int data)
{
	this->data = data;
}

// class Tree ma dude

int main()
{

    // testing nodes implementation first
    
    Node n2(20, NULL, NULL);
    Node n3(30, NULL, NULL);
    
    Node n1(10, &n2, &n3);

    std::cout << " Node 1 : Data -> " << n1.getData() << std::endl;
    std::cout << " Node 1 : Left Child -> " << n1.getChildLeft().getData() << std::endl;
    std::cout << " Node 1 : Right Child -> " << n1.getChildRight().getData() << std::endl ;

    std::cout << " Node 2 : Data -> " << n2.getData() << std::endl;
    std::cout << " Node 3 : Data -> " << n3.getData() << std::endl;

    // The lines below wont work as they point to a null object
    // will return a segmentation fault
    // std::cout << " Node 2 : Left Child -> " << n2.getChildLeft().getData() << std::endl;
    // std::cout << " Node 2 : Right Child -> " << n2.getChildRight().getData() << std::endl ;



    return 0;
 
}