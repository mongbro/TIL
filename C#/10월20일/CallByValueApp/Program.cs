using System;

namespace CallByValueApp
{
    class Program
    {
        static void Swap(int x, int y)
        {
            int tmp;
            tmp = x;
            x = y;
            y = tmp;
            Console.WriteLine(" Swap: x = {0}, y = {1}", x, y);
        }
        static void Main(string[] args)
        {
            int x = 1, y = 2;
            Console.WriteLine("Before : x = {0}, y = {1}",x, y);
            Swap(x, y);
            Console.WriteLine("After : x = {0}, y = {1}", x, y);
        }
    }
}
