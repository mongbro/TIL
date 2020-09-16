using System;

class PropertyClass
{
    private int privateValue;
    public int PrivateValue
    {
        get { return privateValue; }
        set { privateValue = value; }
    }
    public void PrintValue()
    {
        Console.WriteLine("Hidden Value = " + privateValue);
    }
}

namespace Property
{
    class Property
    {
        static void Main(string[] args)
        {
            int n;
            PropertyClass obj = new PropertyClass();
            obj.PrivateValue = 100;
            obj.PrintValue();
            n = obj.PrivateValue;
            Console.WriteLine("value = " + n);
        }
    }
}
