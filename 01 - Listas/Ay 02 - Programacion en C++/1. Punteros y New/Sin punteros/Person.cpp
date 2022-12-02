#include "Person.hpp"

#include <iostream>

// Para definir los metodos declarados en el header file, hay que usar el
// operador de scope (::) junto con el nombre de la clase antes de cada
// metodo.

Person::Person(std::string name, int age) : name(name), age(age)
{
    std::cout << "Creando persona" << std::endl;
}

Person::~Person()
{
    std::cout << "Destruyendo persona" << std::endl;
}

std::string Person::getName() { return name; }

int Person::getAge() { return age; }

void Person::setName(std::string name) { this->name = name; }

void Person::setAge(int age) { this->age = age; }