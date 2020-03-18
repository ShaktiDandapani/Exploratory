#pragma once 

void swap(int* a, int* b)
{
	// addition based swapping
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void displayArray(int arr[])
{

	for (int index=0; index < 5; index++)
	{
		std::cout << arr[index] << " ";
	}
	std::cout << std::endl;

}