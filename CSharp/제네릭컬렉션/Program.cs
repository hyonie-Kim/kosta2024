using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 제네릭컬렉션
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //ArrayList ar = new ArrayList(10);
            //ar.Add(1);
            //ar.Add(2.34);
            //ar.Add("string");

            //int i = (int)ar[0];
            //double d = (double)ar[1];
            //string s = (string)ar[2];

            //Console.WriteLine("{0}, {1}, {2}",i,d,s);

            List<string> list = new List<string>();
            list.Add("C#");
            list.Add("ASP.NET");
            list.Add("재밌다.");
            //list.Add(1234);

            foreach (string item in list)
            {
                Console.WriteLine(item);
            }
                
        }
    }
}
