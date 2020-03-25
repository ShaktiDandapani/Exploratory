#include <iostream>
#include <string>


int main()
{

    std::string name = "Shakti";
    // Creates a pointer to the start 
    // of the string, and there in 
    // can be accessed using ptr;
    const char* ptr = name.c_str();

    // pointer to a null terminated repr
    // of the string i.e. "Shakti\0";

    for (int i=0; i < name.length(); i++)
    {
        std::cout << ptr[i];
    }



    return 0;
}