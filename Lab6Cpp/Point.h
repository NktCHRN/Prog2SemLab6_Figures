#pragma once

class Point
{
private:
    double _x;
    double _y;
public:
    Point();
    Point(double x, double y);
    double GetX();
    double GetY();
    Point& operator=(const Point& rightPoint);
};