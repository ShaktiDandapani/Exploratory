#include<iostream>
#include<cstring>

int main()
{
	int num;
	std::cout << "Enter total number of students: ";
	std::cin >> num;
	float* ptr;

	// memory allocation on number of floats;
	// the difference by predefining a fixed size 
	// array for example studs[100], might result
	// in excess memory allocated than needed.
	ptr = new float[num];

	std::cout<<"Enter GPA of students" << std::endl;
	for(int i = 0; i < num; ++i)
	{
		std::cout << "Student " << i + 1 << ": ";
		// Remember it's just a pointer :D 
		std::cin >> *(ptr + i);
	}

	std::cout <<"\n Dsplaying GPA of students" << std::endl;
	for(int i = 0; i < num; ++i){
		std::cout << "Student" << i + 1 << " : " << *(ptr+i) << std::endl;
	}

	// Release back to the operating system.
	delete [] ptr;
}