#pragma once

class Animal
{
public:
    // Para declarar una clase abstracta, al menos una funcion debe ser
    // abstracta. Una funcion abstracta tiene la siguiente estructura:
    virtual void makeSound() = 0;
};