
#include <iostream>

class Stack{

private:
	int size; // Why?- so that in this implemetation the size cannot
	          // be modified once instantiated.
	Stack stackArray;

public:
	// Constructor
	Stack(int size){
		this->size = size;
		int * stackArray = new int[this->size];
	}

};


int main(){

	Stack testStack(10);

	std:: cout << "We have liftoff" << std::endl;
	return 0;

}