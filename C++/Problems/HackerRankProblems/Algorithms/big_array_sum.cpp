#include <iostream>
#include <cstdlib>


void PrintLargeArraySum(int* arr, int size)
{
    long int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }

    std::cout << sum;

}


int main()
{

    int n;
    long int temp = 0;

    std::cin >> n;

    int* arr = new int[n];

    if (n <= 10)
    {
        for (int i = 0; i < n; i++)
        {
            std::cin >> temp;
            if (temp <= 10000000000)
            {
                arr[i] = temp;
            }
            else
            {
                exit(-1);
            }
        }        
    }

    PrintLargeArraySum(arr, n);

    return 0;
}