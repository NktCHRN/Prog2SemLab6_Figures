#pragma once
#define _USE_MATH_DEFINES
#include "Figure.h"
#include <stdexcept>
#include <cmath>

class Circle : public Figure {
private:
    double _radius;                 // radius of the circle
public:
    Circle(double radius);
    double GetRadius();
    double GetArea();
    double GetPerimeter();
};