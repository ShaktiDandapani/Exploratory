#include <iostream>

int main()
{
    int arr[6] = {1, 2, -5, 4, -3, 2};

    int max = 0;

    for (int i = 0; i < 6; i++)
    {
        int sum = 0;

        for (int j = i + 1; j < 6; j++)
        {
            sum += arr[j];
            if (max < sum)
            {
                max = sum;
            }
        }
    }


    std::cout << "Maximum Subarray: " << max << std::endl;

    return 0;
}