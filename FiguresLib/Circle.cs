using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FiguresLib
{
    public class Circle : Figure
    {
        private double _radius;                 // radius of the circle
        public Circle(double radius)
        {
            if (radius >= 0)
                _radius = radius;
            else
                throw new ArgumentException(String.Format("{0} is not a positive number or zero", radius), "radius");
        }
        public double GetRadius() => _radius;
        public override double GetArea() => Math.PI * _radius * _radius;
        public override double GetPerimeter() => 2 * Math.PI * _radius;
    }
}
