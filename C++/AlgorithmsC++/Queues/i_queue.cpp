/*

A queue class, to implement a Stack Queue structure
First in First out (FIFO).

The functions to be present in the queue include:
a. Enqueue  - add an iterm to the queue, if not full
b. Dequeue  - removes an item from the queue, same order
c. Front    - peek the front of the queue
d. Back     - peek the back of the queue

simple integer queue (template based method later)

-- naive implementation using a fixed array size.

-- eh implmeneted using pointers so no fixed size
   but dynamically increasing queue array based 
   on pointer based address increment and passing
   values as such.
-- of course iterator support, such as cbegin(),
   cend(), begin(), end() need to be considered.

*/
#include <iostream>


// template <typename T>
class Queue
{

private:
	int size = 0; // size capacity of current queue
	int* queueArray;
	int front = size - 1;
	int rear = -1;

public:
	Queue()
	{
		queueArray = new int[size];
	}

	void enqueue(int);
	void dequeue();
	int queueFront();
	int queueRear();
	void displayQueue();
	int getSize();
	bool isEmpty();
	bool isFull();

	// Think about destructors :)
	// how will you clean up the queue

};

void Queue::enqueue(int value)
{
	// using pointer based structure to add value
	// to address space without copying the array 
	// etc.
	*(queueArray+size) = value;
	rear = 0;
	size++; // as the queue increases in size by 1
	// front = size - 1; // as simple as that (end of the list)
}

void Queue::displayQueue()
{
	for (int index = 0; index < size; index++)
	{
		// std::cout << *(queueArray + index) << " ";	

		std::cout << queueArray[index] << " ";	
	}
	
	std::cout << std::endl;
}

int Queue::getSize()
{
	return size;
}

int Queue::queueFront()
{
	return queueArray[size-1];
}

int Queue::queueRear()
{
	return queueArray[rear];
}

bool Queue::isEmpty()
{
	if(getSize() == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::isFull()
{
	// kind of not applicable
	// as we have a dynamic queue
	return true;
}

void Queue::dequeue()
{
	// make the pointer null 
	// delete it 

	// assign a dereferencer to the front
	// int *ptrFront = &queueArray[size-1];

	// // ptrFront = &queueArray[size-1]; 

	// std::cout << "-----------\n";

	// std::cout << ptrFront << " --> " << *ptrFront << std::endl;

	// std::cout << "-----------\n";

	// this needs to be defined, else just overwrite in 
	// next enqueue <<<<<<< neeeds checking.
	std::cout << "Removing front element: " << queueArray[size-1] << std::endl;
	// delete ptrFront;
	size--;
}

int main()
{

	Queue qObj;

	for (int value=5; value > 0; --value)
	{
		qObj.enqueue(value);
	}

	qObj.displayQueue();

	std::cout << "Before dequeue size of queue: " << qObj.getSize() << std::endl;

	qObj.dequeue();

	qObj.displayQueue();

	std::cout << "Size of queue: " << qObj.getSize() << std::endl;

	return 0;
}