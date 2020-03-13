#include<iostream>

// passing objects into the class

class Complex
{

private:
	int real;
	int imag;
public:
	Complex(): real(0), imag(0) { }

	void readData()
	{
		std::cout << "Enter real and imaginary number respectively:"<<std::endl;
		std::cin >> real >> imag;
	}

	void addComplexNumbers(Complex comp1, Complex comp2)
	{
		real = comp1.real + comp2.real;

		imag = comp1.imag + comp2.real;
	}

	void displaySum()
	{
		std::cout << "Sum = " << real << " + " << imag << "i" << std::endl;
	}


};



int main()
{

	Complex c1, c2, c3;

	c1.readData();
	c2.readData();

	c3.addComplexNumbers(c1, c2);

	c3.displaySum();

	return 0;
}