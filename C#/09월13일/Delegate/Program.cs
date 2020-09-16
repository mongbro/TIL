using System;
delegate void SampleDelegate();
class DelegateClass
{
    public void DelegateMethod()
    {
        Console.WriteLine("In the DelegateClass.DelegateMethod ...");
    }
}
namespace Delegate
{
    class Program
    {
        static void Main(string[] args)
        {
            DelegateClass obj = new DelegateClass();
            SampleDelegate sd = new SampleDelegate(obj.DelegateMethod);
            sd();
        }
    }
}
