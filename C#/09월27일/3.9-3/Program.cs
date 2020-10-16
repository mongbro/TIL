using System;
//정수를 읽어서 회문수인지 아닌지 판별하는 프로그램

namespace _3._9_3
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine()), m = 0, l;
            l = n;
            for(int i = 0; l != 0; i++)
            {
                m *= 10;
                m += l % 10;        // m에 n의 수를 거꾸로 저장
                l /= 10;
            }

            if (m == n)
                Console.WriteLine("회문수입니다.");
            else
                Console.WriteLine("회문수가 아닙니다.");
        }
    }
}
