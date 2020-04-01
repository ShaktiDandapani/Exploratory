#include <iostream>
#include <stdio.h>


void PrintMaxOfFour(int& a, int& b, int& c, int& d)
{

    int max = 0;

    if ( a > max)
    {
        max = a;
    }
    
    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    if (d > max)
    {
        max = d;
    }

    std::cout << max << std::endl;

}

int main()
{

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    PrintMaxOfFour(a, b, c, d);

    return 0;

}