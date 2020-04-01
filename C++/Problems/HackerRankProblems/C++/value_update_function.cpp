#include <iostream>
#include <cmath>1 
#include <stdio.h>

void update(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *a + *b;
    *b = temp - *b;
    *b = std::abs(*b);
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}