using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace loop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //int i = 0;
            //while (i < 5)
            //{
            //    Console.WriteLine("Programming");

            //    i++;
            //}

            //int i = 1;
            //while(i < 10)
            //{
            //    Console.WriteLine("2 x " + i + " = " + 2*i);
            //    i++;
            //}

            int sum = 0;

            for (int i = 1; i <= 100; i++) {
                sum += i;
               
            }
            Console.WriteLine("1부터100까지의 합:", sum);

        }
    }
}
