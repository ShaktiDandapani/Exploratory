#pragma once 

#include <iostream>
#include <string>

class Person
{

private:
    std::string name;
    std::string address;
    int age;

public:
    Person() { }
    Person(std::string name, std::string address, int age);
    ~Person() { }
    std::string GetName();

};