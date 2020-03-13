#include <iostream>

// enumerate example 

enum suit{
	club = 0,
	diamonds = 10,
	hearts = 20,
	spades = 3
} card;

int main()
{
   card = club;

   std::cout << "Size of the enumerate variable " << sizeof(card) << " bytes\n";
   return 0;
}