// Object orientd way to handle the GPA students example
#include<iostream>

class Test 
{
private:
	int num;
	float* ptr;

public:
	// Constructor
	Test()
	{
		std::cout << "Enter total number of students" << std::endl;
		std::cin >> num;

		ptr = new float[num];

		std::cout << " Enter the GPA of the students please" << std::endl;
		for(int i = 0; i < num; ++i)
		{
			std::cout << "Student" << i + 1 << " : ";
			std::cin >> *(ptr + i); 
		}
	}

	// Destructor
	~Test()
	{
		delete [] ptr;
	}
}