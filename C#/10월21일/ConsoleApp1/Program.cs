using System;
using System.Threading;

namespace ConsoleApp1
{
    class ThreadProperty
    {
        public void ThreadBody()
        {
            Thread myself = Thread.CurrentThread;
            Monitor.Enter(this);
            for(int i = 1; i <= 3; i++)
            {
                Console.WriteLine("{0} is activated => {1}", myself.Name, i);
                Thread.Sleep(10);
            }
            Monitor.Exit(this);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            ThreadProperty obj = new ThreadProperty();
            ThreadStart ts = new ThreadStart(obj.ThreadBody);
            Thread t1 = new Thread(ts);
            Thread t2 = new Thread(ts);
            t1.Name = "Apple";
            t2.Name = "Orange";
            t1.Start();
            t2.Start();
        }
    }
}
