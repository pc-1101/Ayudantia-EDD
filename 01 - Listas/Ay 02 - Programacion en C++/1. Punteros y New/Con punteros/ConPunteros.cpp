// Version del programa con punteros

#include "Person.hpp"

#include <iostream>

void changeName(Person* p, std::string name)
{
    // (*p).setName(name);
    p->setName(name);
}

int main()
{
    // Person p = Person("Pablo", 21);
    Person p("Pablo", 21);
    
    changeName(&p, "Ignacio");

    std::cout << p.getName() << std::endl;
}

/*
Primero se crea una persona en la linea 15, y pasamos su *direccion* como
parametro a la funcion changeName(). Por esta razon, al cambiar el nombre
dentro de la funcion, estaremos cambiando el nombre del objeto original.
*/