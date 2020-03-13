#include<iostream>

class Area
{
private:
	int length;
	int breadth;

public:
	// Constuctor
	Area(): length(5), breadth(2){} // preferred method 

	Area(int l, int b): length(l), breadth(b) {} // again preferred way of declaring
	// Alternative declaration
	// Area(int l, int b)
	// {
	// 	this->length = l;
	// 	this->breadth = b;
	// }

	void GetLength()
	{
		std::cout << "Enter length and breadth please respectively: \n";
		std::cin >> length >> breadth;
	}

	int AreaCalculation()
	{
		return (length * breadth);
	}

	void DisplayArea(int temp)
	{
		std::cout << "\n Area: \n" << temp;
	}
};

int main()
{

	Area areaObject1;
	Area areaObject2;
	int temp;

	// Obtaining input from the user
	areaObject1.GetLength();
	temp = areaObject1.AreaCalculation();
	areaObject1.DisplayArea(temp);

	// calculating based on default arguments
	temp = areaObject2.AreaCalculation();
	areaObject2.DisplayArea(temp);

	Area areaObject3(5, 6);

	int newArea3 = areaObject3.AreaCalculation();

	std::cout<<"New object 3's area: " << newArea3 << "\n";

	return 0;
}