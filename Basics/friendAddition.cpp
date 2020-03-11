#include<iostream>

// forward declaration
class B;

class A
{
private:
	int numA;

public:
	A(): numA(12) { }
	// friend here
	friend int add(A, B);
};

class B
{
private:
	int numB;
public:
	B(): numB(1){ }

	friend int add(A, B);
};

int add(A objA, B objB)
{
	return (objA.numA + objB.numB);
}


int main()
{
	A objectA;
	B objectB;

	std::cout << "Sum: " << add(objectA, objectB) << std::endl;
	return 0;
}