#include <iostream>


int main()
{

    int number_of_arrays = 0;
    int number_of_queries = 0;

    std::cin >> number_of_arrays >> number_of_queries;
    
    int size_of_array = 0;

    int** storage_arr = new int*[number_of_arrays];

    for (int i = 0; i < number_of_arrays; i++)
    {
        std::cin >> size_of_array;
        for (int j = 0; j < size_of_array; j++)
        {   
            // error as there is no allocation
            // to store variables ! 
            // new int[size_of_array];
            std::cin >> storage_arr[i][j] ;
        }

        // store array in a[i]
    }


    for (int q = 0; q < number_of_queries; q++)
    {
        int q_array_index;
        int q_array_element;
        std::cin >> q_array_index >> q_array_element;
        std::cout << storage_arr[q_array_index][q_array_element] << std::endl;
    }

    // delete the array to prevent memory leak

    return 0; 

}