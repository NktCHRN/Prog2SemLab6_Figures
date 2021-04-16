using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FiguresLib
{
    public class Rhombus : Figure
    {
        private Point[] _points;                                        // points of the Rhombus
        public Rhombus(Point[] points)
        {
            const int pointsQuantity = 4;
            _points = new Point[pointsQuantity];
            if (points != null)
            {
                for (int i = 0; i < pointsQuantity; i++)
                {
                    if (points[i] != null)
                        _points[i] = new Point(points[i].X, points[i].Y);
                    else throw new NullReferenceException(String.Format("Point {0} was null", i));
                }
                double length = GetSideLength(_points[0], _points[3]);
                double lengthNow;
                for (int i = 1; i < pointsQuantity; i++)        // checking whether all sides have equal lengthes
                {
                    lengthNow = GetSideLength(_points[i], _points[i - 1]);
                    if (lengthNow != length)
                        throw new NotARhombusException(String.Format("Size of side point{0} - point{1}: {2} != size of point0 - point 3: {3}", i, i - 1, lengthNow, length));
                }
            }
            else throw new NullReferenceException("Points array was null");
        }
        private double GetSideLength(Point point1, Point point2)            // private method for getting length of the side. Used in the constructor and methods GetArea(), GetPerimeter()
        {
            return Math.Sqrt(Math.Pow((point2.X - point1.X), 2) + Math.Pow((point2.Y - point1.Y), 2));
        }
        public Point[] GetPoints()      // method for getting the copy of array of Points for the Rhombus
        {
            Point[] pointsCopy = new Point[_points.Length];
            for (int i = 0; i < _points.Length; i++)
                pointsCopy[i] = new Point(_points[i].X, _points[i].Y);
            return pointsCopy;
        }
        public override double GetArea() => 0.5 * GetSideLength(_points[0], _points[2]) * GetSideLength(_points[1], _points[3]);
        public override double GetPerimeter() => 4 * GetSideLength(_points[0], _points[3]);
    }
}
