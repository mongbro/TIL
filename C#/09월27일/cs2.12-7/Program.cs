using System;
//반지름을 읽어 공의 부피와 표면적을 구하는 프로그램

namespace cs2._12_7
{
    class Program
    {
        static void Main(string[] args)
        {
            const double PIE = 3.141592;
            int r = int.Parse(Console.ReadLine());
            double v, s;

            v = (double)4 / 3 * PIE * r * r * r;
            s = 4 * PIE * r * r;

            Console.WriteLine("반지름이 " + r + "인 공의 부피 : " + v);
            Console.WriteLine("반지름이 " + r + "인 공의 표면적 : " + s);
        }
    }
}
