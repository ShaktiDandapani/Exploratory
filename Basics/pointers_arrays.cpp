#include<iostream>


int main()
{


	int *ptr1;
	int a[5]; // empty array 

	ptr1 = &a[2]; // points to the third element address of the array a

	std::cout << ptr1 << std::endl;

	// ptr + 1 moves the pointer to the address of the next element
	// based on the type of element in the array
	// if int ptr + 1 moves 4 bytes 
	// if char ptr + 1 moves 1 byte 
	// if float ptr 1 + moves it by 8 bytes 
	std::cout << ptr1 + 1 << std::endl;

	// Another example 
	float arr[5];
	float *ptr;

	std::cout << "Displaying address using arrays" << std::endl;

	for (int i =0; i < 5; i++)
	{
		std::cout << "&arr[" << i << "] = " << &arr[i] << std::endl;
	}

	ptr = arr;

	std::cout << "Displaying address using pointers" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "ptr + " << i << " = " << ptr + i << std::endl;
	}

	// to output values you can use *ptr;

}