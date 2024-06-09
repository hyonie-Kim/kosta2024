namespace 연습문제01
{

    class NameCard
    {
        private int age;
        private string name;

        public int Age
        {
            get; set;
        }
        public string Name
        {
            get;set;
        }
    }
    internal class Program
    {

        static void Main(string[] args)
        {
            NameCard myCard = new NameCard();
            myCard.Age = 24;
            myCard.Name = "상현";

            Console.WriteLine("나이: {0}, 이름: {1}", myCard.Age, myCard.Name);
        }
    }
}
