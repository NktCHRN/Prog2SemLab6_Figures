#pragma once

class Figure {
public:
	virtual double GetArea() = 0;                   //prototype of method for getting area of the figure
	virtual double GetPerimeter() = 0;              //prototype of method for getting the perimeter of the figure
};