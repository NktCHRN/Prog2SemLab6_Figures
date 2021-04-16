using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FiguresLib
{
    public class NotARhombusException : Exception                           // user exception. It is thrown is the constructor of class Rhombus
    {
        public NotARhombusException() { }
        public NotARhombusException(string message) : base(message) { }
    }
}
