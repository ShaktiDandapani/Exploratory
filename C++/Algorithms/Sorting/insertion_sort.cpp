#include <iostream>
#include "base_functions.h" // displayArray and swap


int main()
{

	int a[8] = {9, 4, 5, 2, 3, 1, 6, 7};

	int i;
	int curr;
	int j;


    displayArray(a, 8);

	// starts from 1 as it is assumed
	// the first element is already
	// in a sorted sub array

	// write it down on paper to be clear again.
	for (i = 1;  i < 8; i++)
	{
		curr = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > curr)
		{
			// swap(&a[j], &a[j + 1]);
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j + 1] = curr;
	}


	displayArray(a, 8);

}