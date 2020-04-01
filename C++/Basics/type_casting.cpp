#include <iostream>

int main()
{
    int int_var = 1500000000;
    int_var = (int_var * 10) / 10; 

    std::cout << "int_var = " << int_var << std::endl;

    // Static casting
    int_var = 1500000000;
    int_var = (static_cast<double>(int_var) * 10) / 10;

    std::cout << "int_var = " << int_var << std::endl;

    return 0;
}