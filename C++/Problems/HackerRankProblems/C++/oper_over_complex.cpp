#include <iostream>
#include <string>

class Complex 
{

public:
    int a, b;
    void Input(std::string);
    Complex operator +(Complex&);
    std::ostream operator<<(Complex& comp);
};

void Complex::Input(std::string value)
{

    // split string based on + 
    // split rhs from I and extract int
    // a -> real, b -> imaginary

    // split string into 4 chars
    const char* number_input = value.c_str();

    std::cout << "a: " << number_input[0] <<  " b: " << number_input[3] << std::endl;
    
    // casting from a char
    a = (int)number_input[0] - '0';
    b = (int)number_input[3] - '0';

    std::cout << "a: " << a <<  " b: " << b << std::endl;

}

Complex Complex::operator +(Complex& number_1)
{
    Complex res;

    res.a = this->a + number_1.a;
    res.b = this->b + number_1.b;

    return res;
}

std::ostream& operator <<(std::ostream& os, Complex number)
{
    std::cout << number.a << "+i" << number.b << std::endl;
}


int main()
{
    Complex x, y;
    std::string s1, s2;

    std::cin >> s1;
    std::cin >> s2;

    x.Input(s1);
    y.Input(s2);

    Complex z = x + y;

    std::cout << z

    return 0;
}