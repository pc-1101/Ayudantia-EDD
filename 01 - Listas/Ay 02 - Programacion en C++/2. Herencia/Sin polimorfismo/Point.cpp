#include "Point.hpp"

#include <iostream>

Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {}

void Point::showCoordinates()
{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}