using System;

class Stack<StackType>
{
    private StackType[] stack = new StackType[100];
    private int sp = -1;
    public void push(StackType element)
    {
        stack[++sp] = element;
    }
    public StackType pop()
    {
        return stack[sp--];
    }
}
namespace GenericClassApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack<int> stk1 = new Stack<int>();
            Stack<double> stk2 = new Stack<double>();
            stk1.push(1);
            stk1.push(2);
            stk1.push(3);
            Console.WriteLine("integer stack : " + stk1.pop() + " " + stk1.pop() + " " + stk1.pop() + " ");
            stk2.push(1.5);
            stk2.push(2.5);
            stk2.push(3.5);
            Console.WriteLine("double stack : " + stk2.pop() + " " + stk2.pop() + " " + stk2.pop() + " ");
        }
    }
}
