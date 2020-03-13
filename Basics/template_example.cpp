// Here in a function template to find the largest number
// given two values are passed to a function, the number
// with the higher ASCII value is displayed
#include<iostream>

// template function
template <class T>
T Large (T n1, T n2)
{

	// conditional operator ma dude
	// from Bachelor's textbook
	return (n1 > n2) ? n1 : n2;
}

int main()
{
	int i1, i2;
	float f1, f2;
	char c1, c2;

	std::cout << "ENter two integers: \n";
	std::cin >> i1 >> i2;
	std::cout << Large(i1, i2) << " is larger. " << std::endl;

    std::cout << "Enter two floats: \n";
	std::cin >> f1 >> f2;
	std::cout << Large(f1, f2) << " is larger. " << std::endl;

	
	std::cout << "ENter two chars: \n";
	std::cin >> c1 >> c2;
	std::cout << Large(c1, c2) << " is larger. " << std::endl;

	return 0;
}