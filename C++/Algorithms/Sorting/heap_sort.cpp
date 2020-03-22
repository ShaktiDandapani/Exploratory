#include <iostream>
#include "base_functions.h"

/* Heap sort algorithm

1. Build a max heap from the input data
2. Largest item will be in the root
3. Heapify root
4. repeat while size(heap) > 1


Heapify -> recursive

please refer:
https://www.geeksforgeeks.org/heap-sort/

*/
// n - size of heap, arr - input array, i - index in arr[]
// all this function does is checks if the root node
// is not larger than it's childs, then swaps it 
// so as to create a binary heap tree.
// recursively does it 
// till exit clauses are reached i.e. 
// l < n and r < n loops.

// Essentially store a binary heap tree
// as an array (think of it as a numpy flatten)
void heapify(int arr[], int n, int i)
{
	int largest = i;
	// arr[0] - highest number (parent/root)
	// arr[1] = 2 * 0 + 1 -> left child
	// arr[2] = 3 * 0 + 1 -> right child
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	// heapify -> make it a 
	// binary heap tree
	if(l < n && arr[l] > arr[largest])
	{
		largest = l;
	}

	if (r < n && arr[r] > arr[largest])
	{
		largest = r;
	}

	// if largest is not the root
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);

	}
}

// Main sort function
void heapsort(int arr[], int n)
{

	// BUild the heap (rearranging input array)
	// initialisation n / 2 - 1 as the array
	// itself has last two elements n, n - 1
	// as children of n - 2 :)
	for (int i = n / 2 - 1; i >=0; i--)
	{
		heapify(arr, n, i);
	}

	// one by one extract element from heap
	for (int i = n - 1; i >= 0; i--)
	{
		// move current root to the next
		swap(&arr[0], &arr[i]);

		// call maximum heapify on the reduced heap
		heapify(arr, i, 0);
	}
}


int main()
{
	int inputArray[10] = {20, 1, 4, -2, -5, 0, 10, 11, 3, 5};

	// before sorting
	std::cout << "Before Heap Sort " << std::endl;
	displayArray(inputArray, 10);

	// Call in the sorting function
	heapsort(inputArray, 10);

	std::cout << "After Heap Sort" << std::endl;
	displayArray(inputArray, 10);

	return 0;

}
