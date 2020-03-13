#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>

int main()
{
	std::list<int> li(6);
	std::iota(li.begin(), li.end(), 0);

	// Find the value 3 in the list

	auto it{ find(li.begin(), li.end(), 3)};

	if (it == li.end())
	{
		std::cout << "3 was not found sir!\n";
	}
	else
	{
		
		// Insert 8 right before 3
		// &it will stop before the address of 
		// 3 ? as *it points to 3

		li.insert(it, 8);		
	}


	// neat 
	for(int i : li) // for loop with iterators
	{
		std::cout << i << ' ';
	}

	std::cout << '\n';

	return 0;
}