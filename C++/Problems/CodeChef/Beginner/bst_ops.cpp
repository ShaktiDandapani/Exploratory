#include <iostream>

class Node
{

public:
    int value;
    int pos;
    Node* left;
    Node* right;

public:
    // Constructor    
    Node() : value(value), pos(pos), left(nullptr), right(nullptr) { }
};

class BST
{
private: 
    Node *root;
    int root_pos = 1; // just for fun ! 
    void Insert(Node* node, int value);
    void Delete(Node* node, int value);

public:

    // No duplicates in test cases
    // guaranteed ! 
    // still useful to have a position
    void Insert(int value);
    void Delete(int value);
    void PrintTree();

public:
    ~BST();
};


// Core private implementation
void BST::Insert(Node* node, int value)
{
    if (value < node->value)
    {
        if (node->left != nullptr)
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
        if (node->right != nullptr)
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
    if (root == nullptr)
    {
        // heap allocation
        Node* temp = new Node;
        temp->value = value;
        temp->pos = root_pos;
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

    int i = 0;
    std::string input;

    while (i < number_of_queries)
    {
        std::cin >> input;
        const char* inp = input.c_str();

        if (inp[0] == 'i')
        {
            tree_Obj.Insert(input[1]);
        }
        else if (input[0] == 'd')
        {
            tree_Obj.Delete(input[1]);
        }

        i++;
    }

    return 0;

}