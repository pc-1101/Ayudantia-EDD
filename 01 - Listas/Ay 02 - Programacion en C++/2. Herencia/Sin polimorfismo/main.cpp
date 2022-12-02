#include "Point3D.hpp"

int main()
{
    // Se crea con el constructor por defecto
    Point p1;
    Point p2 = Point(1, 2);
    // Se crea con el constructor por defecto
    Point3D p3;
    Point3D p4 = Point3D(1, 2, 3);
    // Polimorfismo?
    Point p5 = Point3D(1, 1, 1);

    p1.showCoordinates();
    p2.showCoordinates();
    p3.showCoordinates();
    p4.showCoordinates();
    p5.showCoordinates();
}

/*
EL punto 5, a pesar de ser una instancia de Point3D, imprime solo x e y.
Esto es porque p5 es de tipo Point, y por lo tanto llamara el metodo de la
clase base. Como se puede ver, no se admite polimorfismo en C++ por defecto.
*/
