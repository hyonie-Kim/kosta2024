using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace 스레드생성콘솔
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("주 스레드 시작");
            // 2. 델리게이트로 등록하기
            ThreadStart ts = new ThreadStart(ThreadFunction);

            // 3. 스레드 객체생성
            Thread thd = new Thread(ts);

            // 4. 스레드 시작
            thd.Start();
            Console.WriteLine("워커 스레드 시작: " + thd.ThreadState.ToString());
            Console.WriteLine("주 스레드 종료");
            Thread.Sleep(100);
            //thd.Abort();
            thd.Join();
        }


        // 1.  스레드 함수 만들기
        public static void ThreadFunction()
        {
            // 스레드에서 실행할 작업

            try
            {
                int count = 0;
                while (count < 1000)
                {
                    count++;
                    Console.WriteLine("스레드 동작중...");
                }
            }
            catch (ThreadAbortException e)
            {
                Console.WriteLine("Abort 예외 발생: " + e);
            }
            finally
            {
                Console.WriteLine("finally");
            }
           
        }
    }
}
