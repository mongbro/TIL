using System;

class Integer
{
    public int i;
    public Integer(int i)
    {
        this.i = i;
    }
}

namespace CallByObjectReferenceApp
{
    class Program
    {
        static void Swap(Integer x, Integer y)
        {
            int tmp = x.i;
            x.i = y.i;
            y.i = tmp;
            Console.WriteLine("Swap : x = {0}, y = {1}", x.i, y.i);
        }
        static void Main(string[] args)
        {
            Integer x = new Integer(1);
            Integer y = new Integer(2);
            Console.WriteLine("Before : x = {0}, y = {1}", x.i, y.i);
            Swap(x, y);
            Console.WriteLine("After : x ={0}, y = {1}", x.i, y.i);
        }
    }
}
