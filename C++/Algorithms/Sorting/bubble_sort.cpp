#include <iostream>

/*

A simple bubble sort algorithm 
using int arrays

*/


int main()
{

	int a[5] = {5, 1, 2, 3, 6};
	int temp;

	// Original Array
	std::cout << "Bubble sorted array\n";

	for (int index=0; index < 5; index++)
	{
		std::cout << a[index] << " ";
	}

	for (int i=0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if(a[j] > a[i])
			{
				// Swap em
				a[j] = a[j] + a[i];
				a[i] = a[j] - a[i];
				a[j] = a[j] - a[i];
			}
		}
	}

	std::cout << "\nBubble sorted array\n";

	for (int index=0; index < 5; index++)
	{
		std::cout << a[index] << " ";
	}

}