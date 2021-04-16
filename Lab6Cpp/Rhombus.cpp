#include "Rhombus.h"

double Rhombus::GetSideLength(Point& point1, Point& point2)            // private method for getting length of the side. Used in the constructor and methods GetArea(), GetPerimeter()
{
    return sqrt(pow((point2.GetX() - point1.GetX()), 2) + pow((point2.GetY() - point1.GetY()), 2));
}

Rhombus::Rhombus(Point points[4])
{
    const int pointsQuantity = 4;
    if (points != nullptr)
    {
        for (int i = 0; i < pointsQuantity; i++)
            _points[i] = Point(points[i].GetX(), points[i].GetY());
        double length = GetSideLength(_points[0], _points[3]);
        double lengthNow;
        for (int i = 1; i < pointsQuantity; i++)        // checking whether all sides have equal lengthes
        {
            lengthNow = GetSideLength(_points[i], _points[i - 1]);
            if (lengthNow != length)
                throw NotARhombusException("Not all sizes have equal lengthes");
        }
    }
    else throw std::invalid_argument("Points array was null");
}

Point* Rhombus::GetPoints()      // method for getting the copy of array of Points for the Rhombus
{

    Point* pointsCopy = new Point[_pointsQuantity];
    for (int i = 0; i < _pointsQuantity; i++)
        pointsCopy[i] = Point(_points[i].GetX(), _points[i].GetY());
    return pointsCopy;
}

double Rhombus::GetArea() {
    return 0.5 * GetSideLength(_points[0], _points[2]) * GetSideLength(_points[1], _points[3]);
}

double Rhombus::GetPerimeter() {
    return 4 * GetSideLength(_points[0], _points[3]);
}