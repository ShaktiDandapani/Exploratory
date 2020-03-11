#include<iostream>

// Abstract class
// has no method/ function implementation
// only signatures i.e. method/ function
// declarations (can be thought of as 
// forward declarations).
class Shape
{
protected:
	float l;
public:
	void getData()
	{
		std::cin >> l;
	}

	// failure to implement this in the 
	// derived class will result in a 
	// abstract derived class as well.
	virtual float calculateArea() = 0;
};

class Square : public Shape 
{
public:
	float calculateArea()
	{
		return l*l;
	}
};

class Circle : public Shape 
{
public:
	float calculateArea()
	{
		return 3.14 * l * l;
	}
};


int main()
{
	Square sObj;
	Circle cObj;

	std::cout << "Enter the length of the square to get the area: \n";
	sObj.getData();
	std::cout << "Enter the radius of the circle to get the area: \n";
	cObj.getData();

	std::cout << "Area of the square: " << sObj.calculateArea() << std::endl;
	std::cout << "Area of the circle: " << cObj.calculateArea() << std::endl;

	return 0;
}