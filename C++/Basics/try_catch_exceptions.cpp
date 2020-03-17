#include <iostream>


int main()
{
	try
	{
		throw 20;
	}
	catch (int e)
	{
		std::cout << " An exception has occured. No. " << e << std::endl;
	}

	return 0;
}