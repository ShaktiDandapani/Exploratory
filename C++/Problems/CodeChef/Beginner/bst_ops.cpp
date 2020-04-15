#include <iostream>
#include <string>

class Node
{

public:
    int value;
    int pos;
    Node* left;
    Node* right;

public:
    // Constructor    
    Node() : value(value),  pos(pos), left(NULL), right(NULL) { }
};

class BST
{
private: 
    Node *root;
    void Insert(Node* node, int value);
    void Delete(Node* node, int value);
    void DestroyTree(Node* node);

public:
    // No duplicates in test cases
    // guaranteed ! 
    // still useful to have a position
    void Insert(int value);
    void Delete(int value);
    void PrintTree();
    void DestroyTree();

public:
    ~BST()
    {
        DestroyTree();
    }
};

void BST::DestroyTree()
{
    DestroyTree(root);
}

void BST::DestroyTree(Node* node)
{
    if (node != NULL)
    {
        DestroyTree(node->left);
        DestroyTree(node->right);
        delete node;
    }
}


// Core private implementation
void BST::Insert(Node* node, int value)
{
    if (value < node->value)
    {
        if (node->left != NULL)
        {
            Insert(node->left, value);
        }
        else
        {
            Node* temp_left = new Node;
            temp_left->value = value;
            temp_left->pos = 2 * node->pos;
            node->left = temp_left;
        }
    }
    else if (value > node->value)
    {
        if (node->right != NULL)
        {
            Insert(node->right, value);
        }
        else
        {
            Node* temp_right = new Node;
            temp_right->value = value;
            temp_right->pos = 2 * node->pos + 1;
            node->right = temp_right;
        }
        
    }
}

// Public interface
void BST::Insert(int value)
{
    if (root == NULL)
    {
        // heap allocation
        Node* temp = new Node;
        temp->value = value;
        temp->pos = 1;
        root = temp;
    }
    else
    {
        // call in the recursion.
        Insert(root, value);
    }
    
}


// public interface
void BST::Delete(int value)
{
    if (value == root->value)
    {
        // recursively delete everything.
    }
    else 
    {
        Delete(root, value);
    }
}

// Private implementaton - core recursion
void BST::Delete(Node* node, int value)
{
    if (value < node->value)
    {
        Delete(node->left, value);
    }
    else if (value > node->value)
    {
        Delete(node->right, value);
    }
    else
    {
        delete node;
    }
    
}

int main()
{

    BST tree_Obj;   

    // input from stdin
    // 5 << number of queries
    // insertion deletion below
    // can go into a while or a 
    // for loop
    // i 1
    // i 2
    // i 0
    // d 2 
    // i 3

    int number_of_queries = 0;

    std::cin >> number_of_queries;
    std::cin.ignore(); // ignore trailing newline '\n' from previous cin.

    int i = 0;
    std::string input;

    while (i < number_of_queries)
    {

        std::getline(std::cin, input);

        std::cout << "Split input: " << input;

        i++;
    }

    return 0;

}