#include<iostream>

// just a simple data type declaration
// and the amount of memory they are alloted

enum day {mon, tue, wed, thu, fri, sat, sun};
// assigning default values to enum objects
enum week {mond = 1, tues = 2, weds = 3, thur = 4, frid = 5, satu = 10, sund = 11}; 

int main()
{

	char c = 'A';            // 1 byte  = 1 * 8 = 8 bits
	int i = 1;               // 2 bytes = 2 * 8 = 16 bits
	float f = 3.1456;        // 4 bytes = 4 * 8 = 32 bits
	double b = 8.4e-4;       // 8 bytes = 8 * 8 = 64 bits


	day dayObj;
	dayObj = wed;
	std:: cout << "Day " << dayObj+1 << std:: endl;
}