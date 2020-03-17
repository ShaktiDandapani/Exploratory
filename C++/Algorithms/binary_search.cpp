#include <iostream>


int binary_search(int inpArray[], int key, int size)
{

	int mid;
	int left = 0;
	int right = size - 1;

	while (left < right)
	{
		mid = (left + right) / 2;
		// std::cout << "Mid: " << mid << std::endl;
		if (key > inpArray[mid])
		{
			left = mid + 1;
		}
		else 
		{
			right = mid;	
		}
	}

	if (inpArray[left] == key)
	{
		return left;
	}

	return -1;

}


int main()
{
	// assuming ascending order
	int arrayX[10] = { 1 , 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//
	int num = sizeof(arrayX);
	int den = sizeof(arrayX[0]);

	int sizeArrayX = num / den;

	int left = 0;
	int right = sizeArrayX - 1;

	int key = 3;
	int key2 = 9;
	int key3 = 5;

	int res_index = binary_search(arrayX, key, sizeArrayX);

	std::cout << "Found the index for " << key << " at " << res_index << std::endl;

	return 0;
}