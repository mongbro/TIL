using System;

namespace CoffeMakerApp
{
    class CoffeMaker
    {
        public bool onState;
        public void StartCoffeMaker()
        {
            if (onState == true)
                Console.WriteLine("The CoffeMaker is already on");
            else
                onState = true;
            Console.WriteLine("The CoffeMaker is now on");
        }
    }
    class CoffeeMaker
    {
        static void Main(string[] args)
        {
            CoffeMaker maxim = new CoffeMaker();
            maxim.onState = true;
            maxim.StartCoffeMaker();
        }
    }

}