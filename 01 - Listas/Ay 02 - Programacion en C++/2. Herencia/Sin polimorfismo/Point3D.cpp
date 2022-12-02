#include "Point3D.hpp"

#include <iostream>

Point3D::Point3D() : Point(), z(0) {}

Point3D::Point3D(float x, float y, float z) : Point(x, y), z(z) {}

void Point3D::showCoordinates()
{
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}