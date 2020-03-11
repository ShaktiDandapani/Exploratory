#include<iostream>

class Test
{
private:
	int i;

public:	 					// data / instance variable
	void display()          // Member function
	{
		std::cout << "Inside the member function\n";
	}
	void displayAgain();    // Another member fnction implemented using
	                        // an external definition

};

void Test::displayAgain(){

	std::cout << "Inside another member function\n";
}


int main(){

	Test newObj; // instantiate the class
	newObj.display();
	newObj.displayAgain();

}