#include <iostream> 
#include <set>


int main()
{
	std::set<int> myset; 
	myset.insert(7);
	myset.insert(2);
	myset.insert(-3);
	myset.insert(9);
	myset.insert(51);
	myset.insert(-90);
	myset.insert(1000);



	std::set<int>::const_iterator it;
	it = myset.cbegin();

	while(it != myset.cend())
	{
		std::cout << *it << " ";
		// Curiosity in the next line
		// std::cout << &it << " ";
		++it;
	}

	it = myset.cbegin();
	while(it != myset.cend())
	{
		std::cout << typeid(it).name() << std::endl;
		++it;
	}

	std::cout << '\n';

	return 0;
}