#include <iostream>

/*

A simple linear search implementation
using arrays

*/


int linear_search(int inpArray[], int key)
{

	for (int index = 0; index < 5; index++)
	{
		if (key == inpArray[index])
		{
			// std::cout << " Hey I found it at index: " << index << std::endl;
			return index;
		}
	}

	return -1;

}

int main(){

	int arrayX[5] = {30, 10, 1, 14, 16} ;

	// here it begins
	// size of array = sizeof(arrayX) / sizeof(arrayX[0])
	// numerator = size of the array in bytes (complete) = 5 * 4 = 20 bytes
	// denominator = size of 0th element = 4 bytes
	// size = numerator / denominator = 20 / 4 = 5 units (boom)
	int key = 1;

	int res_index;

	res_index = linear_search(arrayX, key);

	std::cout << "Found the number at index " << res_index << std::endl;

	return 0;
}