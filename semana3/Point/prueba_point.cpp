#include <iostream>
#include <random>
#include "Point.h"

using std::cout;

int main()
{
    Point p1{5, 10};
    Point p2{};

    p2.setX(10);
    p1.setY(15);

    cout << "La distancia entre los puntos es " << p1.distance(p2) << "\n";
}