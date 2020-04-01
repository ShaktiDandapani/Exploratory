#include <iostream>

int main()
{

    std::cout << "Enter Three Numbers please" << std::endl;

    int a, b, c;

    std::cin >> a >> b >> c;

    if ( a < 1 || a > 1000 || b < 1 || b > 1000 || c < 1 || c > 1000 )
    {
        exit(-1);
    }

    std::cout << (a+b+c);



    return 0;
}