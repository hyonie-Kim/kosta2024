using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 싱글톤패턴
{
    public class Singleton
    {
        private static Singleton instance;

        private Singleton() { }

        public static Singleton getInstance()
        {
            if (instance == null)
            {
                instance = new Singleton();
            }
            return instance;
        }

        public void ShowMessage()
        {
            Console.WriteLine("싱글톤 패턴");
        }
    }


    internal class Program
    {
        static void Main(string[] args)
        {

            Singleton.getInstance().ShowMessage();

        }
    }
}
