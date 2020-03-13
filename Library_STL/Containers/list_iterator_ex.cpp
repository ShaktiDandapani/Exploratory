#include<iostream>
#include<list> // linked list ?

int main()
{
	std::list<int> li;

	for(int count=0; count < 6; ++count)
	{
		li.push_back(count);
	}

	std::list<int>::const_iterator it; 

	it = li.cbegin();

	while(it != li.cend())
	{
		std::cout << *it << " ";
		++it; 
	}

	std::cout << '\n';

	return 0;
}