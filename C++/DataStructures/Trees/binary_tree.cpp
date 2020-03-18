/*

Learning from: 
https://www.cprogramming.com/tutorial/lesson18.html

*/

#include <iostream>
#include "node.h"


class BTree
{

private:
	Node* root;
	Node* search(int key, Node* leaf);
	void insert(int key, Node* leaf);
	void destroyTree(Node* leaf);

public:

	// Constructor
	BTree() : root(NULL) { }
	// Destructor
	~BTree();

	void insert(int key);
	Node* search(int key);
	void destroyTree();
};

BTree::~BTree()
{
	destroyTree();
}

void BTree::destroyTree(Node* leaf)
{
	if (leaf != NULL) // exit clause for recursion
	{
		// Recursively deleting the leaves
		destroyTree(leaf->left);
		destroyTree(leaf->right);
		delete leaf;
	}
}


void BTree::destroyTree()
{
	// using function overload within the same function :D
	destroyTree(root);
}


// Insert 
// Private implementation

void BTree::insert(int key, Node* leaf)
{
	if (key < leaf->value)
	{
		if (leaf->left !=NULL)
		{
			insert(key, leaf->left);
		}
		else
		{
			leaf->left = new Node;
			leaf->left->value = key;
			leaf->left->left = NULL; // not necessary if you initialise Node as a class and give it a default null value.
			leaf->left->right = NULL; // not necessary
		}
	}
	else if (key > leaf->value)

		if (leaf->right != NULL)
		{
			insert(key, leaf->right)
		}
		else
		{
			leaf->right = new Node;
			leaf->right->value = key;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
}

// Public implementation
void BTree::insert(int key)
{
	if (root != NULL)
	{
	    insert(key, root);	
	}
	else
	{
		root = new Node;
		root->value = key;
		root->left = NULL;
		root->right = NULL;
	}
	
}


int main()
{

	return 0;

}