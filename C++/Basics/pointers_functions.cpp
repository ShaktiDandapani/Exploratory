#include<iostream>

// FInally pass by value and pass by reference

// Example 1
// function prototype
void swap(int&, int&);
void swapPointerBased(int*, int*);

int main()
{

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	std::cout << " Before Swapping " << std::endl;
	std::cout << " a = " << a << std::endl;
	std::cout << " b = " << b << std::endl;

	swap(a, b);
    std::cout << " \nAfter Swapping " << std::endl;
	std::cout << " a = " << a << std::endl;
	std::cout << " b = " << b << std::endl;

	// For c and d

	std::cout << " Before Swapping " << std::endl;
	std::cout << " c = " << c << std::endl;
	std::cout << " d = " << d << std::endl;

	swapPointerBased(&c, &d); // not the passing of the address
    std::cout << " \nAfter Swapping " << std::endl;
	std::cout << " c = " << c << std::endl;
	std::cout << " d = " << d << std::endl;



	return 0;
}

void swap(int& n1, int& n2)
{
	int temp;

	// the lazy way to do it - expensive
	// but with a temp variable
	temp = n1; 
	n1 = n2;
	n2 = temp;

	// can add the value subtract the value for
	// another kind of swap :D
}

void swapPointerBased(int* n1, int* n2)
{
	// after receiving the addresses
	// they are dereferenced to get their
	// values :) to be swapped
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
