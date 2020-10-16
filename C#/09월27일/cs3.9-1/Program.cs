using System;
//100 이하의 소수를 구하는 프로그램

namespace cs3._9_1
{
    class Program
    {
        static void Main(string[] args)
        {
            int count;
            for(int i = 2; i <= 100; i++)
            {
                count = 0;
                for(int j = 1; j <= i; j++)
                {
                    if (i % j == 0)
                        count++;
                }
                if (count == 2)
                    Console.Write(i + " ");
            }
        }
    }
}
