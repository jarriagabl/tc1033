#include "Point.h"

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::distance(Point other_point)
{
    return sqrt(pow(x - other_point.x, 2) + pow(y - other_point.y, 2));
}