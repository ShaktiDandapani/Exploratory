#include <vector>
#include <iostream>

int main()
{
	std::vector<int> vect1;

	for(int count=0; count < 6; ++count)
	{
		vect1.push_back(10 - count); // insert at end of array
	}
	for(int index=0; index < vect1.size(); ++index)
	{
		std::cout << vect1[index] << ' ';
	}

	std::cout<<std::endl;

	return 0;

}