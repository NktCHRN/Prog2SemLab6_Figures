using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FiguresLib;

namespace Lab6CS
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Lab №6";
            ProgramInfo();
            Console.WriteLine();
            const int rhombusPointsQuantity = 4;
            Point[] rhombusPoints = new Point[rhombusPointsQuantity];
            for (int i = 0; i < rhombusPointsQuantity; i++)
            {
                EnterPoint(out rhombusPoints[i], i + 1);
            }
            Figure rhombus1;
            try                                                     // check whether entered coordinates can be coordinates of a rhombus
            {
                rhombus1 = new Rhombus(rhombusPoints);
            }
            catch (NotARhombusException)                            // if exception is throws, the rhombus th formed from defined(hard-coded) coordinates
            {
                Console.WriteLine("You entered not a rhombus");
                Console.WriteLine("The rhombus will be created with defined coordinates: ");
                Console.WriteLine("(-1,  0)\n( 0,  2)\n( 1,  0)\n( 0, -2)");
                Point[] definedRhombusPoints = { new Point(-1, 0), new Point(0, 2), new Point(1, 0), new Point(0, -2) };
                rhombus1 = new Rhombus(definedRhombusPoints);
            }
            Console.WriteLine("The area of your rhombus is: {0:F6}", rhombus1.GetArea());
            Console.WriteLine("The perimeter of your rhombus is: {0:F6}", rhombus1.GetPerimeter());
            Console.WriteLine();
            double radius;
            bool parsed;
            do
            {
                Console.WriteLine("Enter the radius of the circle: ");
                parsed = double.TryParse(Console.ReadLine().Replace('.', ','), out radius);
            }
            while (!parsed || radius <= 0);             // checking whether radius is bigger than 0
            Figure circle1 = new Circle(radius);
            Console.WriteLine("The area of your circle is: {0:F6}", circle1.GetArea());
            Console.WriteLine("The perimeter of your circle is: {0:F6}", circle1.GetPerimeter());
            Console.WriteLine("\nPress ENTER to quit");
            Console.Read();
            }
        static void ProgramInfo()                                       // prints information about the program
        {
            Console.WriteLine("Lab №6. Nikita Chernikov, IS-02");
            Console.WriteLine("Researching of polymorphism of classes");
            Console.WriteLine("Variant 15");
        }
        static void EnterPoint(out Point point, int number)             // method for entering the coordinates
        {
            double x, y;
            bool parsed;
            do
            {
                Console.WriteLine("Enter the point{0} x: ", number);
                parsed = double.TryParse(Console.ReadLine().Replace('.', ','), out x);
            }
            while (!parsed);
            do
            {
                Console.WriteLine("Enter the point{0} y: ", number);
                parsed = double.TryParse(Console.ReadLine().Replace('.', ','), out y);
            }
            while (!parsed);
            point = new Point(x, y);
        }
    }
}
