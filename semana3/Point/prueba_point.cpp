#include <iostream>
#include <random>
#include "Point.h"

using std::cout;

// Pasar por copia
void cambia_copia(Point p)
{
    p.setX(15);
    p.setY(25);
}

// Pasar por referencia
void cambia_referencia(Point& p)
{
    p.setX(15);
    p.setY(25);
}

int main()
{
    // Ejemplo uso de Point
    Point p1{5, 10};
    Point p2{};

    cout << "Distancia entre (" << p1.getX() << ", " << p1.getY() << ") y (" << p2.getX() 
        << ", " << p2.getY() << "): " << p1.distance(p2) << "\n";

    // Ejemplo diferencia entre pasar por copia y pasar por referencia
    cout << "Punto original: (" << p1.getX() << ", " << p1.getY() << ")\n";

    cambia_copia(p1);
    cout << "Punto después de cambia_copia: (" << p1.getX() << ", " << p1.getY() << ")\n";

    cambia_referencia(p1);
    cout << "Punto después de cambia_referencia: (" << p1.getX() << ", " << p1.getY() << ")\n";
}