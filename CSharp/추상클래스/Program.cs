using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


// abstract 추상클래스, 객체 생성 불가
namespace 추상클래스
{

    abstract class SmartPhone
    {
        public abstract void Network();


        public abstract void Camera();
        public abstract void CallPhone();

     }

         class Samsung : SmartPhone
        {
            public override void Network()
            {
                Console.WriteLine("삼성 네트워크 기능");
            }
            public override void Camera()
            {
                Console.WriteLine("카메라 기능");
            }
            public override void CallPhone()
            {
                Console.WriteLine("삼성 통화 기능");
            }

        }

     class Apple : SmartPhone
    {
        public override void Network()
        {
            Console.WriteLine("애플 네트워크 기능");
        }
        public override void Camera()
        {
            Console.WriteLine("애플 카메라 기능");
        }
        public override void CallPhone()
        {
            Console.WriteLine("애플 통화 기능");
        }

    }

    class Huawei : SmartPhone
    {
        public override void Network()
        {
            Console.WriteLine("화웨이 네트워크 기능");
        }
        public override void Camera()
        {
            Console.WriteLine("화웨이 카메라 기능");
        }
        public override void CallPhone()
        {
            Console.WriteLine("화웨이 통화 기능");
        }

    }


    internal class Program
    {
        static void Main(string[] args)
        {
            SmartPhone sm = new Apple();
            sm.Network();
            sm.Camera();
            sm.CallPhone();

        }
    }
}
