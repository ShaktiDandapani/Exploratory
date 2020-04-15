#include "UniversityPerson.hpp"


Person::Person(std::string name, std::string address, int age)
{
    this->name = name;
    this->address = address;
    this->age = age;
}

std::string Person::GetName()
{
    return this->name;
}

// overload << operator equivalent to toString() in Java    