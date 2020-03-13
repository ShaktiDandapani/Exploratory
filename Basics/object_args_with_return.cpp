#include<iostream>


class Complex2

{

private:
	int real;
	int imag;

public:
	Complex2(): real(0), imag(0) {}

	void readData()
	{

		std::cout << "Enter real and imaginary numbers please: " << std::endl;
		std::cin >> real >> imag;
	}

	Complex2 addComplexNumbers(Complex2 comp2)
	{
		// temp should take real-0 and imag-0 given the constructor
		// kind of a dummy so that it does not affect an object made
		// with this class having it's own real and imaginary values
		// here in this example c1
		Complex2 temp;

		temp.real = real + comp2.real;

		temp.imag = imag + comp2.imag;
	}

	void displayData()
	{
		std::cout << "Sum = " << real << "+" << imag << "i\n";
	}
};

int main()
{
    Complex2 c1;
    Complex2 c2;
    Complex2 c3;

    c1.readData();
    c2.readData();

    c3 = c1.addComplexNumbers(c2);

    c3.displayData();

	return 0;
}