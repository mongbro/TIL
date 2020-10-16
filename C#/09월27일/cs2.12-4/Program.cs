using System;
// 섭씨 온도값(C)을 읽어서 화씨 온도값(F)을 구하는 프로그램

namespace cs2._12_4
{
    class Program
    {
        static void Main(string[] args)
        {
            double c, f;
            c = double.Parse(Console.ReadLine());
            f = (9.0 / 5.0 * c) + 32;
            Console.WriteLine("섭씨 " + c + "도는 화씨 " + f + "도 이다.");
        }
    }
}