#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vect;

	for(int count=0; count < 6; ++count)
	{
		vect.push_back(count);
	}

	// Declaring a read-only iterator
	std::vector<int>::const_iterator it;

	// assign it to the start of the vector
	it = vect.cbegin(); 

	while (it != vect.cend())
	{
		std::cout << *it << " ";
        // pretty sure it increments by 4 bytes for int
        // to the next element :D 
		++it; 
	}

	std::cout << "\n";

	return 0;

}