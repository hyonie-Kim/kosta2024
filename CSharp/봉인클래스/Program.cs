using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 봉인클래스
{

    class Base
    {
        public virtual void Message()
        {
            //가상함수 - 오버라이딩하겠다는 것..
            Console.WriteLine("Base");


        }
    }

    class Derived:Base
    {
        public sealed override void Message()
        {
            Console.WriteLine("Derived");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {

            Base B = new Base();
            B.Message();

        }
    }
}
