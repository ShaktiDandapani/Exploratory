// pragma once

class LNode
{
private:
	char label;
	int data;
	LNode *next;

public:

	// constructor 
	LNode(char label, int data=0, LNode* next=NULL) 
	{
		this->label = label;
		this->data  = data;
		this->next  = next;
	}

	int getData();
	void setData(int);
	LNode getNext();
	char getLabel();

};

int LNode::getData()
{
	return data;
}

void LNode::setData(int data)
{
	this->data = data;
}

LNode LNode::getNext()
{
	return *next;
}

char LNode::getLabel()
{
	return label;
}


// int main()
// {
// 	// Testing the node class
// 		LNode n3('C', 30, NULL);
// 	LNode n2('B', 20, &n3);
// 	LNode n1('A', 10, &n2);

// 	std::cout << " Node " << n1.getLabel() << " data : " << n1.getData() << std::endl;
// 	std::cout << " Next Node from Node: " << n1.getLabel() << " --> " << n1.getNext().getLabel() <<std::endl;
	
// 	return 0;
	
// }