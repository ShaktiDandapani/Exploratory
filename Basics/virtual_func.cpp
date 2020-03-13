#include<iostream>




class Weapon
{
public:

	virtual void features() 
	{
		std::cout << "Loading weapon features.\n";
	}
};

class Bomb : public Weapon 
{
public:
	void features()
	{
		this->Weapon::features();
		std::cout << "Loading bomb features.\n";
	}
};

class Gun : public Weapon
{
public:
	void features()
	{
		this->Weapon::features();
		std::cout << "Loading gun features.\n";
	}
};


class Loader
{
public:
	void loadFeatures(Weapon *weapon)
	{
		weapon -> features();
	}
};

int main()
{
	Loader *l = new Loader;
	Weapon *w;
	Bomb b;
	Gun g;

	w = &b;
	l->loadFeatures(w);
	
	w = &g;
	l->loadFeatures(w);


	return 0;
}