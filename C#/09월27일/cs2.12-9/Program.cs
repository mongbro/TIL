using System;
//일련의 정수를 읽어(자료의 끝은 0) 제일 큰 수를 출력하는 프로그램

namespace cs2._12_9
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, max = 0;
            while (true)
            {
                n = int.Parse(Console.ReadLine());
                if (n == 0)
                    break;
                if (max < n)
                    max = n;
            }
            Console.WriteLine("========================\n");
            Console.WriteLine("가장 큰 수는 " + max + "입니다.");
        }
    }
}
