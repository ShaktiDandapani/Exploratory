/* Here goes a friend function, something I have been itching to 
implement :D */
#include <iostream>

class Distance
{
private:
	int meter;
public:
	Distance(): meter(0) { }

	// friend function here 
	friend int addFive(Distance);
};

// not meaning ful but a 
// meaningful implementation would be
// when you need to do something with objects
// of different classes 
// a. (think about how child classses in multiple
//    inheritance an be affected)
// b. If it is a math algo, which has 2 classes 
//    for different purposes but one need is to 
//    use a theorem which involves both the classes
//    but an objct declaration would be unnecessary/
int addFive(Distance d)
{
	// woah the private integer has been
	// accessed.
	d.meter += 5;
	return d.meter;
}

int main()
{
	Distance D;
	std::cout << "Distance: " << addFive(D);
	return 0;
}