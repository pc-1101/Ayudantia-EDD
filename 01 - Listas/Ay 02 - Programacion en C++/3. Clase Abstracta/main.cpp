#include "include/Dog.hpp"
#include "include/Cat.hpp"

int main()
{
    // Animal* a = new Animal(); <== La clase animal no puede ser instanciada
    // al ser una clase abstracta.

    Animal* d = new Dog();
    Animal* c = new Cat();

    // Por la naturaleza misma de una clase abstracta, esta permite
    // polimorfismo.
    d->makeSound();
    c->makeSound();
}