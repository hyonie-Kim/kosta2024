using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace @delegate
{
    internal class Program
    {

        delegate int CalcDelegate(int x, int y);

        static int Plus(int a, int b)
        {
            return a + b;
        }

        static void Main(string[] args)
        {

        }
    }
}
