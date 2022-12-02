#pragma once

#include <string>

class Person
{
private:
    // Si no se coloca _using namespace std_, entonces hay que usar
    // el operador de scope (::).
    std::string name;
    int age;

public:
    // En un header file, solo van las declaraciones de los metodos,
    // no su implementacion.

    Person(std::string name, int age);

    // Destructor
    ~Person();

    std::string getName();

    int getAge();

    void setName(std::string name);

    void setAge(int age);
};