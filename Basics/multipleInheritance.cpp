#include<iostream>


class Mammal 
{
public:
	Mammal()
	{
		std::cout << " Mammals can give direct birth. \n"<< std::endl;
	}
};

class WingedAnimal
{
public:
	WingedAnimal()
	{
		std::cout <<" Winged animal can flap. \n" << std::endl;
	}
};

class Bat: public Mammal, public WingedAnimal
{

    public:
    	Bat()
    	{
    		std::cout << " Bat can do both. \n";
    	}

};

int main()
{
	Bat b1;
	return 0;
}