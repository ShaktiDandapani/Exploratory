#include <algorithm> // std::min_element, std::max_element
#include <iostream>
#include <list>
#include <numeric>   // std::iota


int main()
{
	std::list<int> li(6);
	// Fill li with numbers starting at 0
	std::iota(li.begin(), li.end(), 0);

	// auto it { li.cbegin() };

	// as opposed to 
	// std::list<int>::const_iterator it;

	// it = li.cbegin();

	// while (it != li.cend())
	// {
	// 	std::cout << *it << " ";
	// }

	// why the for loop below and note the code
	// above !
	for (auto n: li) std::cout << n << ' ';

	std::cout << '\n';

	// get the min and max out 

	std::cout << *std::min_element(li.begin(), li.end()) << ' '
	          << *std::max_element(li.begin(), li.end()) << '\n';

	return 0;
}