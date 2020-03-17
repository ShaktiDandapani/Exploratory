#include <iostream>

// Just to test whats up ! 



int main()
{

	int s;
	signed int si;
	unsigned int ui;

	short int sI;
	signed short int ss;
	unsigned short int us;

	long int li;
	signed long int sli;
	unsigned long int uli;

	std::cout << "----------------------------" << std::endl;

	std::cout << " For integers| " << std::endl;
	std::cout << " Integer: " << s << " occupies " << sizeof(s) << " bytes" << std::endl;;
	std::cout << " Signed Integer: " << si << " occupies " << sizeof(si) << " bytes" << std::endl;;
	std::cout << " Unsigned Integer: " << ui << " occupies " << sizeof(ui) << " bytes" << std::endl;;



	std::cout << "----------------------------" << std::endl;


	std::cout << " For short integers: " << std::endl;
	std::cout << " Short Integer: " << sI << " occupies " << sizeof(s) << " bytes" << std::endl;;
	std::cout << " Short Signed Integer: " << ss << " occupies " << sizeof(si) << " bytes" << std::endl;;
	std::cout << " Short Unsigned Integer: " << us << " occupies " << sizeof(ui) << " bytes" << std::endl;;

	std::cout << "----------------------------" << std::endl;

	std::cout << " For Long integers| " << std::endl;
	std::cout << " Long Integer: " << li << " occupies " << sizeof(s) << " bytes" << std::endl;;
	std::cout << " Signed Long Integer: " << sli << " occupies " << sizeof(si) << " bytes" << std::endl;;
	std::cout << " Unsigned Long Integer: " << uli << " occupies " << sizeof(ui) << " bytes" << std::endl;;

	return 0;


}