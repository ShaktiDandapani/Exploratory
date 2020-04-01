#include <iostream>
#include <cstdlib>


void PrintArraySum(int* arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }

    std::cout << sum;

}


int main()
{

    int n;
    int temp = 0;

    std::cin >> n;

    int* arr = new int[n];

    if (n < 1000)
    {
        for (int i = 0; i < n; i++)
        {
            std::cin >> temp;
            if (temp <= 1000)
            {
                arr[i] = temp;
            }
            else
            {
                exit(-1);
            }
        }        
    }


    PrintArraySum(arr, n);

    return 0;
}