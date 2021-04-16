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
    std::cout << "Enter the point" << number << " x:" << std::endl;
    std::cin >> x;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(8192, '\n');
        std::cout << "Enter the point" << number << " x:" << std::endl;
        std::cin >> x;
    };
    std::cout << "Enter the point" << number << " y:" << std::endl;
    std::cin >> y;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(8192, '\n');
        std::cout << "Enter the point" << number << " y:" << std::endl;
        std::cin >> y;
    };
    Point point(x, y);
    return point;
}