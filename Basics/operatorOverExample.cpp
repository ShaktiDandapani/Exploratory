#include<iostream>

class TestOp
{

private:
	int count;

public:
	TestOp(): count(5) {}

	void operator ++()
	{
		count = count + 1;
	}

	void Display() {
	 std::cout << "Count: " << count << std::endl;
	}
};


int main()
{
	TestOp t;

	++t;

	t.Display();

	return 0;
}