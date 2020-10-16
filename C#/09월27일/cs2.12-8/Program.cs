using System;
//연도를 읽어 윤년인지를 판별하는 프로그램

namespace cs2._12_8
{
    class Program
    {
        static void Main(string[] args)
        {
            int y = int.Parse(Console.ReadLine());
            if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
                Console.WriteLine("윤년입니다.");
            else
                Console.WriteLine("윤년이 아닙니다.");
        }
    }
}
