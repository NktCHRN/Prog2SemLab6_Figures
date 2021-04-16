#include "ConsoleProjectLib.h"

void ProgramInfo()						// prints information about the program
{
    std::cout << "Lab N6. Nikita Chernikov, IS-02" << std::endl;
    std::cout << "Researching of polymorphism of classes" << std::endl;
    std::cout << "Variant 15" << std::endl;
}

Point EnterPoint(int number)             // method for entering the coordinates
{
    double x, y;
    do
    {
        std::cout << "Enter the point" << number << " x:" << std::endl;
        std::cin >> x;
        std::cin.clear();
        std::cin.ignore(8192, '\n');
    } while (std::cin.fail());
    do
    {
        std::cout << "Enter the point" << number << " y:" << std::endl;
        std::cin >> y;
        std::cin.clear();
        std::cin.ignore(8192, '\n');
    } while (std::cin.fail());
    Point point(x, y);
    return point;
}