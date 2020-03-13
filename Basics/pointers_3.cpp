#include<iostream>


int main() 
{
	float arr[5];

	std::cout << "Displaying address using pointers notation: " << std::endl;

	// sizeof(arr) ?
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr + i << std::endl;
	}
}