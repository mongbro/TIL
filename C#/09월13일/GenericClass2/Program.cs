using System;
using System.Linq.Expressions;

class Stack<StackType>
{
    private StackType[] stack = new StackType[100];
    private int sp = -1;
    public void Push(StackType element)
    {
        stack[++sp] = element;
    }
    public StackType Pop()
    {
        return stack[sp--];
    }
}

namespace GenericClass2
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack<int> stk1 = new Stack<int>();
            Stack<double> stk2 = new Stack<double>();
            stk1.Push(1);
            stk1.Push(2);
            stk1.Push(3);
            stk2.Push(1.5);
            stk2.Push(2.5);
            stk2.Push(3.5);
            Console.WriteLine("integer stack : " + stk1.Pop() + " " + stk1.Pop() + " " + stk1.Pop() + " ");
            Console.WriteLine("double stack : " + stk2.Pop() + " " + stk2.Pop() + " " + stk2.Pop() + " ");
        }
    }
}
