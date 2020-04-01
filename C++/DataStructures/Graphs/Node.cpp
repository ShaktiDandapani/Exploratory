
struct BinaryNode
{
private:
    // member variables
    int m_value;
    BinaryNode* m_left;
    BinaryNode* m_right;

public:
    // Constructor
    BinaryNode() : m_value(m_value), m_left(m_left), m_right(m_right) { }
};


class Node
{
private:
    int value;
    int child_capacity;
    Node* children;

public:
    Node()  { }
    Node(int value, int num_of_children) 
    {
        this->value = value;
        children = new Node[num_of_children];
    }

    void AddChildren()
    {
        // add more child nodes -> segregation of the expresion
        // tree (over time use this in a recursive loop)
        // Then sort out input into nodes having exactly one
        // left and right child

    }
    // overload ops for equality etc..
    // equality to be based not only on 
    // value but also address space
    // to check if two node objects/ pointers
    // are equivalent
};