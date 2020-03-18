#include <iostream>
#include "base_functions.h"

/*

Selection sort

unsorted array, input array

1. minimum - first element
2. check rest of the list
3. if another < minimum
4. swap
5. increment minimum

*/

int main()
{

	// This is an insert into an empty one
	// can be improved using pointers though
	int a[5] = {5, 1, 3, 4, 2};
	int sortedArray[5];

	std::cout << "Unsorted Array " << std::endl;
	for (int index=0; index < 5; index++)
	{
		std::cout << a[index] << " ";
	}
	std::cout << std::endl;

	int min;

	for (int i = 0; i < 5; i++)
	{
		min = i;

		for (int j = i + 1; j < 5; j++)
		{
			std::cout << i << j << std::endl;
			if (a[j] < a[min])
			{
				swap(&a[j], &a[min]);
				displayArray(a);

				min = j;
			}
		}
	}

	std::cout << "Sorted Array  (Selection Sort)" << std::endl;

	for (int index=0; index < 5; index++)
	{
		std::cout << a[index] << " ";
	}
	std::cout << std::endl;

	return 0;

}