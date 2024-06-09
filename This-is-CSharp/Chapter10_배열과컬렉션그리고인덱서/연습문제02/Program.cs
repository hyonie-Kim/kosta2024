namespace 연습문제02
{


    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] A = { { 3, 2 }, { 1, 4 } };
            int[,] B = { { 9, 2 }, { 1, 7 } };

            int[,] C = new int[2, 2];

            for(int i=0; i<2; i++)
            {
                for(int j=0; j<2; j++)
                {
                    C[i, j] = 0; // 초기화
                    for (int k = 0; k < 2; k++)
                    {
                        C[i, j] += A[i, k] * B[k, j];
                    }
                }
            }

            // 결과 행렬 출력
            Console.WriteLine("행렬 A * B =");
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(C[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
