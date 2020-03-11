#include<iostream>

template <typename T>
void Swap(T &n1, T &n2)
{
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main()
{
	int i1 = 1;
	int i2 = 2;

	float f1 = 1.1;
	float f2 = 2.2;

	char c1 = 'a';
	char c2 = 'b';

	std::cout << "Before passing data to function template.\n";
	std::cout << "i1 = " << i1 << "\ni2 = " << i2;
	std::cout << "\nf1 = " << f1 << "\nf2 = " << f2;
	std::cout << "\nc1 = " << c1 << "\nc2 = " << c2;

	Swap(i1, i2);
	Swap(f1, f2);
	Swap(c1, c2);

	std::cout << "\nAfter passing data to function template.\n";
	std::cout << "i1 = " << i1 << "\ni2 = " << i2;
	std::cout << "\nf1 = " << f1 << "\nf2 = " << f2;
	std::cout << "\nc1 = " << c1 << "\nc2 = " << c2 << std::endl;

	return 0;
}