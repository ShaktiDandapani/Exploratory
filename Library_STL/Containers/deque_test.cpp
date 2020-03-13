#include <iostream>
#include <deque>

int main()
{
	std::deque<int> deq;
	for(int count=0; count < 3; ++count)
	{
		deq.push_back(count); // end of array insertion
		deq.push_front(10 - count); // start of array insertion
	}

	for(int index=0; index < deq.size(); ++index)
	{
		std::cout << deq[index] << ' ';
	}

	std::cout << '\n';

	return 0;
}