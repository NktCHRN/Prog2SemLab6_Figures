using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FiguresLib
{
    public abstract class Figure            //abstract class for all figures
    {
        public abstract double GetArea();                   //prototype of method for getting area of the figure
        public abstract double GetPerimeter();              //prototype of method for getting the perimeter of the figure
    }
}
