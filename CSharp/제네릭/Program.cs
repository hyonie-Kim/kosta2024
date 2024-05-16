using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 제네릭
{
    class WrapperInt
    {
        private int value;
        public WrapperInt() { value = 0; }
        public WrapperInt(int aValue)
        {
            value = aValue;
        }

        //public int getValue()
        //{
        //    return value;
        //}
        //public void setValue(int aValue)
        //{
        //    value = aValue;
        //}

        public int Data
        {
            get { return this.value; }
            set { this.value = value; }
        }

        public void OutputValue()
        {
            Console.WriteLine(value);
        }
    }



    //class WrapperString
    //{
    //    private string value;
    //    public WrapperString() { value = null; }

    //    public string getValue()
    //    {
    //        return value;
    //    }
    //    public void setValue(string aValue)
    //    {
    //        value = aValue;
    //    }


    //    public void OutputValue()
    //    {
    //        Console.WriteLine(value);
    //    }
    //}

    class Wrapper<T>
    {
        private T value;
        public Wrapper() { value = default(T); }

        public Wrapper(T aValue)
        {
            value = aValue;
        }
        public T getValue()
        {
            return value;
        }
        public void setValue(T aValue)
        {
            value = aValue;
        }

        public void OutputValue()
        {
            Console.WriteLine(value);
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            //WrapperInt wrapperInt = new WrapperInt(1234);
            //wrapperInt.OutputValue();

            //WrapperString wrapperString = new WrapperString();
            //wrapperString.OutputValue();

            Wrapper<int> wrapperInt = new Wrapper<int>(0515);
            wrapperInt.OutputValue();

            Wrapper<string> wrapperString = new Wrapper<string>("문자열");
            wrapperString.OutputValue();

        }
    }
}
