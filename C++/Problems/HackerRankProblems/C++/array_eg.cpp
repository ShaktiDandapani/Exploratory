#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <string>

/* 

Read in an array of numbers (stdin)
bounds n < 1000 for number of elements in the array
bounds a < 10000 for each element in the array

- read in 
- print out in the reverse order.

*/

void PrintArrayInReverse(std::vector<int>& i_array)
{
    std::reverse(i_array.begin(), i_array.end());
    for (int i = 0; i < i_array.size(); i++)
    {
        std::cout << i_array[i] << " ";
    }
}

int main()
{


    int size;
    std::cin >> size;

    std::vector<int> narr;
    int input;

    for (int i = 0; i < size; i++)
    {
        std::cin >> input;
        narr.push_back(input);

    }

    PrintArrayInReverse(narr);

    return 0;

}