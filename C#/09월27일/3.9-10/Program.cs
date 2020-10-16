using System;
// 거스름돈의 동전의 개수가 최소가 되는 프로그램

namespace _3._9_10
{
    class Program
    {
        static void Main(string[] args)
        {
            int pay, c500, c100, c50, c10, c5, c1, max;
            c1 = c5 = c10 = c50 = c100 = c500 = 0;
            Console.WriteLine("1000원 미만의 값을 입력 : ");
            pay = int.Parse(Console.ReadLine());
            max = pay;
            while (pay > 500)
            {
                c500++;
                pay -= 500;
            }
            while (pay > 100)
            {
                c100++;
                pay -= 100;
            }
            while (pay > 50)
            {
                c50++;
                pay -= 50;
            }
            while (pay > 10)
            {
                c10++;
                pay -= 10;
            }
            while (pay > 5)
            {
                c5++;
                pay -= 5;
            }
            while (pay > 0)
            {
                c1++;
                pay -= 1;
            }
            Console.WriteLine("500원 " + c500 + "개, 100원 " + c100 + "개, 50원 " + c50 + "개, 10원" + c10 + "개, 5원 " + c5 + "개, 1원 " + c1 + "개");
        }
    }
}
