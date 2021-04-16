#include "Point.h"

Point::Point() {
    _x = 0;
    _y = 0;
}

Point::Point(double x, double y)
{
    _x = x;
    _y = y;
}

double Point::GetX() {
    return _x;
}

double Point::GetY() {
    return _y;
}

Point& Point::operator=(const Point& rightPoint) {
    _x = rightPoint._x;
    _y = rightPoint._y;
    return *this;
}