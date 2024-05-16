using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 익명타입
{
    class Human
    {
        public string Name { get; set; }
        public int Age { get; set; }

        public Human(string aName, int aAge)
        {
            Name = aName;
            Age = aAge;
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
        }
    }
}
