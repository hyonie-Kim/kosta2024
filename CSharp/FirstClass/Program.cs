using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstClass
{
    class Dog
    {
        private int eyes, nose, mouse, ears;
        public void bark()
        {
            Console.WriteLine("멍멍");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Dog dog = new Dog();
            dog.bark();
        }
    }
}
