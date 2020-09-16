using System;
class Stack<ST>
{
    private int sp = -1;
    private ST[] stack = new ST[100];
    public void push(ST e)
    {
        stack[++sp] = e;
    }
    public ST pop()
    {
        return stack[sp--];
    }
}
namespace Generic2
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
            stk2.push(1.5);
            stk2.push(2.5);
            stk2.push(3.5);
            Console.WriteLine("integer stack : " + stk1.pop() + " " + stk1.pop() + " " + stk1.pop() + " ");
            Console.WriteLine("double stack : " + stk2.pop() + " " + stk2.pop() + " " + stk2.pop() + " ");
        }
    }
}
