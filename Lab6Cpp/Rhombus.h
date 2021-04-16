#pragma once
#define _USE_MATH_DEFINES
#include "Figure.h"
#include "Point.h"
#include "NotARhombusException.h"
#include <stdexcept>
#include <cmath>

class Rhombus : public Figure
{
private:
    const int _pointsQuantity = 4;
    Point _points[4];                                            // points of the Rhombus
    double GetSideLength(Point& point1, Point& point2);            // private method for getting length of the side. Used in the constructor and methods GetArea(), GetPerimeter()
public:
    Rhombus(Point points[4]);
    Point* GetPoints();      // method for getting the copy of array of Points for the Rhombus
    double GetArea();
    double GetPerimeter();
};