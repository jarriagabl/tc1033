#ifndef POINT_H
#define POINT_H
#include <cmath>

class Point
{
    double x;
    double y;

public:
    Point(): x{0}, y{0} {}

    Point(double x, double y): x{x}, y{y} {}

    double getX();

    double getY();

    void setX(double);

    void setY(double);

    double distance(Point);
};

#endif