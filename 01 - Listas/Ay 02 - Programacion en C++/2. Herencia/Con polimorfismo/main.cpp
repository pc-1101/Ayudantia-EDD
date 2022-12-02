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
    Point* p6 = new Point3D(1, 1, 1);

    p1.showCoordinates();
    p2.showCoordinates();
    p3.showCoordinates();
    p4.showCoordinates();
    p5.showCoordinates();
    p6->showCoordinates();
}

/*
Si ahora admitimos polimorfismo, ¿por que p5 sigue imprimedo solo x e y? Esto
es porque el polimorfismo solo funciona con punteros, como se puede apreciar
en el caso de p6.
*/
