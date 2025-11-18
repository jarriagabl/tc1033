#include <cmath>

class Point
{
    float x;
    float y;

public:
    Point(): x{0}, y{0}
    {
    }

    Point(float x, float y): x{x}, y{y}
    {
    }

    float getX()
    {
        return x;
    }

    float getY()
    {
        return y;
    }

    void setX(float x)
    {
        this->x = x;
    }

    void setY(float y)
    {
        this->y = y;
    }

    float distance(Point other_point)
    {
        return sqrt(pow(x - other_point.x, 2) + pow(y - other_point.y, 2));
    }
};