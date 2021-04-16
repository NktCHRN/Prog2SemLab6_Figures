#include <iostream>
#include "Rhombus.h"
#include "Circle.h"
#include "ConsoleProjectLib.h"

using namespace std;

int main()
{
    ProgramInfo();
    cout << endl;
    const int rhombusPointsQuantity = 4;
    Point rhombusPoints[rhombusPointsQuantity];
    for (int i = 0; i < rhombusPointsQuantity; i++)
        rhombusPoints[i] = EnterPoint(i + 1);
    Figure* rhombus1;
    try                                                     // check whether entered coordinates can be coordinates of a rhombus
    {
        rhombus1 = new Rhombus(rhombusPoints);
    }
    catch (const NotARhombusException& exc)                            // if exception is throws, the rhombus th formed from defined(hard-coded) coordinates
    {
        cout << "You entered not a rhombus" << endl;
        cout << "The rhombus will be created with defined coordinates: " << endl;
        cout << "(-1,  0)\n( 0,  2)\n( 1,  0)\n( 0, -2)" << endl;
        Point definedRhombusPoints[4] = { Point(-1, 0), Point(0, 2), Point(1, 0), Point(0, -2) };
        rhombus1 = new Rhombus(definedRhombusPoints);
    }
    cout << "The area of your rhombus is: " << fixed << (*rhombus1).GetArea() << endl;
    cout << "The perimeter of your rhombus is: " << fixed << (*rhombus1).GetPerimeter() << endl;
    cout << endl;
    double radius = 0.0;
    do
    {
        cout << "Enter the radius of the circle: " << std::endl;
        cin >> radius;
        cin.clear();
        cin.ignore(8192, '\n');
    } while (std::cin.fail() || radius <= 0);             // checking whether radius is bigger than 0
    Figure *circle1 = new Circle(radius);
    cout << "The area of your circle is: " << fixed << (*circle1).GetArea() << endl;
    cout << "The perimeter of your circle is: " << fixed << (*circle1).GetPerimeter() << endl;
    cout << endl;
    system("pause");
}