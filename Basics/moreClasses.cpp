// TEsting the declaration of classes and object instantiation
// again
#include <iostream>

class Test
{

// data hiding
private:
	int data1;
	float data2;

public:
	void func1()
	{
		data1 = 2;
		std::cout << "Eh data here is:" << data1 << std::endl;
	}

	float func2()
	{
		data2 = 3.5;
		return data2;
	}
};



// objects
int main()
{

	Test o1;
	Test o2;

	o1.func1();

	std::cout << o2.func2() << std::endl;

	return 0;
}