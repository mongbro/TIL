using System;
//두 수를 입력받아 최대공약수와 최소 공배수를 구하는 프로그램

namespace _3._9_5
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, m, tmp, gcd, lcm, a, b;            // gcd = 최대공약수, lcm = 최소공배수
            Console.Write("입력1 : ");
            n = int.Parse(Console.ReadLine());
            Console.Write("입력2 : ");
            m = int.Parse(Console.ReadLine());

            a = n;
            b = m;
            while(m != 0)               // 유클리드 호제법
            {
                tmp = n % m;
                n = m;
                m = tmp;
            }
            gcd = n;

            lcm = a * b / gcd;

            Console.WriteLine("최대공약수 : " + gcd + "\n최소공배수 : " + lcm);
        }
    }
}
