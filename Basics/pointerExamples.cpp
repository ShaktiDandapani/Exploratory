#include <iostream>


// & - reference operator
// gives you the address occupied by a variable

// var -> variable, &var -> address of the variable
// in hexadecimal form

//  -- * is a dereference operator
// int *p here it is not the dereference pointer (difference)

int main()
{

	int var1 = 3;
	int var2 = 24;
	int var3 = 17;


	// each address differs by 4 bytes
	// because INT :P 32 bits
	std::cout<< &var1 << std::endl;
	std::cout<< &var2 << std::endl;
	std::cout<< &var3 << std::endl;


	// Pointers with dereference ops
	int *pc, c;

	c = 5;

	std::cout << "Address of C (&c): " << &c << std::endl;
	std::cout << "Value of c (c): " << c << std::endl << std::endl;

	pc = &c; // memory of the address to c stored in pc (obvious)
	std::cout << "Address that the pointer holds (pc)" << pc << std::endl;
	std::cout << "Contento of the address pointer pc holds (*pc): " << *pc << std::endl;

	c = 11; // The content inside address &c has changed ma dude, 5 to 11
    std::cout << "Address that the pointer holds (pc)" << pc << std::endl;
	std::cout << "Contento of the address pointer pc holds (*pc): " << *pc << std::endl;

	*pc = 2; // again ma dude changing the value in the address space
	std::cout << "Address of C (&c): " << &c << std::endl;
	std::cout << "Value of c (c): " << c << std::endl << std::endl;

	return 0;
}