#include <iostream>

#include "UniversityPerson.hpp"


int main()
{

    Person new_person("Shakti", "Sheffield", 23);

    std::cout << "Hi: " << new_person.GetName() << std::endl;
    return 0;
}