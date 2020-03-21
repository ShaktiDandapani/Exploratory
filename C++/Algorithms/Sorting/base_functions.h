#pragma once 

void swap(int* a, int* b)
{
	// addition based swapping
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void displayArray(int arr[], int size)
{

	for (int index=0; index < size; index++)
	{
		std::cout << arr[index] << " ";
	}
	std::cout << std::endl;

}