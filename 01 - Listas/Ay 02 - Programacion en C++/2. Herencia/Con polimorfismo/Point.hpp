#pragma once

class Point
{
// Protected permite que los atributos tambien sean visibles para las clases
// derivadas.
protected:
    float x, y;

public:
    // Constructor por defecto. Este constructor se llama de forma implicita
    Point();

    Point(float x, float y);

    // Con la palabra _virtual_, admitiremos polimorfismo en este metodo
    virtual void showCoordinates();
};