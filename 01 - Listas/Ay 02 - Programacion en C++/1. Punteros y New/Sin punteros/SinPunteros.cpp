// Version del programa sin usar punteros

#include "Person.hpp"

#include <iostream>

void changeName(Person p, std::string name)
{
    p.setName(name);
}

int main()
{
    // Person p = Person("Pablo", 21);
    Person p("Pablo", 21);

    changeName(p, "Ignacio");

    std::cout << p.getName() << std::endl;
}

/*
Primero se crea una persona en la linea 15, y la pasamos como parametro a la
funcion changeName(), sin embargo, no se pasa la persona original, sino que
se crea una copia, por eso el programa imprime "Destruyendo persona" dos veces,
porque al acabarse el scope de la funcion, se destruye la copia, pero el objeto
original sigue existiendo. Por esta misma razon el programa imprime "Pablo"
en vez de "Ignacio", porque le cambiamos el nombre a la copia, no al objeto
original.
*/