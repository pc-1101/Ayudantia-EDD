#pragma once

#include "Point.hpp"

class Point3D : public Point
{
private:
    float z;

public:
    Point3D();

    Point3D(float x, float y, float z);

    // Sobreescritura del metodo de la clase base
    void showCoordinates();
};