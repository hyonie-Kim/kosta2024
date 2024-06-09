using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Property
{
    internal class Program
    {
        class BirthdayInfo
        {
            private string name;
            private DateTime birthday;

            public string Name
            {
                get { return name; }
                set { name = value; }
            }
            public DateTime Birthday
            {
                get
                {
                    return birthday;
                }
                set
                {
                    birthday = value;
                }
            }

            public int Age
            {
                get
                {
                    // 현재까지의 tick 시간
                    return new DateTime(DateTime.Now.Subtract(birthday).Ticks).Year;
                }
            }

        }
        
       
        static void Main(string[] args)
        {
            BirthdayInfo birth = new BirthdayInfo();
            birth.Name = "효니";
            birth.Birthday = new DateTime(1990, 11, 20);

            Console.WriteLine($"Name : {birth.Name}");
            //현재 DateTime 개체의 값을 해당하는 짧은 날짜 문자열 표현으로 변환
            Console.WriteLine($"Birthday : {birth.Birthday.ToShortDateString()}");
            Console.WriteLine($"Age : {birth.Age}");


        }
    }
}
