#include<iostream>


int main()
{
	float arr[5];

	// arr has the same use as p in:
	// float* p;
	// p = arr

	// INserting data using pointers
	std::cout << "Enter 5 numbers: ";

	for (int i = 0; i < 5; ++i)
	{
		// the format *(arr + i) inserts 
		// value in the address arr + i
		std::cin >> *(arr+i);
	}

	std::cout << "Displaying data: " << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		// arr[i] = *(arr+i)
		std::cout << *(arr+i) << std::endl;
		std::cout << arr[i] << std::endl;
	}

	return 0;
}

// // Code from website
// using namespace std;

// int main() {
//     float arr[5];
    
//    // Inserting data using pointer notation
//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; ++i) {
//         cin >> *(arr + i) ;
//     }

//     // Displaying data using pointer notation
//     cout << "Displaying data: " << endl;
//     for (int i = 0; i < 5; ++i) {
//         cout << *(arr + i) << endl ;
//     }

//     return 0;
// }