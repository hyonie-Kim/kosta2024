namespace 연습문제02
{
    internal class Program
    {
        static void Main(string[] args)
        {

            var nameCard = new { Name = "김세현", Age = 20 };
            Console.WriteLine("이름: {0}, 나이: {1}", nameCard.Name, nameCard.Age);

            var complex = new {Real=3, Imaginary = -12};
            Console.WriteLine("Real: {0}, Imaginary: {1}", complex.Real, complex.Imaginary);
            
        }
    }
}
