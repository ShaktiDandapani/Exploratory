#include <iostream>


/* Basic functions in a stack

   a. empty
   b. size
   c. back
   d. push
   e. pop

   let us see how we can implement it
   with greedy arrays :D (fixed size for now)

   LIFO

   bear in mind we are using an int stack for now
   for template based stack we can use T etc..
*/

class Stack
{
private:
	int topIndex = -1;
	int stackArray[10];

public:
	// Only peek at the top
	void top()
	{
		if(empty())
		{
			std::cout << "Array empty" << std::endl;
		}
		else
		{
		    std::cout << "Top of the stack: " << std::endl;
		    std::cout << stackArray[topIndex] << std::endl;			
		}

	}

	int empty()
	{
		if(topIndex < 0)
		{
			std::cout << "Stack is empty" << std::endl;
			return 1;
		}
		else
		{
			// std::cout << "Stack is not empty" << std::endl;
			// displayStack();
			return 0;
		}
	}

	void displayStack()
	{
		std::cout << "Elements of stack: " << std::endl;
        for (int index=0; index < sizeof(stackArray) / sizeof(stackArray[0]); ++index)
        {
        	std::cout  << stackArray[index] << ", ";
        }
        std::cout << std::endl;
	}

	void push(int value)
	{
        stackArray[++topIndex] = value;
	}

    void pop()
    {
    	std::cout << "Popping the element: " << stackArray[topIndex] << std::endl;
    	// delete stackArray[topIndex];
    	topIndex--;
    }
};



int main()
{
	Stack new_stack;

	new_stack.top();
	new_stack.push(10);
	new_stack.top();
	new_stack.push(20);
	new_stack.push(2);
	new_stack.empty();
	new_stack.top();
	new_stack.pop();
	new_stack.top();


	return 0;
}