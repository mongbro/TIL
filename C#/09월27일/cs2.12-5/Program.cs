using System;
//사람의 키(H)와 몸무게(W)를 입력받아 비만도(B)를 계산하는 프로그램

namespace cs2._12_5
{
    class Program
    {
        static void Main(string[] args)
        {
            int h, w;
            double sw, b;
            Console.Write("키 : ");
            h = int.Parse(Console.ReadLine());
            Console.Write("몸무게 : ");
            w = int.Parse(Console.ReadLine());
            sw = (h - 100) * 0.9;
            b = (w / sw) * 100;
            Console.WriteLine("표준체중 : " + sw + " 비만도 : " + b);
        }
    }
}