using IronPython.Hosting;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

// 암묵적 타입은 타입을 명시하지 않고, var 키워드로 선언
// 변수의 실제 타입은 컴파일러가 초기식을 보고 추론

namespace 암묵적_타입
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //var x = 10;
            //var y = 5;
            //var str = "문자열";

            //Console.SetCursorPosition(x, y);
            //Console.WriteLine(str);

            // 명시적
            //List<MyNameSpace.MyDefinedClass> list = new List<MyNameSpace.MyDefinedClass>(10);

            // 암묵적
            //var list = new List<MyNameSpace.MyDefinedClass>(10);

            //int[] ar = { 1, 2, 3, 4, 5, 6 }; 

            //foreach(var n in ar)
            //{
            //    Console.WriteLine(n);
            //}

            //dynamic value; // var는 컴파일 중에 타입 결정, dynamic은 실행중에 결정
            //value = 5;
            //Console.WriteLine(value);

            //value = 3.14;
            //Console.WriteLine(value);

            //value = "문자열";
            //Console.WriteLine(value);

            // Ironpython 엔진 생성
            var python = Python.CreateEngine();
            
            // 실행할 파이썬 스크립트 작성
            string script = @"
a = 3
b = 4
print(a+b)
";
            
            // 파이썬 코드 실행
            python.Execute(script);

        }
    }
}
