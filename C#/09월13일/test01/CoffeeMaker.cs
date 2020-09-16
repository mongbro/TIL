using System;
using System.Net;

class CoffeeMakerS
{
    public bool onState;
    public void StartCoffeeMaker()
    {
        if (onState == true)
            Console.WriteLine("aready on");
        else
            onState = true;
        Console.WriteLine("now on");
    }
}

namespace test01
{
    class CoffeeMaker
    {
        static void Main(string[] args)
        {
            global::CoffeeMakerS cm = new global::CoffeeMakerS();

            cm.StartCoffeeMaker();
        }
    }
}
