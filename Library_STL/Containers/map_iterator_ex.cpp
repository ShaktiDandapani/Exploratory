#include<iostream>
#include<map>
#include<string>

int main()
{
	std::map<int, std::string> mymap;
	mymap.insert(std::make_pair(4, "apple"));
	mymap.insert(std::make_pair(2, "orange"));
	mymap.insert(std::make_pair(1, "banana"));
	mymap.insert(std::make_pair(3, "grapes"));
	mymap.insert(std::make_pair(6, "mango"));
	mymap.insert(std::make_pair(5, "peach"));

	// declare a const iterator and assign 
	// to start of vector
	// auto - type inference
	auto it{ mymap.cbegin() };

	while (it != mymap.cend())
	{
		std::cout<< it->first << " = " << it->second << " \n";
		++it;
	}

	std::cout << '\n';

	return 0;
}