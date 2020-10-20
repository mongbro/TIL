using System;

class Fraction
{
    int numerator;          // 분자 필드
    int denominator;        // 분모 필드
    public Fraction(int num, int denom) // 생성자
    {
        numerator = num;
        denominator = denom;
    }
    public void PrintFraction()
    {
        Console.WriteLine(numerator + "/" + denominator);
    }
}

namespace FractionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Fraction f = new Fraction(1, 2);
            f.PrintFraction();
        }
    }
}
