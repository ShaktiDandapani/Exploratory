// Calculator basic using template method design

#include<iostream>

template <class T>
class Calculator
{
private:
	T num1, num2; 
public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}

	void displayResult()
	{
		std::cout << "Numbers are: " << num1 << " and " << num2 << "." << std::endl;
		std::cout << "Addition is: " << add() << std::endl;
		std::cout << "Subtraction is: " << sub() << std::endl;
		std::cout << "Division is: " << div() << std::endl;
		std::cout << "Multiplication is: " << mul() << std::endl;
	}

	T add()
	{
		return num1 + num2;
	}

	T sub()
	{
		return num1 - num2;
	}

	T div()
	{
		return num1 / num2;
	}

	T mul()
	{
		return num1 * num2;
	}
};

int main()
{
	Calculator<int> intCalc(2, 1);
	Calculator<float> floatCalc(2.4, 1.2);

	std::cout << "Int Results: " << std::endl;
	intCalc.displayResult();

	std::cout << "Float Results: " << std::endl;
	floatCalc.displayResult();

	return 0;
}