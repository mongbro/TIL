using System;
using System.Threading;

namespace ThreadApp
{
    class ThreadApp
    {
        static void ThreadBody()
        {
            Console.WriteLine("In the thread body ...");
        }
        static void Main(string[] args)
        {
            ThreadStart ts = new ThreadStart(ThreadBody);
            Thread t = new Thread(ts);
            Console.WriteLine("*** STart of Main");
            t.Start();
            Console.WriteLine("*** End of Main");
        }
    }
}