#include "Circle.h"

using namespace std;

Circle::Circle(double radius)
{
    if (radius >= 0)
        _radius = radius;
    else
        throw std::invalid_argument("Given radius is not a positive number or zero");
}

double Circle::GetRadius() {
    return _radius;
}

double Circle::GetArea() {
    return M_PI * _radius * _radius;
}

double Circle::GetPerimeter() {
    return 2 * M_PI * _radius;
}