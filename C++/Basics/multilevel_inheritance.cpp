#include <iostream>

class A
{
public:
	void display()
	{
		std:: cout << "base class content\n";
	}
};

class B : public A 
{

};

class C : public A 
{
public:
	void display()
	{
		// A::display(); // using scope resolution op.
		std::cout << "Na aaah not base here\n";
	}
};


int main()
{

	C cObj;

	cObj.display();

	return 0 ;
}