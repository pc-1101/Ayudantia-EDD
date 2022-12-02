// Version del programa con el operador new

#include "Person.hpp"

#include <iostream>

void changeName(Person* p, std::string name)
{
    p->setName(name);
}

int main()
{
    Person* p = new Person("Pablo", 21);

    changeName(p, "Ignacio");

    std::cout << p->getName() << std::endl;

    delete p;
}

/*
Version similar a la version con punteros, pero ahora creamos una persona
con el operador new. Al crear objetos con new, estos se guardan en la memoria
heap, y estaran ahi durante todo el programa. Esto es ventajoso ya que no
tenemos que preocuparnos de que un objeto se elimine de manera automatica, pero
tambien es peligroso porque los objetos seguiran ocupando memoria aunque ya no 
se usen, por eso hay que asegurarse de eliminarlos manualmente, como se ve en
la linea 20.
*/